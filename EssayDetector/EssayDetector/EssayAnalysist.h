#pragma once
#ifndef ESSAYANALYSIST_H
#define ESSAYANALYSIST_H
#include<string>
#include<vector>
#include<map>
#include<sstream>
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
			"../../dict/jieba.dict.utf8",
			"../../dict/hmm_model.utf8",
			"../../dict/user.dict.utf8",
			"../../dict/idf.utf8",
			"../../dict/stop_words.utf8");

		vector<string> words;
		jieba.Cut(Text, words, true);
		return words;
	}
	//构造词频向量
	static vector<int> BuildFrequencyVector(const vector<string>& tokens)
	{
		//词频向量
		map<string, int> FrequencyVector;
		for (const string& word : tokens) 
		{
			FrequencyVector[word]++;
		}
		//转换为只存int的向量
		std::vector<int> FrequencyValues;
		for (const auto& pair : FrequencyVector) 
		{
			FrequencyValues.push_back(pair.second);
		}
		return FrequencyValues;
	}
	//根据词频向量计算文本相似度，基于欧氏距离
	static double CaculateSimilarity(const vector<int>& Vec1, const vector<int>& Vec2)
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
		distance = sqrt(distance);
		//相似度计算
		double similarity = 1.0 / (1.0 + distance);
		return similarity;
	}

};

#endif // !ESSAYANALYSIST_H
