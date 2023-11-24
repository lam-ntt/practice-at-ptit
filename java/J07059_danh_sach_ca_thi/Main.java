/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07059_danh_sach_ca_thi;

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
        Scanner sc=new Scanner(new File("CATHI.in"));
        List<Student> l=new ArrayList();
        int t=sc.nextInt();
        sc.nextLine();
        while(t!=0){
            Student s=new Student(sc);
            s.normalize();
            s.cal();
            l.add(s);
            t--;
        }
        
        l.sort((Student a, Student b)->{
            if(a.getLdt().equals(b.getLdt())){
                return a.getCode().compareTo(b.getCode());
            }
            if(a.getLdt().isAfter(b.getLdt())) return 1;
            return -1;
        });
        
        for(Student s: l){
            System.out.println(s);
        }
    }
}
