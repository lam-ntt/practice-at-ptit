/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05065_liet_ke_nhan_vien_theo_nhom;

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
        List<Employee> l=new ArrayList();
        int t=sc.nextInt();
        while(t!=0){
            Employee e=new Employee(sc);
            e.cal();
            l.add(e);
            t--;
        }
        
        t=sc.nextInt();
        sc.nextLine();
        while(t!=0){
            String position=sc.nextLine();
            Employee.find(l, position);
            t--;
        }
    }
}
