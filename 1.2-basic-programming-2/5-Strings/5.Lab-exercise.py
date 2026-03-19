camelCaseWord = "handleSubmit"
snake_case_word = ""


def convert_to_snake_case(camelCaseWord):
    snake_case_word = ""
    for char in camelCaseWord:
        if char.isupper():
            snake_case_word += "_" + char.lower()
        else:
            snake_case_word += char

    return snake_case_word


snake_case_word = convert_to_snake_case(camelCaseWord)
print(snake_case_word)
