def fill_list_with_file_data(file_path, list):
    with open(file_path, "r") as file:
        for line in file:
            list.append(line)

    return list


file_data_list = []
fill_list_with_file_data("text.txt", file_data_list)
print(file_data_list)
