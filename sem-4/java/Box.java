public class Box {
    double width, height, depth;

    public Box() { width = height = depth = 1; }

    public Box(double len) { width = height = depth = len; }

    public Box(double w, double h, double d) { width = w; height = h; depth = d; }

    public double volume() { return width * height * depth; }

    public static void main(String[] args) {
        Box box1 = new Box();
        Box box2 = new Box(5);
        Box box3 = new Box(3, 4, 5);

        System.out.println("Volume of box1: " + box1.volume());
        System.out.println("Volume of box2: " + box2.volume());
        System.out.println("Volume of box3: " + box3.volume());
    }
}
