/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Iterator;
import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;

/**
 *
 * @author nguye
 */
public class J02006_hop_cua_2_day_so {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt(), m=sc.nextInt();
        Set<Integer> s=new TreeSet();
        for(int i=0; i<n+m; i++){
            s.add(sc.nextInt());
        }
    
        Iterator it=s.iterator();
        while(it.hasNext()){
            System.out.print(it.next()+" ");
        }
    }
}
