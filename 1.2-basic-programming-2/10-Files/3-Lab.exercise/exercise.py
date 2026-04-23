def remove_new_lines_from_file():
    with open("file_with_new_lines.txt", "r") as file:
        content = file.read()
        new_content = content.replace("\n", "")

    with open("file_with_new_lines.txt", "w") as file:
        file.write(new_content)


remove_new_lines_from_file()
