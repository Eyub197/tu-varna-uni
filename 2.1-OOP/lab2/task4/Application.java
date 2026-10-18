package task4;

public class Application {
    public static void main(String[] args) {
        House house = new House("idk", 3, 100, true);
        House house2 = new House("idk", 2, 125, false);

        System.out.println(house.getDescription());
        System.out.println(house2.getDescription());

        System.out.println(house.isLargerThan(house2));
        System.out.println(house.hasMoreFloorsThan(house2));

    }
}
