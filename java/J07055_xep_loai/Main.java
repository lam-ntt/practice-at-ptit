/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07055_xep_loai;

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
        Scanner sc=new Scanner(new File("BANGDIEM.in"));
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
            return -Float.compare(a.getScore(), b.getScore());
        });
        
        for(Student s: l){
            System.out.println(s);
        }
    }
}
