package task8;

final class StudentCard {
    private final int studentNumber;
    private final String ownerName;

    public StudentCard(int studentNumber, String ownerName) {
        this.studentNumber = studentNumber;
        this.ownerName = ownerName;
    }

    public int getStudentNumber() {
        return studentNumber;
    }

    public String getOwnerName() {
        return ownerName;
    }
}
