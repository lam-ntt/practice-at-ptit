/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05079_lop_hoc_phan_1;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Main {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        List<Groupp> l=new ArrayList();
        int t=sc.nextInt();
        sc.nextLine();
        while(t!=0){
            Groupp g=new Groupp(sc);
            l.add(g);
            t--;
        }
        
        t=sc.nextInt();
        sc.nextLine();
        while(t!=0){
            Groupp.find(l, sc.nextLine());
            t--;
        }
    }
}
