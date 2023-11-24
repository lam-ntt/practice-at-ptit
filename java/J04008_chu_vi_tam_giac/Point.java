/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J04008_chu_vi_tam_giac;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
class Point {
    private float x, y;
    
    public Point(Scanner sc){
        x=sc.nextFloat();
        y=sc.nextFloat();
    }
    
    public static float distance(Point a, Point b){
        return (float)Math.sqrt(Math.pow(a.x-b.x, 2)+Math.pow(a.y-b.y, 2));
    }
    
    public String check(Point a, Point b){
        float d1=distance(this, a);
        float d2=distance(this, b);
        float d3=distance(a, b);
        if(d1+d2>d3&&d2+d3>d1&&d3+d1>d2) return format("%.3f", d1+d2+d3);
        return "INVALID";
    }
}
