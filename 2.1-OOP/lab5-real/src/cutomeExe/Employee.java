package cutomeExe;

abstract class Employee implements WorkUnit{

    static String companyName;
    static int createdCount;

    private String name;
    private String employeeId;
    private double baseSalary;


    public Employee(String name, String employeeId, double baseSalary) {
        this.name = name;
        this.employeeId = employeeId;
        this.baseSalary = baseSalary <= 0 ? 0 : baseSalary;
        createdCount++;
    }

    public String getName() {
        return name;
    }

    public String getEmployeeId() {
        return employeeId;
    }

    public double getBaseSalary() {
        return baseSalary;
    }

    abstract double calculateSalary();

    @Override
    public String toString() {
        return "Employee{" +
                "name='" + name + '\'' +
                ", employeeId='" + employeeId + '\'' +
                ", salary=" + calculateSalary() +
                '}';
    }

    @Override
    public String getStatus() {
        return "status";
    }
}
