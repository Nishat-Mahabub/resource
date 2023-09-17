package com.example;

public class App 
{
    public static void main( String[] args )
    {
        Rectangle R1 =new Rectangle(10,10,"Rectangle","Violet");
        R1.printArea();
        R1.printColor();
        Triangle T1 =new Triangle(10,10,"Triangle","Red");
        T1.printArea();
        T1.printColor();
        Square S1 =new Square(10,10,"Square","Green");
        S1.printArea();
        S1.printColor();
        Circle C1 =new Circle(10,"Circle","Chololate");
        C1.printArea();
        C1.printColor();
        Cyllinder Cy1 =new Cyllinder(10,10,"Cyllinder","Black");
        float half_area = Cy1.getArea();
        Cy1.printArea(half_area);
        Cy1.printColor();
        
    }
}
