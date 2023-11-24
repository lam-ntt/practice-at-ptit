/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J04010_dien_tich_hinh_tron_ngoai_tiep_tam_giac;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
class Point {
    private double x, y;
    
    public Point(Scanner sc){
        x=sc.nextDouble();
        y=sc.nextDouble();
    }
    
    public static double distance(Point a, Point b){
        return (double)Math.sqrt(Math.pow(a.x-b.x, 2)+Math.pow(a.y-b.y, 2));
    }
    
    public String check(Point a, Point b){
        double d1=distance(this, a);
        double d2=distance(this, b);
        double d3=distance(a, b);
        
        if(!(d1+d2>d3&&d2+d3>d1&&d3+d1>d2)) return "INVALID";
        double p=(d1+d2+d3)/2;
        double s=(double)Math.sqrt(p*(p-d1)*(p-d2)*(p-d3));
        double r=d1*d2*d3/(4*s);
        return format("%.3f", Math.PI*r*r);
    }
}
