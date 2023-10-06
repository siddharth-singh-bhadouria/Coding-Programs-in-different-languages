import math

def prime_factors(n):

    while n % 2 == 0:
        print(2)
        n //= 2


    for i in range(3, int(math.sqrt(n)) + 1, 2):
        while n % i == 0:
            print(i)
            n //= i


    if n > 1:
        print(n)


num = int(input("Enter a number: "))

if num <= 1:
    print("Prime factors are not defined for numbers less than or equal to 1.")
else:
    print("Prime factors of", num, "are:")
    prime_factors(num)