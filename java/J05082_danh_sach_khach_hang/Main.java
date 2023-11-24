/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05082_danh_sach_khach_hang;

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
        List<Client> l=new ArrayList();
        int t=sc.nextInt();
        sc.nextLine();
        while(t!=0){
            Client c=new Client(sc);
            c.normalize();
            l.add(c);
            t--;
        }
        
        Collections.sort(l);
        
        for(Client c: l){
            System.out.println(c);
        }
    }
}
