package task2;

public class Application {
    public static void main(String[] args) {
        Room room = new Room("A101", 6.0, 4.0, 3.0);
        System.out.println(room.getNumber());
        System.out.println(room.getLength());
        System.out.println(room.getWidth());
        System.out.println(room.getHeight());
    }
}
