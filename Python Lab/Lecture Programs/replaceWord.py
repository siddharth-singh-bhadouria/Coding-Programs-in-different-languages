def replace_words_with_k(input_string, words_to_replace):

    for word in words_to_replace:
        input_string = input_string.replace(word, 'k')

    return input_string


input_string = "This is a test sentence with multiple words to replace."
words_to_replace = ["test", "multiple", "replace"]

result = replace_words_with_k(input_string, words_to_replace)
print("Original string:", input_string)
print("Modified string:", result)
