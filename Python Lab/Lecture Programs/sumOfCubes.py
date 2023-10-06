def sum_of_cubes_formula(n):
    return ((n * (n + 1)) // 2) ** 2


n = int(input("Enter the value of n: "))

if n < 1:
    print("Please enter a positive integer.")
else:
    result = sum_of_cubes_formula(n)
    print(f"The sum of cubes of the first {n} natural numbers is: {result}")
