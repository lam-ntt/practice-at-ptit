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
public class Main {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        Rectangle r=new Rectangle(sc);
        if (r.check()) System.out.printf("%.0f %.0f %s\n", r.finePerimeter(),r.findArea(), r.getColor());
        else System.out.println("INVALID");
    }   
}
