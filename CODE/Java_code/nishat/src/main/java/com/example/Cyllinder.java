package com.example;

public class Cyllinder extends Circle{
    public float height;
    Cyllinder(float radius,float height,String name,String color){
        super(radius,name,color);
        this.height = height;
    }
    public void printArea(float circle_part){
        System.out.println("Area of Cyllinder : " + ((2*circle_part) + (3.1416*radius*height)) );
    }
    
}
