#pragma once
#ifndef ESSAYANALYSIST_H
#define ESSAYANALYSIST_H
#include<string>
#include<vector>
#include<map>
#include<sstream>
#include<cmath>
#include "jieba.hpp"
using namespace std;

static class EssayAnalysist
{
public:
	//分词函数
	static vector<string> CutText(const string& Text)
	{
		//初始化结巴分词器
		cppjieba::Jieba jieba(
			"C:/Users/25768/Desktop/EssayDetector/3122004856/dict/jieba.dict.utf8",
			"C:/Users/25768/Desktop/EssayDetector/3122004856/dict/hmm_model.utf8",
			"C:/Users/25768/Desktop/EssayDetector/3122004856/dict/user.dict.utf8",
			"C:/Users/25768/Desktop/EssayDetector/3122004856/dict/idf.utf8",
			"C:/Users/25768/Desktop/EssayDetector/3122004856/dict/stop_words.utf8");

		vector<string> words;
		jieba.Cut(Text, words, true);
		return words;
	}
	//构造词频向量
	static vector<double> BuildFrequencyVector(const vector<string>& tokens)
	{
		//词频向量
		map<string, double> FrequencyVector;
		for (const string& word : tokens) 
		{
			FrequencyVector[word]++;
		}
		//转换为只存int的向量
		std::vector<double> FrequencyValues;
		for (const auto& pair : FrequencyVector) 
		{
			FrequencyValues.push_back(pair.second);
		}
		return FrequencyValues;
	}

	// 将文本分词后的字符串向量转化为文档集合的二维字符串向量
	static vector<vector<string>> ConvertToDocuments(const vector<string>& tokens, const string& delimiter) 
	{
		vector<vector<string>> documents;
		vector<string> currentDocument;

		// 遍历分词结果
		for (const auto& token : tokens) 
		{
			if (token == delimiter)
			{ // 遇到文档边界
				if (!currentDocument.empty()) 
				{ // 如果当前文档不为空
					documents.push_back(currentDocument); // 将当前文档存储到文档集合中
					currentDocument.clear(); // 清空当前文档
				}
			}
			else 
			{ // 遇到分词结果
				currentDocument.push_back(token); // 将分词结果存储到当前文档中
			}
		}
		// 处理最后一个文档
		if (!currentDocument.empty()) 
		{
			documents.push_back(currentDocument);
		}
		return documents;
	}

	// 计算逆文档频率（IDF）
	static vector<double> CalculateIDF(const vector<vector<string>>& documents) 
	{
		map<string, double> idfValues;
		int totalDocuments = documents.size();
		// 统计包含每个单词的文档数量
		map<string, int> wordDocumentCount;
		for (const auto& document : documents) 
		{
			map<string, bool> uniqueWords;
			for (const auto& word : document) 
			{
				if (!uniqueWords[word]) 
				{
					wordDocumentCount[word]++;
					uniqueWords[word] = true;
				}
			}
		}
		// 计算每个单词的IDF值
		for (const auto& pair : wordDocumentCount) 
		{
			const string& word = pair.first;
			int documentCount = pair.second;
			double idf = log(static_cast<double>(totalDocuments) / (documentCount + 1)); // 加1是为了防止除零错误
			idfValues[word] = idf;
		}	
		vector<double> idfVector;
		// 遍历idfValues，将每个IDF值存储到vector中
		for (const auto& pair : idfValues) 
		{
			idfVector.push_back(pair.second);
		}
		return idfVector;
	}

	//根据词频向量计算文本相似度，基于欧氏距离
	static double CaculateSimilarity(const vector<double>& Vec1, const vector<double>& Vec2)
	{
		size_t VecSize = Vec1.size();
		if (Vec1.empty() || Vec2.empty()) 
		{
			return 0.0;
		}
		else if (Vec1.size() != Vec2.size())
		{
			VecSize = min(Vec1.size(), Vec2.size());
		}
		// 计算欧式距离
		double distance = 0.0;
		for (size_t i = 0; i < VecSize; ++i) {
			distance += pow(Vec1[i] - Vec2[i], 2);
		}
		//考虑规范化
		double NormalizeDistance = sqrt(distance) / (double)VecSize;
		//相似度计算
		double similarity = 1.0 / (1.0 + NormalizeDistance);
		return similarity;
	}

};

#endif // !ESSAYANALYSIST_H
