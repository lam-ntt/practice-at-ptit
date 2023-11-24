/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05074_diem_danh_1;

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
        List<Student> l=new ArrayList();
        int t=sc.nextInt(), tt=t;
        sc.nextLine();
        while(t!=0){
            l.add(new Student(sc));
            t--;
        }
        
        while(tt!=0){
            Student s=Student.find(l, sc.next());
            if(s!=null) s.setScore(calScore(sc.next()));
            tt--;
        }
        
        for(Student s: l){
            System.out.println(s);
        }
    }
    
    public static int calScore(String s){
        int res=10;
        for(int i=0; i<s.length(); i++){
            if(s.charAt(i)=='m') res-=1;
            else if(s.charAt(i)=='v') res-=2;
        }
        if(res<0) res=0;
        return res;
    }
}
