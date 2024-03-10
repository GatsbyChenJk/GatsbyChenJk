#include <iostream>
#include "FileManager.h"
#include "EssayAnalysist.h"
using namespace std;

int main(int argc, char *argv[])
{
	/* 
	//EssayAnalysist模块测试
	string TestStr1 = "今天是星期天，天气晴，今天晚上我要去看电影。";
	string TestStr2 = "今天是周天，天气晴朗，我晚上要去看电影。";
	vector<string> testStrVec,testStr2Vec;
	testStrVec =  EssayAnalysist::CutText(TestStr1);
	testStr2Vec = EssayAnalysist::CutText(TestStr2);
	vector<int> testVec1,testVec2;
	testVec1 = EssayAnalysist::BuildFrequencyVector(testStrVec);
	testVec2 = EssayAnalysist::BuildFrequencyVector(testStr2Vec);
	printf("<");
	for (auto& num : testVec1)
	{
		printf("%d, ", num);
	}
	printf(">\n");

	printf("<");
	for (auto& num : testVec2)
	{
		printf("%d, ", num);
	}
	printf(">\n");

	double result = EssayAnalysist::CaculateSimilarity(testVec1, testVec2);
	printf("the result sim is : %3.2f", result);
	*/

	//FileManager模块测试
	/*string OriginEssay = FileManager::ReadTextAndConvertToString("C:\\Users\\25768\\Desktop\\EssayDetector\\3122004856\\testFiles\\orig.txt");
	if (!OriginEssay.empty())
		printf("读取成功!");
	string Answer = "相似度为99.9%";
	FileManager::WriteAnswerIntoFile(Answer, "C:\\Users\\25768\\Desktop\\EssayDetector\\3122004856\\AnsFiles\\Ans.txt");*/
	
	//读取文章并转为string
	/*if (argv[1] == nullptr)
	{
		printf("参数输入有误！");
		return 0;
	}*/
	string OriginEssay = FileManager::ReadTextAndConvertToString("C:\\Users\\25768\\Desktop\\EssayDetector\\3122004856\\testFiles\\orig.txt");
	//if (argv[2] == nullptr)
	//{
	//	printf("参数输入有误！");
	//	return 0;
	//}
	string CopyEssay = FileManager::ReadTextAndConvertToString("C:\\Users\\25768\\Desktop\\EssayDetector\\3122004856\\testFiles\\orig_0.8_add.txt");
	//分词
	vector<string> CutFromOrigin, CutFromCopy;
	CutFromOrigin = EssayAnalysist::CutText(OriginEssay);
	CutFromCopy = EssayAnalysist::CutText(CopyEssay);
	//计算词频向量
	vector<int> FrequencyOfOrigin, FrequencyOfCopy;
	FrequencyOfOrigin = EssayAnalysist::BuildFrequencyVector(CutFromOrigin);
	FrequencyOfCopy = EssayAnalysist::BuildFrequencyVector(CutFromCopy);
	//计算相似度并写入结果文件
	double DetectResult = EssayAnalysist::CaculateSimilarity(FrequencyOfOrigin, FrequencyOfCopy);	
	string ResultReport = "文章的相似度为:"+ to_string(DetectResult);
	/*if (argv[3] == nullptr)
	{
		printf("参数输入有误！");
		return 0;
	}*/
	FileManager::WriteAnswerIntoFile(ResultReport, "C:\\Users\\25768\\Desktop\\EssayDetector\\3122004856\\AnsFiles\\Ans.txt");

	
	return 0;
}