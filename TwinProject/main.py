import argparse
from QuestionCalculator import *
import QuestionCalculator
from FileManager import *

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Generate questions")
    parser.add_argument("-n", "--num_questions", type=int, help="Number of questions to generate")
    parser.add_argument("-r", "--range", type=int, help="Upper limit of the range")
    args, unknown = parser.parse_known_args()
    gen = QuestionGenerator()
    if args.num_questions and args.range:
        questionList = gen.generate_math_questions(args.num_questions,args.range)
        answerList = Calculator.calculate_answers(questionList)
        FileManager.WriteDataIntoTextFile(questionList, '题目', "Questions.txt")
        FileManager.WriteDataIntoTextFile(answerList, '答案', "Answers.txt")