/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07047_quan_li_khach_san;

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
        Scanner sc=new Scanner(new File("DATA.in"));
        List<Room> l=new ArrayList();
        int t=sc.nextInt();
        sc.nextLine();
        while(t!=0){
            l.add(new Room(sc));
            t--;
        }
        
        List<Client> ll=new ArrayList();
        t=sc.nextInt();
        sc.nextLine();
        while(t!=0){
            Client c=new Client(sc);
            c.setR(Room.find(l, c.getRoom().substring(2, 3)));
            c.cal();
            ll.add(c);
            t--;
        }
        
        ll.sort((Client a, Client b)->{
            return -Integer.compare(a.getNum(), b.getNum());
        });
        
        for(Client c: ll){
            System.out.println(c);
        }
        
    }
}
