package demo;

public class Vehicle {

    protected String regNuber;
    protected String brand;
    protected int year;
    private int mileage;

    public Vehicle() {
        this("Unknown", "Unknown", 2000, 0);
    }

    public Vehicle(String regNuber, String brand, int year, int mileage) {
        this.regNuber = regNuber;
        this.brand = brand;
        this.year = year;
        this.mileage = mileage;
    }

    public String getRegNuber() {
        return regNuber;
    }

    public void setRegNuber(String regNuber) {
        this.regNuber = regNuber;
    }

    public String getBrand() {
        return brand;
    }

    public void setBrand(String brand) {
        this.brand = brand;
    }

    public int getYear() {
        return year;
    }

    public void setYear(int year) {
        if (year > 0) {
            this.year = year;
        }
    }

    public int getMilage() {
        return mileage;
    }

    public void setMilage(int mileage) {
        this.mileage = mileage;
    }

    public String getVhicleDescription() {
        return "RegNuber: " + regNuber + ", Brand: " + brand + ", Year: " + year + ", mileage: " + mileage + "km";
    }

    public double calculateVehicleServiceCoast() {
        return 100 + mileage * 0.05;
    }
}
