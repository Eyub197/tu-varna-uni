package lab8;

public class Result<T> {

    private final String label;
    private T value;

    public Result(String label, T value) {
        this.label = label;
        this.value = value;
    }

    public String getLabel() {
        return label;
    }

    public T getValue() {
        return value;
    }

    public void setValue(T value) {
        this.value = value;
    }

    @Override
    public String toString() {
        return "Result{" +
                "label='" + label + '\'' +
                ", value=" + value +
                '}';
    }
}
