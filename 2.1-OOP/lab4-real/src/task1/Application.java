package task1;

import java.awt.*;

public class Application {
    public static void main(String[] args) {
        Rectangle rectangle = new Rectangle("name", 1.2, 4.2);
        Triangle triangle = new Triangle("name", 3, 4);
        Circle circle = new Circle("name", 1);
        System.out.println(triangle.toString());
    }
}
