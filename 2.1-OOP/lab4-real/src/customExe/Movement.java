package customExe;

public interface Movement {

    String move();

    default String describeMovement() {
        return  move();
    }

    static String getCategory() {
        return "Animal movement";
    }
}

