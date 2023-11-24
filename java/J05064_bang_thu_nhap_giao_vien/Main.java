/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05064_bang_thu_nhap_giao_vien;

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
            sc.nextLine();
            Lecture l=new Lecture(sc.nextLine(), sc.nextLine(), sc.nextLong());
            l.cal();
            if (l.isOk()) System.out.println(l.toString());
            t-=1;
        }
    }
}
