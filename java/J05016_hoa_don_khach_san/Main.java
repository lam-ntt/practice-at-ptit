/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05016_hoa_don_khach_san;

import java.text.ParseException;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Main {
    public static void main(String[] args) throws ParseException{
        Scanner sc=new Scanner(System.in);
        List<Client> l=new ArrayList();
        int t=sc.nextInt();
        while(t!=0){
            sc.nextLine();
            Client c=new Client(sc);
            c.cal();
            l.add(c);
            t--;
        }
        
        l.sort((Client a, Client b)->{
            return -Integer.compare(a.getPrice(), b.getPrice());
        });
        
        for(Client c: l){
            System.out.println(c);
        }
    }
}