from fractions import Fraction
from QuestionGenerator import QuestionGenerator
class Calculator:
    @staticmethod
    def evaluate_expression(expression):
        try:
            # 将真分数转换为浮点数进行计算
            expression = expression.replace('×', '*')
            result = eval(expression.replace('÷', '/'))
            # 如果结果是浮点数，将其转换为真分数
            if isinstance(result, float):
                return str(Fraction(result).limit_denominator())
            return str(result)
        except ZeroDivisionError:
            return "Undefined"

    @staticmethod
    def calculate_answers(questions):
        answers = []
        for question in questions:
            answers.append(Calculator.evaluate_expression(question))
        return answers

if __name__ == "__main__":
    num_questions = 10
    max_operand = 10
    gen = QuestionGenerator()
    test_questions = gen.generate_math_questions(num_questions,max_operand)
    answers = Calculator.calculate_answers(test_questions)
    for i, question in enumerate(test_questions, 1):
        print(f"Question {i}: {question}"+"=")
    for i, answer in enumerate(answers, 1):
        print(f"Answer {i}: {answer}")