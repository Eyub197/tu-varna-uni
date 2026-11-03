package customExe;

abstract class Animal implements Movement {

    private String name;
    private int age;


    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    public Animal(int age, String name) {
        this.age = age;
        this.name = name;
    }

    abstract String sound();

    @Override
    public String toString() {
        return "Animal{" +
                "name='" + name + '\'' +
                ", age=" + age +
                '}';
    }
}
