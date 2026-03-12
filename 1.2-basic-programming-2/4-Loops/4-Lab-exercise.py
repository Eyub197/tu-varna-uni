def facoriel(number):
    if number == 1:
        return 1

    print(f"{number} * ", end="")
    return number * facoriel(number - 1)


number = facoriel(5)
print(number)
