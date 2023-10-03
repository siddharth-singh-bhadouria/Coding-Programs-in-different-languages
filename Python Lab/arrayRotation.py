def rotate_array(arr, k):
    n = len(arr)
    k %= n  
    return arr[k:] + arr[:k]

original_array = [1, 2, 3, 4, 5]
k = 3 
result = rotate_array(original_array, k)
print(result)