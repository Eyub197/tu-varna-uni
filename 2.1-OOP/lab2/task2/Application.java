package task2;

public class Application {
    public static void main(String[] args) {
        Room room = new Room("A101", 6.0, 4.0, 3.0);
        System.out.println(room.getNumber());
        System.out.println(room.getLength());
        System.out.println(room.getWidth());
        System.out.println(room.getHeight());

        Room room2 = new Room("B202", 5.0, 4.0, 2.8);

        System.out.println(room2.calculateArea());
        System.out.println(room2.calculateVolume());
        System.out.println(room2.getDescription());
    }
}
