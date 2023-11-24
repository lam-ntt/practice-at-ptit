/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05076_nhap_xuat_hang;

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
        List<Item> l=new ArrayList();
        int t=sc.nextInt();
        sc.nextLine();
        while(t!=0){
            l.add(new Item(sc));
            t--;
        }
        
        t=sc.nextInt();
        while(t!=0){
            Bill b=new Bill(sc);
            b.setItem(Item.find(l, b.getCode()));
            b.cal();
            System.out.println(b);
            t--;
        }
    }
}
