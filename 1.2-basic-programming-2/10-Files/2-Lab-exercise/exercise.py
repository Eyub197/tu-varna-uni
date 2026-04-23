def print_student_info(student_dict):
    num_of_students = int(input("Enter the number of students: "))

    for key, value in student_dict.items():
        if key < num_of_students:
            print(f"Student {key}: {value}")


def find_avarage_grade(student_dict):
    count = 0
    all_grades = 0
    for key, value in student_dict.items():
        name, second_name, age, gender, grade, group = value
        all_grades += float(grade)
        count += 1

    print(all_grades / count)


student_dict = dict()
counter = 0

with open("students.txt", "r") as file:
    for line in file:
        student_dict[counter] = list(line.split(" "))
        counter += 1

print_student_info(student_dict)
