/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05021_sap_xep_theo_ma_sinh_vien;

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
        while(sc.hasNext()){
            l.add(new Student(sc));
        }
        
        Collections.sort(l);
        
        for(Student s: l){
            System.out.println(s);
        }
    }
}
