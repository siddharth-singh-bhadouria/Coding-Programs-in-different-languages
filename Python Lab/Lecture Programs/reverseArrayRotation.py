def reverse_rotate_array(arr, k):
    n = len(arr)
    k = k % n  

    arr[:k] = arr[:k][::-1]

    arr[k:] = arr[k:][::-1]

    arr[:] = arr[::-1]

my_array = [1, 2, 3, 4, 5]
rotation_amount = 2

reverse_rotate_array(my_array, rotation_amount)
print(my_array)
