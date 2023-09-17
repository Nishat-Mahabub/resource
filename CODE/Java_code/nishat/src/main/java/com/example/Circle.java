package com.example;

public class Circle extends Shape {
    public float radius;
    Circle(float radius,String name,String color){
        super("Circle",color);
        this.radius=radius;
    }
    public void printArea(){
        System.out.println("Area of Circle : " + 3.1416*radius*radius);
    }
    public float getArea(){
        return (float) (3.1416*radius*radius);
    }
    
}
