def unique_prime_factors_product(n):
    product = 1
    divisor = 2

    while divisor <= n:
        if n % divisor == 0:
            product *= divisor
            while n % divisor == 0:
                n //= divisor
        divisor += 1

    return product

num = int(input("Enter a number: "))

if num <= 1:
    print("Unique prime factors product is not defined for numbers less than or equal to 1.")
else:
    result = unique_prime_factors_product(num)
    print("Product of unique prime factors of", num, "is:", result)