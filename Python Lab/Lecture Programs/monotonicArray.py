def is_monotonic(arr):

    if len(arr) <= 1:
        return True

    increasing = decreasing = True

    for i in range(1, len(arr)):
        if arr[i] > arr[i - 1]:
            decreasing = False
        elif arr[i] < arr[i - 1]:
            increasing = False

    return increasing or decreasing


arr1 = [1, 2, 2, 3]
arr2 = [3, 2, 1]
arr3 = [1, 2, 3, 2]

print("Is arr1 monotonic?", is_monotonic(arr1))
print("Is arr2 monotonic?", is_monotonic(arr2))
print("Is arr3 monotonic?", is_monotonic(arr3))
