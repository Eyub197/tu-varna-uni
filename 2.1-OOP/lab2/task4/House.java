package task4;

public class House {
    private String address;
    private int floor;
    private double area;
    private boolean hasGarage;

   public House(String address, int floor, double area, boolean hasGarage) {
       this.address = address;
       this.floor = floor;
       this.area = area;
       this.hasGarage = hasGarage;
   }

   public String getAddress() {
       return  address;
   }

   public int getFloor() {
       return  floor;
   }

   public double getArea() {
       return  area;
   }

   public boolean getHasGarage() {
       return hasGarage;
   }

   public String getDescription() {
       return "Address: " + address + ", Floor: " + floor + ", Area: " + area + ", Has Garage: " + hasGarage;
   }

   public boolean isLargerThan(House house) {
       if (this.area <= house.getArea()) return  false;

       return  true;
   }

   public boolean hasMoreFloorsThan(House house) {
       if (this.floor <= house.getFloor()) return false;

       return  true;
   }


}

