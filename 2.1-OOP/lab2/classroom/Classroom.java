package classroom;

public class Classroom {
    private static final int MIN_CAPACITY = 10;

    private String roomNumber;
    private int capacity;
    private int floor;
    private ClassroomType type;
    private boolean hasProjector;

    public Classroom() {
        this("unknown", 10, 1, ClassroomType.SEMINAR, false);
    }

    public Classroom(String roomNumber, int capacity, int floor, ClassroomType type, boolean hasProjector) {
        this.roomNumber = roomNumber;
        setCapacity(capacity);
        this.floor = floor;
        this.type = type;
        this.hasProjector = hasProjector;
    }

    public String getRoomNumber() {
        return roomNumber;
    }

    public void setRoomNumber(String roomNumber) {
        this.roomNumber = roomNumber;
    }

    private static int validateCapacity(int capacity) {
        if (capacity < MIN_CAPACITY) {
            return MIN_CAPACITY;
        }

        return capacity;
    }

    public int getCapacity() {
        return capacity;
    }

    public void setCapacity(int capacity) {
        this.capacity = validateCapacity(capacity);
    }

    public int getFloor() {
        return floor;
    }

    public void setFloor(int floor) {
        this.floor = floor;
    }

    public ClassroomType getType() {
        return type;
    }

    public void setType(ClassroomType type) {
        this.type = type;
    }

    public boolean isHasProjector() {
        return hasProjector;
    }

    public void setHasProjector(boolean hasProjector) {
        this.hasProjector = hasProjector;
    }

    public String getDescription() {
        return "Зала: " + roomNumber
                + ", капацитете: " + capacity
                + ", етаж: " + floor
                + ", вид: " + type
                + ", проектор: " + (hasProjector ? "да" : "не");
    }

}
