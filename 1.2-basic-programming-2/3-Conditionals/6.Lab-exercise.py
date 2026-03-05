import datetime

now = datetime.datetime.now()
hour = now.hour


def food_recommendation(hour):
    if hour < 11:
        food = "You should fast"
        drink = "Tea or coffe"
        return food, drink
    elif hour < 14:
        food = "Eggs and Bulgarian yougurt with protein powder"
        drink = "water"
        return food, drink
    elif hour < 19:
        food = "Last meal so eat meat"
        drink = "water"
        return food, drink
    else:
        food = "You should not be eating at this time"
        drink = "Water"
        return food, drink


food, drink = food_recommendation(hour)

print(f"It is currently {hour}:00")
print(f"Recommended: {food} + {drink}")
