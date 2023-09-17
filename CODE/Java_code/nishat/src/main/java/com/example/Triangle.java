package com.example;

public class Triangle extends Shape{
    public float base;
    public float height;
    // Triangle(){
    //     name="Triangle";
    //     color="Red";
    // }
    Triangle(float base,float height,String name,String color){
        super(name,color);
        this.base= base;
        this.height= height;
    }
    public void printArea(){
        System.out.println("Area of Triangle : " + .5*base*height);
    }
}
