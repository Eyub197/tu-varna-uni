package task2;

public class Room {
    private String number;
    private double length;
    private double width;
    private double height;

    public Room(String number, double length, double width, double height) {
        this.number = number;
        this.length = length;
        this.width = width;
        this.height = height;
    }

    public String getNumber() {
        return number;
    }

    public double getLength() {
        return length;
    }

    public double getWidth() {
        return width;
    }

    public double getHeight() {
        return height;
    }

    public double calculateArea() {
        return length * width;
    }

    public double calculateVolume() {
        return length * width * height;
    }

    public String getDescription() {
        return String.format("Room number: %s, length %s, width %s, height %s ", number, length, width, height);
    }

}
