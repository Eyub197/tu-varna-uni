package customExe;

public class Dog extends Animal implements Pet{

    public Dog(int age, String name) {
        super(age, name);
    }

    @Override
    public String move() {
        return "Running";
    }

    @Override
    public String describeMovement() {
        return move();
    }

    @Override
    String sound() {
        return "Bark";
    }
}
