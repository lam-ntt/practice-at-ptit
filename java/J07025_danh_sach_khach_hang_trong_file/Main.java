/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07025_danh_sach_khach_hang_trong_file;

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
        Scanner sc=new Scanner(new File("KHACHHANG.in"));
        List<Client> l=new ArrayList();
        int t=sc.nextInt();
        sc.nextLine();
        while(t!=0){
            Client c=new Client(sc);
            c.normalize();
            c.cal();
            l.add(c);
            t--;
        }
        
        l.sort((Client a, Client b)->{
            if(a.getD().after(b.getD())) return 1;
            return -1;
        });
        
        
        for(Client c: l){
            System.out.println(c);
        }
    }
}
