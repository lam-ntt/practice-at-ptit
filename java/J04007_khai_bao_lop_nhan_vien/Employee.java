/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J04007_khai_bao_lop_nhan_vien;

import java.util.Scanner;

/**
 *
 * @author nguye
 */
class Employee {
    String code="00001", name, sex, birth, addr, tax, date;
    
    public Employee(Scanner sc){
        name=sc.nextLine();
        sex=sc.nextLine();
        birth=sc.nextLine();
        addr=sc.nextLine();
        tax=sc.nextLine();
        date=sc.nextLine();
    }
    
    @Override
    public String toString(){
        return code+" "+name+" "+sex+" "+birth+" "+addr+" "+tax+" "+date;
    }
}
