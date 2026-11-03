package customExe;

public class Bird extends Animal implements Wild, Flying {

    public Bird(int age, String name) {
        super(age, name);
    }

    @Override
    public String move() {
        return "Flying";
    }

    @Override
    public String describeMovement() {
        return move();
    }

    @Override
    String sound() {
        return "Tweet";
    }

    @Override
    public void takeOff() {

    }
}
