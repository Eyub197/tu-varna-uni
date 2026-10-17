package task2;

public class Cat extends Animal {
    private String furColor;
    private boolean indoor;

    public Cat(String name, int age, double weight, String furColor, boolean indoor) {
        super(name, age, weight);
        this.furColor = furColor;
        this.indoor = indoor;
    }

    public String getCatDescription() {
        return "%s fur color %s ,indoor %s".formatted(super.getDescription(), furColor, indoor);

    }
}
