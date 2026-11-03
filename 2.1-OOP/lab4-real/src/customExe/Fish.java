package customExe;

public class Fish extends Animal implements Wild{

    public Fish(int age, String name) {
        super(age, name);
    }

    @Override
    public String move() {
        return "Swimming";
    }

    @Override
    public String describeMovement() {
        return move();
    }

    @Override
    String sound() {
        return "Blub";
    }
}
