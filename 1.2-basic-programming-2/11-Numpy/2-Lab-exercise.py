import numpy as np

arrayOneAndZeros = np.array(
    [[np.random.randint(0, 2, 10)], [np.random.randint(0, 2, 10)]]
)

boolArray = np.array(arrayOneAndZeros, dtype=bool)

print(boolArray)
