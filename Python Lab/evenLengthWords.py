# def print_even_length_words(input_string):

#     words = input_string.split()

#     for word in words:
#         if len(word) % 2 == 0:
#             print(word)


# input_string = input("Enter a string: ")

# print("Even-length words in the string:")
# print_even_length_words(input_string)


# name = "my name is sonia's \ni am assistant professor"
# # print(name)
# # print(len(name))


# # s1 = "soniya"
# # for i in s1:
# #     print(i, end="")


# # for i in s1:
# #     print(i,end='')
# # print()


# # for i in range (1,11,2):
# #     print (i)

# e='  Sid  '
# # e=int(e)
# # print(e)
# # print(e.strip())
# # print(len(e))
# # print(name.title())

# dir(e)


# a=input('enter a number with more than 1 digit:')
# b=a[::-1]
# print(f'here is the reversed number : {b}')

# a=input('enter a number with more than 1 digit:')
# print(type(int(a)))

# def custom_base_to_decimal(number, base):
#     decimal_value = 0
#     power = 0

#     for digit in reversed(number):
#         decimal_value += int(digit) * (base ** power)
#         power += 1

#     return decimal_value

# base_6_number = '234'
# decimal_value = custom_base_to_decimal(base_6_number, 6)

# print(f"Decimal from Base 6: {decimal_value}")


# s3 = "PyThon"
# print(s3.swapcase())
# print(s3.upper())
# print(s3.lower())


# s3 = "this is the python class"
# substring = ""
# print(s3.count(substring))
# print(s3.title())
# print(s3.count("i"))
# print(s3.isalnum())


# string4 = "char"
# print(string4.isalpha())

# s1 = "box"
# s2 = 'box'
# if (s1==s2):
#  print("both are same")
# else:
#  print("both are different")


# main_string = "This, is a sample string"
# print(main_string.split(','))

# csv_data = "apple,banana,cherry,date"
# items = csv_data.split(",")
# print(items)

# items = ["apple", "banana", "cherry"]
# csv_string = "\n".join(items)
# print(csv_string)

# mystr='honesty'
# mystr='p'
# print(mystr)

# a="Welcome"
# for i in a: 
#     print(i,'-','#',end="")

# strings = ["apple", "cherry", "banana", "fig", "date"]
# # Sort the list in alphabetical order
# sorted_strings = sorted(strings)
# # Display the sorted list
# print("Sorted strings:", sorted_strings)

# original_string = "Hello, world!"
# substring = " beautiful"
# position = 6 # Insert at the 6th index (zero-based)
# result_string = original_string[:position] + substring + original_string[position:]
# print(result_string)

# sentence = "This is a sample sentence."
# length = len(sentence)
# print(length)

# Capitalize the first letter of each word and join them together
# word = 'soniyachaudhary'
# pascal_case_string = ''.join(word.capitalize() for w in word)
# print(pascal_case_string)

# import math

# # Compute the sine of an angle in radians
# angle_radians = math.radians(30)  # Convert degrees to radians (e.g., for a 30-degree angle)
# sin_value = math.sin(angle_radians)

# print(f"The sine of {angle_radians} radians is {sin_value}")


# x = 5
# y = 3

# result1 = x + y
# result2 = x * y
# result3 = x > y
# result4 = not result3

# print("Result1:", result1)
# print("Result2:", result2)
# print("Result3:", result3)
# print("Result4:", result4)


# import numpy as np

# # Creating NumPy arrays
# arr1 = np.array([1, 2, 3, 4, 5])
# arr2 = np.array([10, 20, 30, 40, 50])

# # Performing arithmetic operations on arrays
# sum_result = arr1 + arr2
# product_result = arr1 * arr2

# print("Array 1:", arr1)
# print("Array 2:", arr2)
# print("Sum Result:", sum_result)
# print("Product Result:", product_result)


import pandas as pd

# Creating a DataFrame
data = {
    'Name': ['Alice', 'Bob', 'Charlie', 'David'],
    'Age': [25, 30, 35, 40],
    'City': ['New York', 'San Francisco', 'Los Angeles', 'Chicago']
}

df = pd.DataFrame(data)

# Data exploration
print("DataFrame:")
print(df)

# Data manipulation
filtered_df = df[df['Age'] > 30]
sorted_df = df.sort_values(by='Age')

print("\nFiltered DataFrame (Age > 30):")
print(filtered_df)

print("\nSorted DataFrame (by Age):")
print(sorted_df)

