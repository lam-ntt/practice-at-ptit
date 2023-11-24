/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07050_sap_xep_mat_hang;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Main {
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc=new Scanner(new File("MATHANG.in"));
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
            return -Float.compare(a.getProfit(), b.getProfit());
        });
        
        for(Item i: l){
            System.out.println(i);
        }
    }
}
