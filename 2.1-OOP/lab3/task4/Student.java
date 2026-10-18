package task4;

public class Student {
    protected String name;
    protected int facultyNumber;
    protected String major;

    private StudentCard card;

    public Student(String name) {
        this.name = name;
        this.facultyNumber = name.length() + (int)(Math.random() * 10);
        this.major  = "CS";
        this.card = new StudentCard("tu-varna");
    }
}
