/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05071_tinh_cuoc_dien_thoai_co_dinh_1;

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
        List<Region> l=new ArrayList();
        int t=sc.nextInt();
        while(t!=0){
            sc.nextLine();
            l.add(new Region(sc));
            t--;
        }
        
        t=sc.nextInt();
        String num, ftime, ltime;
        while(t!=0){
            num=sc.next();
            ftime=sc.next();
            ltime=sc.next();
            Call c;
            if(num.startsWith("0")){
                Region tmp=Region.find(l, num.substring(1, 3));
                c=new Call(num, convert(ltime)-convert(ftime), tmp);   
            }else{
               c=new Call(num, convert(ltime)-convert(ftime), null);   
            }
            c.cal();
            System.out.println(c);
            t--;
        }
    }
    
    public static int convert(String s){
        return Integer.parseInt(s.substring(0, 2))*60+Integer.parseInt(s.substring(3));
    }
}
