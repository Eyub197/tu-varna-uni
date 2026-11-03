package cutomeExe;

public class Application {
    public static void main(String[] args) {
        Employee.companyName = "Примерна фирма";

        Employee[] employees = {
                new Manager("Иван", "M001", 3000, "Продажби"),
                new Manager("Мария", "M002", 3500, "Финанси"),
                new Clerk("Петър", "C001", 1500, 10),
                new Clerk("Анна", "C002", 1600, 15),
                new Clerk("Георги", "C003", 1700, 5),
                new Clerk("Елена", "C004", 1800, 20)
        };


        double totalSalary = 0;
        for (Employee employee : employees) {
            System.out.println(employee);
            double salary = employee.calculateSalary();
            System.out.printf("Заплата: %.2f%n", salary);
            totalSalary += salary;
        }

        System.out.printf("Обща сума на заплатите: %.2f%n", totalSalary);
        System.out.println("Фирма: " + Employee.companyName);
        System.out.println("Общ брой създадени служители: " + Employee.createdCount);

        Employee employe = new Manager("Николай", "M003", 3200, "Маркетинг");
        SalaryPrinter printer = new SalaryPrinter();
        System.out.println(printer.describe(employe));
        System.out.println(employe.calculateSalary());

        WorkUnit[] workUnits = {
                new Manager("Димитър", "M004", 3300, "Производство"),
                new Clerk("Иванка", "C005", 1600, 10),
                new Robot()
        };

        for (WorkUnit workUnit : workUnits) {
            System.out.println(workUnit.getStatus());
        }

        EmployeeId id = new EmployeeId("M001");
        EmployeeId sameReference = id;
        EmployeeId sameValue = new EmployeeId("M001");
        EmployeeId differentValue = new EmployeeId("M002");

        System.out.println("Един и същ обект: " + id.equals(sameReference));
        System.out.println("Различни обекти с еднаква стойност: " + id.equals(sameValue));
        System.out.println("Еднакви стойности, сравнение с ==: " + (id == sameValue));
        System.out.println("Различни стойности: " + id.equals(differentValue));
        System.out.println("Сравнение с null: " + id.equals(null));
        System.out.println("Сравнение с друг тип (String): " + id.equals("M001"));

        for (Employee employee : employees) {
            System.out.println(employee.getName() + " - " + employee.getClass().getSimpleName());
            if (employee instanceof Manager) {
                Manager manager = (Manager) employee;
                System.out.println("Отдел: " + manager.getDepartment());
            }
        }

    }

}
