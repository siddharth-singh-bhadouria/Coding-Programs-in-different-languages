def find_words_greater_than_length(input_string, length):
    words = input_string.split()

    result = []
    for word in words:
        if len(word) > length:
            result.append(word)
    
    return result

input_string = "This is a sample sentence with some words of varying lengths"
min_length = 4  
result = find_words_greater_than_length(input_string, min_length)
print(result)