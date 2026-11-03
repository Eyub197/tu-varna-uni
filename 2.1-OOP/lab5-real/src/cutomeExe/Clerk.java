package cutomeExe;

public class Clerk extends Employee {
    private double bonusPercent;

    public Clerk(String name, String employeeId, double baseSalary, double bonusPercent) {
        super(name, employeeId, baseSalary);
        this.bonusPercent = bonusPercent;
    }

    @Override
    double calculateSalary() {
        return getBaseSalary() * (1 + bonusPercent / 100);
    }
}

