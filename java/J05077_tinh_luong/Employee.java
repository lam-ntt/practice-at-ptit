/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05077_tinh_luong;

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

    public void setDept(String dept) {
        this.dept = dept;
    }

    public void setSalary(int salary) {
        this.salary = salary;
    }
    
    public String toString(){
        return this.code+" "+this.name+" "+this.dept+" "+this.salary;
    }
    
}