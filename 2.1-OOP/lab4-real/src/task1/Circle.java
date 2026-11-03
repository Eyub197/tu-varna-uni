package task1;

public class Circle extends Shape {
    private double radius;

    public Circle(String name, double radius) {
        super(name);
        this.radius = radius;
    }


    @Override
    double calculateSurfaceArea() {
        return Math.PI * radius * radius;
    }
}
