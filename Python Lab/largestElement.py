def find_largest_element(arr):

    if len(arr) == 0:
        return "The array is empty"

    max_element = arr[0]

    for element in arr:

        if element > max_element:
            max_element = element

    return max_element


my_array = [12, 45, 78, 34, 56, 90]
largest = find_largest_element(my_array)
print("The largest element in the array is:", largest)
