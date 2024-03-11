#pragma once
#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;

static class FileManager
{
public:
	static string ReadTextAndConvertToString(const string& FilePath)
	{
        string content;
        ifstream file(FilePath);
        if (!file.is_open()) 
        {
            cerr << "无法打开文件：" << FilePath << endl;
            return "";
        }
        string line;
        while (std::getline(file, line)) 
        {
            content += line + "\n"; 
        }
        file.close();
        return content;
	}

    static void WriteAnswerIntoFile(const string& Ans, const string& FilePath)
    {
        std::ofstream file(FilePath);
        if (!file.is_open()) 
        {
            std::cerr << "无法打开文件：" << FilePath << std::endl;
            return;
        }
        file << Ans;
        file.close();
        std::cout << "文件写入成功！" << std::endl;
    }
};
#endif // !FILEREADER_H