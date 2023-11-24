/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05019_luong_mua_trung_binh;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Scanner;
import java.util.Set;

/**
 *
 * @author nguye
 */
public class Main {
    public static Set<String> s=new HashSet();
    
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        List<Location> l=new ArrayList();
        int t=sc.nextInt();
        String name, ftime, ltime;
        int qty;
        while(t!=0){
            sc.nextLine();
            name=sc.nextLine();
            ftime=sc.nextLine();
            ltime=sc.nextLine();
            qty=sc.nextInt();
            
            if(s.contains(name)){
                Location lc=Location.find(l, name);
                lc.setTime(lc.getTime()+convert(ltime)-convert(ftime));
                lc.setQty(lc.getQty()+qty);
            }else{
                Location lc=new Location(name, convert(ltime)-convert(ftime), qty);
                l.add(lc);
                s.add(name);
            }
            t--;
        }
        
        for(Location lc: l){
            lc.cal();
            System.out.println(lc);
        }
    }
    
    public static int convert(String s){
        return Integer.parseInt(s.substring(0, 2))*60+Integer.parseInt(s.substring(3));
    }
}
