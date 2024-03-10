#include <iostream>
#include "FileManager.h"
#include "EssayAnalysist.h"
using namespace std;

int main()
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
	return 0;
}