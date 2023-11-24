/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05033_sap_xep_thoi_gian;

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
        List<Time> l=new ArrayList();
        int t=sc.nextInt();
        while(t!=0){
            l.add(new Time(sc));
            Collections.sort(l);
            t-=1;
        }
        
        for(Time tm: l){
            System.out.println(tm.toString());
        }
    }
}
