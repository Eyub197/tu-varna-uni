english_alfabet = [
    "a",
    "b",
    "c",
    "d",
    "e",
    "f",
    "g",
    "h",
    "i",
    "j",
    "k",
    "l",
    "m",
    "n",
    "o",
    "p",
    "q",
    "r",
    "s",
    "t",
    "u",
    "v",
    "w",
    "x",
    "y",
    "z",
]


def is_string_panagram(paragraph):
    for letter in english_alfabet:
        if letter not in paragraph:
            return False

    return True


print(is_string_panagram("The quick brown fox jumps over the lazy dog"))
