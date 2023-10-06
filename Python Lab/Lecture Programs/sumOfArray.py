def find_sum_of_array(arr):
    total = 0
    for num in arr:
        total += num
    return total


arr = [int(x) for x in input("Enter numbers separated by spaces: ").split()]

result = find_sum_of_array(arr)
print(f"The sum of the array is: {result}")
