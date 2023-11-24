/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05045_sap_xep_nhan_vien_theo_thu_nhap;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Employee implements Comparable<Employee>{
    private static int cnt=0;
    private String code, name, position;
    private long base, days, allowance;
    private double salary, advance_salary, remain_salary, final_salary; 
    
    public Employee(Scanner sc) {
        code=format("NV%02d", ++cnt);
        name=sc.nextLine();
        position=sc.nextLine();
        base=sc.nextLong();
        days=sc.nextLong();
    }
    
    public void cal(){
        salary=base*days;
        if(position.equals("GD")) allowance=500;
        else if(position.equals("PGD")) allowance=400;
        else if(position.equals("TP")) allowance=300;
        else if(position.equals("KT")) allowance=250;
        else allowance=100;
        if((salary+allowance)*2/3<25000){
            advance_salary=(salary+allowance)*2/3;
            advance_salary=((long)Math.round(advance_salary/1000))*1000;
        }
        else advance_salary=25000;
        remain_salary=salary+allowance-advance_salary;
        final_salary=salary+allowance;
    }
    
    @Override
    public int compareTo(Employee other){
        if(final_salary!=other.final_salary){
            if(final_salary<other.final_salary) return 1;
            return -1;
        }else return code.compareTo(other.code);
    }
    
    @Override
    public String toString(){
        return code+" "+name+" "+allowance+" "+format("%.0f", salary)+" "+format("%.0f", advance_salary)+" "+format("%.0f", remain_salary);
    }   
}
