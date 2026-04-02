def populate_dict(dict):
    n = int(input("Enter n: "))
    dict = {}
    for i in range(1, n + 1):
        dict[i] = (i * i) - 1

    return dict


print(populate_dict(dict({})))
