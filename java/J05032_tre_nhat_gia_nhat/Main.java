/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05032_tre_nhat_gia_nhat;

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
        List<Person> l=new ArrayList();
        int t=sc.nextInt(), tt=t;
        sc.nextLine();
        while(t!=0){
            l.add(new Person(sc));
            t--;
        }
        
        Collections.sort(l);
        
        System.out.println(l.get(0));
        System.out.println(l.get(tt-1));  
    }
}
