/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05008_dien_tich_đa_giac;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Main {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            int tt=sc.nextInt();
            Point[] p=new Point[tt];
            for(int i=0; i<tt; i++){
                p[i]=new Point(sc.nextDouble(), sc.nextDouble());
            }
            
            double res=0;
            for(int i=0; i<p.length-1; i++){
                res+=p[i].getA()*p[i+1].getB();
            }
            res+=p[p.length-1].getA()*p[0].getB();
            for(int i=1; i<p.length; i++){
                res-=p[i].getA()*p[i-1].getB();
            }
            res-=p[0].getA()*p[p.length-1].getB();
            res=Math.abs(res)/2;
            System.out.println(format("%.3f", res));
            t--;
        }
    }
}
