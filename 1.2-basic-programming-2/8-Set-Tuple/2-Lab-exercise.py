list = ["foo", "baz", "foo", "boo"]
uniq_set = set()


def get_count_of_item_in_list(list, item):
    return list.count(item)


def fill_set_from_list(list):
    for item in list:
        uniq_set.add((item, get_count_of_item_in_list(list, item)))


fill_set_from_list(list)
print(uniq_set)
