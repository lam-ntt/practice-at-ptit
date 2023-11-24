/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J04015_tinh_thu_nhap_giao_vien;

import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Main {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        Lecture l=new Lecture(sc.nextLine(), sc.nextLine(), sc.nextLong());
        l.cal();
        System.out.println(l.toString());
    }
}
