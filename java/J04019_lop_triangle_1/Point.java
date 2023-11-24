/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J04019_lop_triangle_1;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
class Point {
    private double x, y;
    
    public static Point nextPoint(Scanner sc){
        Point tmp=new Point();
        tmp.x=sc.nextDouble();
        tmp.y=sc.nextDouble();
        return tmp;
    }
    
    public static double distance(Point a, Point b){
        return Math.sqrt(Math.pow(a.x-b.x, 2)+Math.pow(a.y-b.y, 2));
    }
    
    public boolean val(Point a, Point b){
        double d1=distance(this, a);
        double d2=distance(this, b);
        double d3=distance(a, b);
        return d1+d2>d3&&d2+d3>d1&&d3+d1>d2;
       
    }
    
    public String getPer(Point a, Point b){
        double d1=distance(this, a);
        double d2=distance(this, b);
        double d3=distance(a, b);
        return format("%.3f", d1+d2+d3);
    }
}
