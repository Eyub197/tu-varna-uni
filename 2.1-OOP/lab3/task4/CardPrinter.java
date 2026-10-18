package task4;

public class CardPrinter {

    protected void printStudent(Student student) {
        System.out.println(String.format("Name: %s, facNumber: %s, major %s,", student.name, student.facultyNumber, student.major));

    }
}
