/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J04008_chu_vi_tam_giac;

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
            Point p1=new Point(sc);
            Point p2=new Point(sc);
            Point p3=new Point(sc);
            System.out.println(p1.check(p2, p3));
            t-=1;
        }
    }
}
