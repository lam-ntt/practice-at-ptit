/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05062_hoc_bong_sinh_vien;

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
        int t=sc.nextInt(), tt=t, ttt=sc.nextInt();
        while(t!=0){
            sc.nextLine();
            Student s=new Student(sc);
            s.cal();
            l.add(s);
            t--;
        }
        
        List<Student> ll=new ArrayList();
        ll.addAll(l);
        ll.sort((Student a, Student b)->{
            if(a.getS1()==b.getS1()){
                return -Float.compare(a.getS2(), b.getS2());
            }else{
                return -Float.compare(a.getS1(), b.getS1());
            }
        });
        
        if(ttt>tt) ttt=tt; 
        Student tmp=ll.get(ttt-1);
        for(int i=ttt; i<tt; i++){
            Student tmp1=ll.get(i);
            if((tmp1.getS1()!=tmp.getS1())) tmp1.setState("KHONG");
        }
        
        for(Student s: l){
            System.out.println(s);
        }
    }
}
