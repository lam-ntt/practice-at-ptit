/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05068_sap_xep_bang_gia_xang_dau;

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
        List<Gasoline> l=new ArrayList();
        int t=sc.nextInt();
        while(t!=0){
            Gasoline g=new Gasoline(sc);
            g.cal();
            l.add(g);
            t--;
        }
        
        Collections.sort(l);
        
        for(Gasoline g: l){
            System.out.println(g);
        }
    }
}

