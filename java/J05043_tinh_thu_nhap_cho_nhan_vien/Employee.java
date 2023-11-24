/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05043_tinh_thu_nhap_cho_nhan_vien;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Employee {
    private static int cnt=0;
    private String code, name, position;
    private long base, days, allowance;
    private double salary, advance_salary, remain_salary; 
    
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
    }
    
    @Override
    public String toString(){
        return code+" "+name+" "+allowance+" "+
                format("%.0f", salary)+" "+
                format("%.0f", advance_salary)+" "+
                format("%.0f", remain_salary);
    }   
}
