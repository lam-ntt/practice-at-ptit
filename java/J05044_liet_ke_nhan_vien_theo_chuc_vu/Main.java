/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05044_liet_ke_nhan_vien_theo_chuc_vu;

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
            sc.nextLine();
            Employee e=new Employee(sc);
            e.cal();
            l.add(e);
            t--;
        }
        
        sc.nextLine();
        String key=sc.nextLine();
        for(Employee e: l){
            if(e.getPosition().equals(key)) System.out.println(e);
        }
    }
}
