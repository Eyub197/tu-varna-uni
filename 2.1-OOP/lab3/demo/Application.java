package demo;

import demo.Car;
import demo.Vehicle;

public class Application {
    public static void main(String[] args) {
        Vehicle vehicle = new Vehicle("B1234", "Toyota", 2020, 80000);
        System.out.println(vehicle.getVhicleDescription());

        Vehicle newVehicle = new Vehicle();
        System.out.println(newVehicle.getVhicleDescription());

        vehicle.setYear(123);
        System.out.println(vehicle.getVhicleDescription());

        Car car = new Car("CA1234", "BMW", 2001, 70000, 5, true);
        System.out.println(car.getCarDescription());

        System.out.println(vehicle.calculateVehicleServiceCoast());
        System.out.println(car.calculateCarServiceCoast());

    }
}
