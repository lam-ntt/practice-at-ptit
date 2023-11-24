/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J04004_tong_phan_so;

import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Main {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        Fraction f1=new Fraction(sc);
        Fraction f2=new Fraction(sc);
        f1.sum(f2);
        f1.minimize();
        System.out.println(f1.toString());
    }
}
