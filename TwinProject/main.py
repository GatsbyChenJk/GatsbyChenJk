import argparse

class QuestionGenerator:
    def __init__(self):
        pass

    def generate_questions(self, num_questions, max_num):
        # 在这里编写生成题目的逻辑
        print(f"Range: [0, {max_num}]")
        for i in range(num_questions):
            print(f"Question {i+1}: This is a sample question.")

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Generate questions")
    parser.add_argument("-n", "--num_questions", type=int, help="Number of questions to generate")
    parser.add_argument("-r", "--range", type=int, help="Upper limit of the range")
    args, unknown = parser.parse_known_args()

    if args.num_questions and args.range:
        generator = QuestionGenerator()
        generator.generate_questions(args.num_questions, args.range)
    elif args.num_questions:
        print("Waiting for range input. Please provide the range using the -r option.")
    elif args.range:
        print("Waiting for number of questions input. Please provide the number of questions to generate using the -n option.")
    else:
        print("Please provide both the number of questions to generate using the -n option and the range using the -r option.")