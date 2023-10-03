def rotate_array(arr, k):
    n = len(arr)
    k %= n  
    return arr[k:] + arr[:k]

original_array = [11, 223, 23, 423, 52]
k = 3 
result = rotate_array(original_array, k)
print(result)