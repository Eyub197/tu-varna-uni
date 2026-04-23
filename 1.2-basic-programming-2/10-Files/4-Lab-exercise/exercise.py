chocolate_love = "I love chocolate very much"

with open("chocolate_love.txt", "w") as file:
    for word in chocolate_love.split(" "):
        file.write(word + "\n")
