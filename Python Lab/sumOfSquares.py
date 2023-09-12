def sum_of_squares_formula(n):
    return (n * (n + 1) * (2 * n + 1)) // 6


n = int(input("Enter the value of n: "))

if n < 1:
    print("Please enter a positive integer.")
else:
    result = sum_of_squares_formula(n)
    print(f"The sum of squares of the first {n} natural numbers is: {result}")
