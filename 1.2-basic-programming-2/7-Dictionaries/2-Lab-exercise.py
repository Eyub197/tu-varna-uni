dict = {12: "value", 2: "second_vale", 3: "forth_value"}


def sort_dict(dict):
    return sorted(dict.items())


def sort_dict_reverse(dict):
    return sorted(dict.items(), reverse=True)


print(sort_dict(dict))
print(sort_dict_reverse(dict))
