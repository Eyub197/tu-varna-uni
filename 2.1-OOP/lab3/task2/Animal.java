package task2;

public class Animal {
    private String name;
    private int age;
    protected double weight;

    public Animal(String name, int age, double weight) {
        this.name = name;
        this.age = age;
        this.weight = weight;
    }

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    public double getWeight() {
        return weight;
    }

    public String getDescription() {
        return "Name: " + name + ", Age: " + age + ", Weight: " + weight;
    }
}
