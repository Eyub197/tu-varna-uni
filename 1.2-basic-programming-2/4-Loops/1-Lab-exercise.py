numbers_count = int(input("Enter how many numbers you want to find biggest from :"))
numbers = []


def populate_array(array, count):
    for number in range(0, count):
        array.append(int(input("Enter a number :-) :")))


def find_biggest_num(numbers):
    return max(numbers)


populate_array(numbers, numbers_count)
print(f"The biggest number is {find_biggest_num(numbers)}")
