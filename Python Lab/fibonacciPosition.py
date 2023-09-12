def fibonacci_recursive(n):
    if n <= 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2)


# Input the value of n
n = int(input("Enter the value of n: "))

if n < 0:
    print("Please enter a non-negative integer.")
else:
    result = fibonacci_recursive(n)
    print(f"The {n}th Fibonacci number is: {result}")
