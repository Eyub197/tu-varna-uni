import csv

with open("test.csv", newline="") as csvfile:
    csv_reader = csv.reader(csvfile)
    print("Print each row in CSV file")
    for each_row in csv_reader:
        print(each_row)

with open("test.csv", "a+", newline="") as csvfile:
    csv_writer = csv.writer(csvfile)
    csv_writer.writerow(["testing 123", "Testing 321", "I like meat"])
