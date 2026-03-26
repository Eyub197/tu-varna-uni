def fibonacci():
    a, b = 0, 1
    fibonacci_numbers = []
    n = int(input("How many numbers do you want to see?: "))

    for _ in range(n):
        fibonacci_numbers.append(str(a))
        a, b = b, a + b

    print(" ".join(fibonacci_numbers))


fibonacci()
