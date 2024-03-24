from QuestionGenerator import QuestionGenerator
from QuestionCalculator import *
class FileManager:
    @staticmethod
    def WriteDataIntoTextFile(DataList, columnName, FileName):
        try:
            with open(FileName, 'w') as file:
                # 写入列名
                file.write(columnName + '\n')
                # 写入数据
                iter = 0
                for data in DataList:
                    iter += 1
                    file.write(str(iter)+'.\t'+str(data) + '\n')
            print("数据[" + columnName + "]写入完成\n")
        except Exception as e:
            print("写入数据时出错:", e)
#功能测试
if __name__ == "__main__":
    num_questions = 100
    max_operand = 50
    gen = QuestionGenerator()
    question_list = QuestionGenerator.generate_math_questions(gen,num_questions,max_operand)
    answer_list = Calculator.calculate_answers(question_list)
    for i, question in enumerate(question_list, 1):
        print(f"Question {i}: {question}"+"=")
    for i, answer in enumerate(answer_list, 1):
        print(f"Answer {i}: {answer}")
    FileManager.WriteDataIntoTextFile(question_list,'题目',"Questions.txt")
    FileManager.WriteDataIntoTextFile(answer_list,'答案',"Answers.txt")