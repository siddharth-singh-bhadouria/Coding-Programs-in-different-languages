import re


def contains_special_characters(input_string):

    pattern = r'[!@#$%^&*()_+{}\[\]:;<>,.?~\\\/\-]'

    if re.search(pattern, input_string):
        return True
    else:
        return False


input_string = "Hello123!"

if contains_special_characters(input_string):
    print("The string contains special characters.")
else:
    print("The string does not contain special characters.")
