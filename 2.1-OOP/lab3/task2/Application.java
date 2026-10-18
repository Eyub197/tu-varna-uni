package task2;

public class Application {

    public static void main(String[] args) {
        Dog dog = new Dog("Buddy", 3, 10.5, "Golder Retriver", 2);
        IO.println(dog.calculateDogDailyFood());

        Cat cat = new Cat("Whiskers", 2, 5.0, "Gray", true);
        IO.println(cat.calculateCatDailyFood());
    }
}
