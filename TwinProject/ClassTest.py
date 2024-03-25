import pytest
from QuestionGenerator import QuestionGenerator
from QuestionCalculator import *

@pytest.fixture
def question_generator():
    return QuestionGenerator()
def test_generate_operation(question_generator):
    max_operand = 10
    for _ in range(10):  # 多次测试以确保随机性
        operation = question_generator.generate_operation(max_operand)
        assert isinstance(operation, str)
        # 根据生成的操作的预期格式添加更多具体的断言
def test_generate_math_questions(question_generator):
    num_questions = 5
    max_operand = 10
    questions = question_generator.generate_math_questions(num_questions, max_operand)
    assert len(questions) == num_questions
    for question in questions:
        assert isinstance(question, str)

@pytest.fixture
def calculator():
    return Calculator()
def test_evaluate_expression_fraction_addition(calculator):
    expression = "1/2 + 1/3"
    result = calculator.evaluate_expression(expression)
    assert result == "5/6"
def test_evaluate_expression_integer_division(calculator):
    expression = "10 ÷ 2"
    result = calculator.evaluate_expression(expression)
    assert result == "5"
def test_evaluate_expression_divide_by_zero(calculator):
    expression = "5 ÷ 0"
    result = calculator.evaluate_expression(expression)
    assert result == "Undefined"
def test_calculate_answers(calculator):
    questions = ["2 + 2", "3 × 4", "10 ÷ 5"]
    expected_answers = ["4", "12", "2"]
    answers = calculator.calculate_answers(questions)
    assert answers == expected_answers

if __name__ == "__main__":
    pytest.main()