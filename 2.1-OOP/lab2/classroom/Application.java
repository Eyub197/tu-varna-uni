package classroom;

public class Application {
    public static void main(String[] args) {

        Classroom room101 = new Classroom("611E", 5, 2, ClassroomType.COMPUTER_LAB, true);
        Classroom room202 = new Classroom();
        System.out.println(room101.getDescription());
        System.out.println(room202.getDescription());
    }
}
