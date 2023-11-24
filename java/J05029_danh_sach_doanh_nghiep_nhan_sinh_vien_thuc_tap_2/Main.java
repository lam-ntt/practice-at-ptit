/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05029_danh_sach_doanh_nghiep_nhan_sinh_vien_thuc_tap_2;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Main {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        List<Business> l=new ArrayList();
        int t=sc.nextInt();
        while(t!=0){
            sc.nextLine();
            l.add(new Business(sc));
            t--;
        }
        
        Collections.sort(l);
        
        int q=sc.nextInt(), a, b;
        while(q!=0){
            a=sc.nextInt();
            b=sc.nextInt();
            Business.find(l, a, b);
            q--;
        }
    }
}

