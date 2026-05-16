import csv

import matplotlib.pyplot as plt

names, scores = [], []
with open("test.csv") as f:
    reader = csv.DictReader(f)
    for row in reader:
        names.append(row["name"])
        scores.append(int(row["score"]))

plt.bar(names, scores)
plt.show()
