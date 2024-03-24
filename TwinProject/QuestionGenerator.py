import random
from fractions import Fraction

class QuestionGenerator:
    def __init__(self):
        pass
    def generate_operation(self,max_operand):
     operators = ['+', '-', '×', '÷']
     num_operators = random.randint(1, 3)
     expression = str(random.randint(1, max_operand))

     for _ in range(num_operators):
        operator = random.choice(operators)
        operand = random.randint(1, max_operand)

        if operator == '÷':
            # 生成真分数
            numerator = random.randint(1, operand - 1)
            fraction = Fraction(numerator, operand)
            expression += f" {operator} {fraction}"
        else:
            expression += f" {operator} {operand}"

        return expression

    def generate_math_questions(self,num_questions, max_operand):
     questions = set()

     while len(questions) < num_questions:
        question = self.generate_operation(max_operand)
        # 检查是否存在重复题目
        if question not in questions:
         questions.add(question)
     return list(questions)

#测试程序
if __name__ == "__main__":
    num_questions = 10
    max_operand = 10
    questions = QuestionGenerator()
    questions = questions.generate_math_questions(num_questions, max_operand)
    for i, question in enumerate(questions, 1):
        print(f"Question {i}: {question}"+"=")