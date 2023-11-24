/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05009_tim_thu_khoa_cua_ki_thi;

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
        int t=sc.nextInt();
        float mx=-1;
        while(t!=0){
            sc.nextLine();
            Student s=new Student(sc);
            if(s.getScore()>mx) mx=s.getScore();
            l.add(s);
            t--;
        }
        
        Collections.sort(l);
        
        for(Student s: l){
            if(s.getScore()==mx) System.out.println(s);
        }
    }
}

