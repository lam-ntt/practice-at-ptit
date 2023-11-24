/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05007_sap_xep_danh_sach_doi_tuong_nhan_vien;

import java.text.ParseException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Main {
    public static void main(String[] args) throws ParseException{
        Scanner sc=new Scanner(System.in);
        List<Employee> l=new ArrayList();
        int t=sc.nextInt();
        sc.nextLine();
        while(t!=0){
            Employee e=new Employee(sc);
            l.add(e);
            t--;
        }
        
        Collections.sort(l);
        
        for(Employee s: l){
            System.out.println(s);
        }
    }
}