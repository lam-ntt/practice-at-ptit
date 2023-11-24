/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05047_bang_ke_nhap_kho_sap_xep_theo_chiet_khau;

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
        
        for(Item i: l){
            System.out.println(i);
        }
    }
}
