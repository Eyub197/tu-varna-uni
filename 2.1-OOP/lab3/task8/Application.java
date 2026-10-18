package task8;

public class Application {
    public static void main(String[] args) {
        StudentCard card = new StudentCard(3452334,"Eyub");
        StudentCardRecord record = new StudentCardRecord(3452334,"Eyub");

        System.out.println(card);
        System.out.println(record);

        System.out.println(card.equals(new StudentCard(3452334,"Eyub")));
        System.out.println(card.equals(record));
        System.out.println(record.equals(new StudentCardRecord(3452334,"Eyub")));

        System.out.println(card.toString());
        System.out.println(record.toString());
    }
}
