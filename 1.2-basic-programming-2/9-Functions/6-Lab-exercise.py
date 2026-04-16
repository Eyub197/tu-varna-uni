def factorial_rec(n):
    if n == 0:
        return 1
    else:
        return n * factorial_rec(n - 1)


def factorial_iter(n):
    sum = 1
    for number in range(1, n + 1):
        sum *= number

    return sum


print(factorial_rec(5))
