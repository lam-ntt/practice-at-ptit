/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07048_danh_sach_san_pham_2;

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
        Scanner sc=new Scanner(new File("SANPHAM.in"));
        List<Item> l=new ArrayList();
        int t=sc.nextInt();
        while(t!=0){
            sc.nextLine();
            l.add(new Item(sc));
            t--;
        }
        
        l.sort((Item a, Item b)->{
            if(a.getPrice()==b.getPrice()){
                return a.getCode().compareTo(b.getCode());
            }else{
                return -Integer.compare(a.getPrice(), b.getPrice());
            }
            
        });
        
        for(Item i: l){
            System.out.println(i);
        }
        
    }
}
