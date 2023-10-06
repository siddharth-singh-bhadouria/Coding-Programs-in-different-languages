from functools import reduce

def sum_of_natural_numbers(n):

    return reduce(lambda x, y: x + y, list(range(1, n + 1)))

n = 10
result = sum_of_natural_numbers(n)
print(f"The sum of the first {n} natural numbers is {result}")