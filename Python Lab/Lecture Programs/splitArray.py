def split_and_add_to_end(arr, split_index):
    if split_index >= len(arr):
        return arr
    
    first_part = arr[:split_index] 
    second_part = arr[split_index:] 
    
    new_arr = second_part + first_part 
    
    return new_arr

original_array = [23, 122, 33, 42, 325, 232]
split_index = 1

result = split_and_add_to_end(original_array, split_index)
print(result)