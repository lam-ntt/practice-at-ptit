/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J04001_khai_bao_lop_point;

import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Point {
    private double x, y;
    
    public Point(Scanner sc){
        x=sc.nextDouble();
        y=sc.nextDouble();
    }
    
    public double distance(Point other){
        return Math.sqrt(Math.pow(x-other.x, 2)+Math.pow(y-other.y, 2));
    }
    
    @Override
    public String toString(){
        return String.format("%.4f %.4f", x, y);
    }
}
