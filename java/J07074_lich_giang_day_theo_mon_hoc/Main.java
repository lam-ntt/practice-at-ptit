/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07074_lich_giang_day_theo_mon_hoc;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Main {
    public static Map<String, String> mp=new HashMap();
    
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc=new Scanner(new File("MONHOC.in"));
        int t=sc.nextInt();
        while(t!=0){
            sc.nextLine();
            mp.put(sc.nextLine(), sc.nextLine());
            t--;
        }
        
        sc=new Scanner(new File("LICHGD.in"));
        List<Teach> l=new ArrayList();
        t=sc.nextInt();
        sc.nextLine();
        while(t!=0){
            l.add(new Teach(sc));
            t--;
        }
        
        String key=sc.nextLine();
        List<Teach> ll=new ArrayList();
        for(Teach te: l){
            if(te.getScode().equals(key)) ll.add(te);
        }
        Collections.sort(ll);
        
        System.out.println("LICH GIANG DAY MON "+mp.get(key)+":");
        for(Teach te: ll){
            System.out.println(te);
        }
        
    }
}
