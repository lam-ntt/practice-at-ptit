/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J04014_tinh_toan_phan_so;

import static J04014_tinh_toan_phan_so.Fraction.cal1;
import static J04014_tinh_toan_phan_so.Fraction.cal2;
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
            Fraction a=new Fraction(sc);
            Fraction b=new Fraction(sc);
            Fraction c=cal1(a, b), d=cal2(a, b, c);
            System.out.println(c.toString()+" "+d.toString());
            t-=1;
        }
    }
}
