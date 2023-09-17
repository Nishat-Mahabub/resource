package com.example;

public class Square extends Rectangle{
    //public float length;
    Square(float length,float width,String name,String color){
        super(length,length,name,color);
    }
    public void printArea(){
        System.out.println("Area of Square : " + length*length);
    }
}
