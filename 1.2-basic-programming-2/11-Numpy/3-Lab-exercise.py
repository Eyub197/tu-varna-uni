import numpy as np


def is_null_elemens_in_array():
    arr = np.array([2, 0, 1])
    return arr.all()


print(is_null_elemens_in_array())
