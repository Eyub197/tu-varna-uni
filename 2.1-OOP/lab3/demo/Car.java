package demo;

import demo.Vehicle;

public class Car extends Vehicle {

    private int seats;
    private boolean automatic;

    public Car(String regNumber, String brand, int year, int milage, int seats, boolean automatic) {
        super(regNumber, brand, year, milage);
        this.seats = seats;
        this.automatic = automatic;
    }

    public int getSeats() {
        return seats;
    }

    public boolean isAutomatic() {
        return automatic;
    }

    public void setSeats(int seats) {
        this.seats = seats;
    }

    public void setAutomatic(boolean automatic) {
        this.automatic = automatic;
    }

    public String getCarDescription() {
        return super.getVhicleDescription() + ", seats " + seats + ", automatic " + automatic;
    }

    public double calculateCarServiceCoast() {
        return super.calculateVehicleServiceCoast() + seats;
    }
}
