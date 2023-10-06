
from functools import reduce

def product_of_natural_numbers(n):

    return reduce(lambda x, y: x * y, list(range(1, n + 1)))

n = 10
result = product_of_natural_numbers(n)
print(f"The product of the first {n} natural numbers is {result}")
