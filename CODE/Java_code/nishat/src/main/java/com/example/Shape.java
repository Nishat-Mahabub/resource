package com.example;

public class Shape {
    public String name;
    public String color;
    Shape(String name,String color){
        this.name=name;
        this.color=color;
    }
    public void printColor(){
        System.out.println(name  + " " + color );
    }
}
