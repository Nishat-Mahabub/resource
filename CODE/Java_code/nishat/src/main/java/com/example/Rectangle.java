package com.example;

public class Rectangle  extends Shape{
    public float length;
    public float width;
    // Rectangle(){
    //     name="Rectangle";
    //     color="Violet";
    // }
    //
    Rectangle(float length,float width,String name,String color){
        super(name,color);
        this.length= length;
        this.width= width;
        //Shape("Rectangle","Violet");
        // super("Rectangle","Violet");
    }
    public void printArea(){
        System.out.println("Area of rectangle : " + length*width);
    }


    
}
