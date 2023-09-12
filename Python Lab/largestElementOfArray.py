def find_largest_element(arr):
    if not arr:
        return None
    max_element = arr[0]
    for num in arr:
        if num > max_element:
            max_element = num
    return max_element


arr = [int(x) for x in input("Enter numbers separated by spaces: ").split()]

result = find_largest_element(arr)

if result is not None:
    print(f"The largest element in the array is: {result}")
else:
    print("The array is empty.")
