/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J04002_khai_bao_lop_hinh_chu_nhat;

import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Rectangle {
    private double width, height;
    private String color;
    
    public Rectangle(Scanner sc){
        width=sc.nextInt();
        height=sc.nextInt();
        color=sc.next();
    }

    public String getColor() {
        return color.substring(0, 1).toUpperCase()+color.substring(1).toLowerCase();
    }
    
    public double findArea(){
        return width*height;
    }
    public double finePerimeter(){
        return 2*(width+height);
    }  
    
    public boolean check(){
        return width>0&&height>0;
    }
}
