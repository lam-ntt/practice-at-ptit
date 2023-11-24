/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05041_sap_xep_bang_tinh_cong;

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
        List<Employee> l=new ArrayList();
        int t=sc.nextInt();
        sc.nextLine();
        while(t!=0){
            Employee e=new Employee(sc);
            e.cal();
            l.add(e);
            t--;
        }
        
        Collections.sort(l);
        
        for(Employee e: l){
            System.out.println(e);
        }
    }
}
