package task5;

public class Application {
    public static void main(String[] args) {
        BankAccount bankAccount = new BankAccount("Eyub", 10000);

        System.out.println(bankAccount.getBalance());
        System.out.println(bankAccount.getOwnerName());

       bankAccount.deposit(10000);
       bankAccount.withdraw(100);
       System.out.println(bankAccount.getBalance());

       bankAccount.withdraw(1000000);
       System.out.println(bankAccount.getBalance());

       bankAccount.deposit(-500);
       System.out.println(bankAccount.getBalance());
    }
}
