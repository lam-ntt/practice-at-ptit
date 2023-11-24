/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J04012_bai_toan_tinh_cong;

import java.util.Scanner;

/**
 *
 * @author nguye
 */
class Employee {
    private String code="NV01", name, position;
    private long base, days, salary, bonus, allowance;
    
    public Employee(Scanner sc){
        name=sc.nextLine();
        base=sc.nextLong();
        days=sc.nextLong();
        sc.nextLine();
        position=sc.nextLine();
    }
    
    public void cal(){
        salary=base*days;
        if(days>=25) bonus=(long)(salary*.2);
        else if(days>=22) bonus=(long)(salary*.1);
        if(position.equals("GD")) allowance=250000;
        else if(position.equals("PGD")) allowance=200000;
        else if(position.equals("TP")) allowance=180000;
        else if(position.equals("NV")) allowance=150000;
    }
    
    @Override
    public String toString(){
        return code+" "+name+" "+salary+" "+bonus+" "+allowance+" "+(salary+bonus+allowance);
    }
}
