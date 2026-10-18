package task5;

public class BankAccount {
    private String ownerName;
    private double balance;

    public BankAccount(String ownerName, double balance) {
        this.ownerName = ownerName;
        this.balance = balance >= 0 ? balance : 0;
    }

    public String getOwnerName() {
        return  ownerName;
    }

    public double getBalance() {
        return  balance;
    }

    public void deposit(double amount) {
        if (amount < 0) return;

        balance = balance + amount;
    }

    public void withdraw(double amount) {
        if (amount < 0) return;
        if (balance < amount) return;

        balance = balance - amount;
    }
}
