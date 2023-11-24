/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

/**
 *
 * @author nguye
 */
public class J03009_tap_tu_rieng_cua_hai_xau {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        sc.nextLine();
        while(t!=0){
            String[] ss1=sc.nextLine().trim().split("\\s+");
            String[] ss2=sc.nextLine().trim().split("\\s+");
            
            Set<String> s1=new HashSet();
            Set<String> s2=new HashSet();
            for(int i=0; i<ss1.length; i++){
                s1.add(ss1[i]);
            }
            for(int i=0; i<ss2.length; i++){
                s2.add(ss2[i]);
            }
            
            for(String s: s1){
                if(!s2.contains(s)) System.out.print(s+" ");
            }
            System.out.println();
            t--;
        }
    }
}
