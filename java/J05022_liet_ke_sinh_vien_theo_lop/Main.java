/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05022_liet_ke_sinh_vien_theo_lop;

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
        int t=sc.nextInt();
        sc.nextLine();
        while(t!=0){
            l.add(new Student(sc));
            t--;
        }
        
        String key;
        int q=sc.nextInt();
        sc.nextLine();
        while(q!=0){
            key=sc.nextLine();
            Student.find(l, key);
            q--;
        }
    }
}


