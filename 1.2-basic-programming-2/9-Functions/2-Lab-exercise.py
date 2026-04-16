def find_GCD(first_number, second_number):
    while second_number:
        first_number, second_number = second_number, first_number % second_number

    return first_number


print(find_GCD(3, 2))
