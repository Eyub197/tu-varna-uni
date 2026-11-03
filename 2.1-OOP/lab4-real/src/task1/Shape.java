package task1;

abstract  class Shape {
    private String name;

    public Shape(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    abstract double calculateSurfaceArea();

    @Override
    public String toString() {
        return "name: " + name + " area " + calculateSurfaceArea();
    }
}
