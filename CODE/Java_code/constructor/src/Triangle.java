public class Triangle {
    public int a;
    public int b;
    public int c;

    public Triangle(int a, int b, int c) {
        this.a = a;
        this.b = b;
        this.c = c;
    }

    public Triangle(int a) {
        this.a = a;
        this.b = a;
        this.c = a;
    }

    public Triangle(int base, int height) {
        this.a = base;
        this.b = height;
       // this.c = c;
    }
}
