def remove_duplicates(input_string):
    result = ""

    seen = set()

    for char in input_string:

        if char not in seen:
            result += char
            seen.add(char)

    return result


input_string = "Hello, World!"


result_string = remove_duplicates(input_string)
print("Original String:", input_string)
print("String with Duplicates Removed:", result_string)
