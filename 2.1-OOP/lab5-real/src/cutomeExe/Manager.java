package cutomeExe;

public class Manager extends Employee {
    private String department;


    public Manager(String name, String employeeId, double baseSalary, String department) {
        super(name, employeeId, baseSalary);
        this.department = department;
    }

    public String getDepartment() {
        return department;
    }

    @Override
    double calculateSalary() {
        return getBaseSalary();
    }

    double calculateEarnings(int days, double dailyPay) {
        return days * dailyPay;
    }

    double calculateEarnings(double dailyPay) {
        return calculateEarnings(22, dailyPay);
    }

}
