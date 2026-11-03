package customExe;

public class Application {
    public static void main(String[] args) {
        Dog rex = new Dog(3, "Rex");
        Bird rio = new Bird(2, "Rio");
        Fish nemo = new Fish(1, "Nemo");

        System.out.println(rex.toString());
        System.out.println(rio.toString());
        System.out.println(nemo.toString());

        System.out.println(rex.sound());
        System.out.println(rio.sound());
        System.out.println(nemo.sound());

        System.out.println(rex.move());
        System.out.println(rio.move());
        System.out.println(nemo.move());

        System.out.println(Movement.getCategory());

        Animal animal = new Dog(3, "rex");
        Movement movement = new Fish(1, "Nemo");

        rio.takeOff();

        AnimalAction action = new SoundAction();
        System.out.println(action.execute(animal));

        System.out.println(rex.describeMovement());
        System.out.println(rio.describeMovement());
        System.out.println(nemo.describeMovement());

    }
}
