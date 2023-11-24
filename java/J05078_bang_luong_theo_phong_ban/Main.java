/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05078_bang_luong_theo_phong_ban;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Main {
    public static Map<String, String> mp=new HashMap();
    
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            mp.put(sc.next(), sc.nextLine().substring(1));
            t--;
        }
        
        List<Employee> l=new ArrayList();
        t=sc.nextInt();
        while(t!=0){
            sc.nextLine();
            Employee e=new Employee(sc);
            e.setSalary(calSalary(e.getCode(), e.getBase(), e.getNum()));
            l.add(e);
            t--;
        }
        
        sc.nextLine();
        String dept=sc.nextLine();
        Employee.find(l, dept, mp.get(dept));
    }
    
    public static int calSalary(String code, int base, int num){
        int res=base*num, yrs=Integer.parseInt(code.substring(1, 3));
        if(code.startsWith("A")){
            if(yrs>=16) res*=20;
            else if(yrs>=9) res*=14;
            else if(yrs>=4) res*=12;
            else res*=10;
        }else if(code.startsWith("B")){
            if(yrs>=16) res*=16;
            else if(yrs>=9) res*=13;
            else if(yrs>=4) res*=11;
            else res*=10;
        }else if(code.startsWith("C")){
            if(yrs>=16) res*=14;
            else if(yrs>=9) res*=12;
            else if(yrs>=4) res*=10;
            else res*=9;
        }else{
            if(yrs>=16) res*=13;
            else if(yrs>=9) res*=11;
            else if(yrs>=4) res*=9;
            else res*=8;
        }
        return res;
    }
}
