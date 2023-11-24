/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07052_danh_sach_trung_tuyen;

import java.io.File;
import java.io.FileNotFoundException;
import static java.lang.String.format;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Main {
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc=new Scanner(new File("THISINH.in"));
        List<Student> l=new ArrayList();
        int t=sc.nextInt(), tt=t;
        while(t!=0){
            sc.nextLine();
            Student s=new Student(sc);
            s.normalize();
            s.cal();
            l.add(s);
            t--;
        }
        
        l.sort((Student a, Student b)->{
            if(a.getSs()==b.getSs()){
                return a.getCode().compareTo(b.getCode());
            }else{
                return -Float.compare(a.getSs(), b.getSs());
            }
        });
        
        int ttt=sc.nextInt();
        float limit=-1;
        if(ttt>tt){
            limit=l.get(tt-1).getSs();
        }else{
            limit=l.get(ttt-1).getSs();
        }
        
        System.out.println(format("%.1f", limit));
        for(Student s: l){
            if(s.getSs()>=limit) s.setState("TRUNG TUYEN");
            else s.setState("TRUOT");
            System.out.println(s);
        }
    }
}








