package task1;

public class Student extends Person {
    private int facultyNumber;

    public Student(String name, int age, int facultyNumber) {
        super(name, age);
        this.facultyNumber = facultyNumber;
    }

    public int getFacultyNumber() {
        return facultyNumber;
    }

    public String getStudentInformatino() {
        return super.getInformation() + " Faculty Number: " + facultyNumber;
    }

}
