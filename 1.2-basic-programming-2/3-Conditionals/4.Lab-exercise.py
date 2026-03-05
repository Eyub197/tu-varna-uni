student_km_distance = int(input("Enter how much km you want to travel: "))
time_of_date = input("day or night: ")


def calc_taxi_price(student_km_distance, time_of_date):
    match time_of_date:
        case "day":
            return 0.79 + student_km_distance * 0.79
        case "night":
            return 0.79 + student_km_distance * 0.90
        case _:
            return float("inf")


def calc_bus_price(student_km_distance):
    if student_km_distance < 20:
        return float("inf")
    return int(student_km_distance * 0.09)


def calc_train_price(student_km_distance):
    if student_km_distance < 100:
        return float("inf")
    return int(student_km_distance * 0.06)


taxi_price = calc_taxi_price(student_km_distance, time_of_date)
bus_price = calc_bus_price(student_km_distance)
train_price = calc_train_price(student_km_distance)

min_price = min(taxi_price, bus_price, train_price)
