/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J06002_sap_xep_hoa_don_ban_quan_ao;

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
            l.add(new Item(sc));
            t--;
        }
        
        List<Bill> ll=new ArrayList();
        t=sc.nextInt();
        while(t!=0){
            Bill b=new Bill(sc);
            Item tmp=Item.find(l, b.getCode().substring(0, 2));
            b.setI(tmp);
            b.cal();
            ll.add(b);
            t--;
        }
        
        ll.sort((Bill a, Bill b)->{
            return -Double.compare(a.getSprice(), b.getSprice());
        });
        
        for(Bill b: ll){
            System.out.println(b);
        }
    }
}
