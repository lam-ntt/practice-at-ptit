/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07056_tinh_tien_dien;

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
        Scanner sc=new Scanner(new File("KHACHHANG.in"));
        List<Client> l=new ArrayList();
        int t=sc.nextInt();
        while(t!=0){
            sc.nextLine();
            Client c=new Client(sc);
            c.normalize();
            c.cal();
            l.add(c);
            t--;
        }
        
        l.sort((Client a, Client b)->{
            return -Float.compare(a.getPrice(), b.getPrice());
        });
        
        for(Client c: l){
            System.out.println(c);
        }
    }
}
