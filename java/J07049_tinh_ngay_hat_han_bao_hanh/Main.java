/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07049_tinh_ngay_hat_han_bao_hanh;

import java.io.File;
import java.io.FileNotFoundException;
import java.text.ParseException;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Main {
    public static void main(String[] args) throws FileNotFoundException, ParseException{
        Scanner sc=new Scanner(new File("MUAHANG.in"));
        List<Item> l=new ArrayList();
        int t=sc.nextInt();
        while(t!=0){
            sc.nextLine();
            l.add(new Item(sc));
            t--;
        }
        
        List<Client> ll=new ArrayList();
        t=sc.nextInt();
        sc.nextLine();
        while(t!=0){
            Client c=new Client(sc);
            Item tmp=Item.find(l, c.getIcode());
            c.setI(tmp);
            c.cal();
            ll.add(c);
            t--;
        }
        
        ll.sort((Client a, Client b)->{
            if(a.getD().equals(b.getD())){
                return a.getCode().compareTo(b.getCode());
            }
            if(a.getD().isAfter(b.getD())) return 1;
            return -1;
        });
        
        for(Client c: ll){
            System.out.println(c);
        }
    }
}
