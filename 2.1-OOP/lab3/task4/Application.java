package task4;

public class Application {
    public static void main(String[] args) {
        final Student []students = {
            new Student("Eyub"),
                new Student("George"),
                new Student("Daniel"),
        };

        CardPrinter printer = new CardPrinter();
        printer.printStudent(students[0]);

    }
}
