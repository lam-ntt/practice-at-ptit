/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05049_liet_ke_nhap_xuat_hang_theo_nhom;

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
        List<Item> l=new ArrayList();
        int t=sc.nextInt();
        while(t!=0){
            sc.nextLine();
            Item i=new Item(sc);
            i.cal();
            l.add(i);
            t--;
        }
        
        Collections.sort(l);
        
        sc.nextLine();
        String key=sc.nextLine();
        for(Item i: l){
            if(i.getName().startsWith(key)) System.out.println(i);
        }
    }
}
