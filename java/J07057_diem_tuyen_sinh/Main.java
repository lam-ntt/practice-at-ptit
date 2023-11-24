/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07057_diem_tuyen_sinh;

import java.io.File;
import java.io.FileNotFoundException;
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
        int t=sc.nextInt();
        while(t!=0){
            sc.nextLine();
            Student s=new Student(sc);
            s.normalize();
            s.cal();
            l.add(s);
            t--;
        }
        
        l.sort((Student a, Student b)->{
            if(a.getScore()==b.getScore()){
                return a.getCode().compareTo(b.getCode());
            }
            return -Float.compare(a.getScore(), b.getScore());
        });
        
        for(Student s: l){
            System.out.println(s);
        }
    }
}
