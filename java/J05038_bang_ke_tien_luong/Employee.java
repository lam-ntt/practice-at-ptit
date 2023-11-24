/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05038_bang_ke_tien_luong;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Employee {
    private static int cnt=0;
    private String code, name, major;
    private int base, days, mini_salary, bonus, allowance, salary;
    
    public Employee(Scanner sc) {
        ++cnt;
        code=format("NV%02d", cnt);
        name=sc.nextLine();
        base=sc.nextInt();
        days=sc.nextInt();
        sc.nextLine();
        major=sc.nextLine();
    }
    
    public void cal(){
        mini_salary=base*days;
        if(days>=25) bonus=(int)(mini_salary*0.2);
        else if(days>=22) bonus=(int)(mini_salary*0.1);
        else bonus=0;
        if(major.equals("GD")) allowance=250000;
        else if(major.equals("PGD")) allowance=200000;
        else if(major.equals("TP")) allowance=180000;
        else if(major.equals("NV")) allowance=150000;
        else allowance=0;
        salary=mini_salary+bonus+allowance;
    }
    
    public int getSalary(){
        return salary;
    }
    
    @Override
    public String toString(){
        return code+" "+name+" "+mini_salary+" "+bonus+" "+allowance+" "+salary;
    }
    
}
