def largest_prime_factor(n):
    largest_prime = -1
    while n % 2 == 0:
        largest_prime = 2
        n //= 2
    for i in range(3,n, 2):
        while n % i == 0:
            largest_prime = i
            n //= i
            

    if n > 2:
        largest_prime = n

    return largest_prime

number = 37
result = largest_prime_factor(number)
print("Largest prime factor of", number, "is", result)