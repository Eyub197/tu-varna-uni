package task1;

public class Rectangle extends Shape {

    double width;
    double height;

    public Rectangle(String name, double width, double height) {
        this.width = width;
        this.height = height;
        super(name);
    }

    @Override
    double calculateSurfaceArea() {
        return width * height;
    }
}