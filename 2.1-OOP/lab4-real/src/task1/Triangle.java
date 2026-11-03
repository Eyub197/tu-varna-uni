package task1;

public class Triangle extends Shape {
    double base;
    double height;

    public Triangle(String name, double base, double height) {
        super(name);
        this.base = base;
        this.height = height;
    }

    @Override
    double calculateSurfaceArea() {
        return base * height / 2.0  ;
    }
}
