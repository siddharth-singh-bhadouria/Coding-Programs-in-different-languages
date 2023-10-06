def rotate_string(input_string, k):
    rotated_string = input_string[k:] + input_string[:k]
    return rotated_string

original_string = "abcdef"
k = 2 
result = rotate_string(original_string, k)
print(result)