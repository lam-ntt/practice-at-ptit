/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05054_xep_hang_hoc_sinh;

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
        List<Student> l=new ArrayList();
        int t=sc.nextInt(), tt=t;
        while(t!=0){
            sc.nextLine();
            Student s=new Student(sc);
            s.cal();
            l.add(s);
            t--;
        }
        
        List<Student> ll=new ArrayList();
        ll.addAll(l);
        Collections.sort(ll);
        
        for(int i=0; i<tt; i++){
            if(i!=0&&ll.get(i-1).getScore()==ll.get(i).getScore()) ll.get(i).setStt(ll.get(i-1).getStt());
            else ll.get(i).setStt(i+1);
        }
        
        for(Student s: l){
            System.out.println(s);
        }
    }
}
