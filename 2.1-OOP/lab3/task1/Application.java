package task1;

public class Application {
    public static void main(String[] args) {
        Person person = new Person("Eyub", 21);
        System.out.println(person.getInformation());

        Student student = new Student("Eyub", 21, 12345);
        System.out.println(student.getStudentInformatino());

    }
}
