/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J06005_quan_li_ban_hang_1;

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
        List<Client> l=new ArrayList();
        int t=sc.nextInt();
        sc.nextLine();
        while(t!=0){
            l.add(new Client(sc));
            t--;
        }
        
        List<Item> ll=new ArrayList();
        t=sc.nextInt();
        while(t!=0){
            sc.nextLine();
            ll.add(new Item(sc));
            t--;
        }
        
        t=sc.nextInt();
        String code1, code2;
        int num;
        while(t!=0){
            code1=sc.next();
            code2=sc.next();
            num=sc.nextInt();
            Client c=Client.find(l, code1);
            Item i=Item.find(ll, code2);
            Bill b=new Bill(c, i, num);
            b.cal();
            System.out.println(b);
            t--;
        }
    }
}
