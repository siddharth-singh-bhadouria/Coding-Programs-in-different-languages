specified_list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
specified_list = [specified_list[i] for i in range(len(specified_list)) if i not in (0, 4, 5)]
print("List after removing specified elements:", specified_list)
