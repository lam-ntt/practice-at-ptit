/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05078_bang_luong_theo_phong_ban;

import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Employee {
    private String code, name, dept;
    private int base, num, salary;
    
    public Employee(Scanner sc) {
        this.code=sc.nextLine();
        this.name=sc.nextLine();
        this.base=sc.nextInt()*1000;
        this.num=sc.nextInt();
    }

    public String getCode() {
        return code;
    }

    public int getBase() {
        return base;
    }

    public int getNum() {
        return num;
    }

    public void setSalary(int salary) {
        this.salary = salary;
    }
    
    public static void find(List<Employee> l, String code, String dept){
        System.out.println("Bang luong phong "+dept+":");
        for(Employee e: l){
            if(e.code.endsWith(code)) System.out.println(e);
        }
    }
    
    public String toString(){
        return this.code+" "+this.name+" "+this.salary;
    }
    
}
