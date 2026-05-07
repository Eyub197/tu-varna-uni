import time

import numpy as np

startTime = time.time()

test = np.array(np.random.randint(10, 100, size=(5)))
test**2
endTime = time.time()
totalTime = endTime - startTime
print(f"Time taken: {totalTime} seconds")

startTimeList = time.time()
lest = [19, 23, 43, 23, 23]
for i in lest:
    i**2

endTimeList = time.time()
totelTimeList = endTimeList - startTimeList

print(f"Time taken: {totelTimeList / totalTime} seconds")
