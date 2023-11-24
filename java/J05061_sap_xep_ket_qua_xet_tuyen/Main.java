/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05061_sap_xep_ket_qua_xet_tuyen;

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
        while(t!=0){
            sc.nextLine();
            Student s=new Student(sc);
            s.cal();
            l.add(s);
            t-=1;
        }
        
        Collections.sort(l);
        
        for(Student s: l){
            System.out.println(s);
        }
        
    }
}

