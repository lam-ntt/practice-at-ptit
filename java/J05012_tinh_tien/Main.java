/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05012_tinh_tien;

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
        while(t!=0){
            sc.nextLine();
            Item i=new Item(sc);
            i.cal();
            l.add(i);
            t--;
        }
        
        l.sort((Item a, Item b)->{
            return -Long.compare(a.getSprice(), b.getSprice());
        });
        
        for(Item i: l){
            System.out.println(i);
        }
    }
}
