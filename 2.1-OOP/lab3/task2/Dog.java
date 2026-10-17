package task2;

public class Dog extends Animal {
    private String breed;
    private int learnedCommands;

    public Dog(String name, int age, double weight, String breed, int learnedCommands) {
        super(name, age, weight);
        this.breed = breed;
        this.learnedCommands = learnedCommands;
    }

    public String getDogDescription() {
        return super.getDescription() + " Breed, " + breed + " Learned commands " + learnedCommands;
    }
}
