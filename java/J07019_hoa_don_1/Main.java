/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07019_hoa_don_1;

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
        Scanner sc=new Scanner(new File("DATA1.in"));
        List<Item> l=new ArrayList();
        int t=sc.nextInt();
        while(t!=0){
            sc.nextLine();
            l.add(new Item(sc));
            t--;
        }
        
        sc=new Scanner(new File("DATA2.in"));
        t=sc.nextInt();
        while(t!=0){
            Bill b=new Bill(sc);
            Item tmp=Item.find(l, b.getCode().substring(0, 2));
            b.setI(tmp);
            b.cal();
            System.out.println(b);
            t--;
        }
    }
}
