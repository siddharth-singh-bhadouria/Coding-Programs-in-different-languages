import math


def is_perfect_square(num):
    root = int(math.sqrt(num))
    return root * root == num


def is_fibonacci_number(n):
    if n <= 0:
        return False

    if is_perfect_square(5 * n * n + 4) or is_perfect_square(5 * n * n - 4):
        return True
    else:
        return False


# Input the number to check
num = int(input("Enter a number to check if it's a Fibonacci number: "))

if is_fibonacci_number(num):
    print(f"{num} is a Fibonacci number.")
else:
    print(f"{num} is not a Fibonacci number.")
