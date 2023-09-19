def print_even_length_words(input_string):

    words = input_string.split()

    for word in words:
        if len(word) % 2 == 0:
            print(word)


input_string = input("Enter a string: ")

print("Even-length words in the string:")
print_even_length_words(input_string)
