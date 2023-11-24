/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05021_sap_xep_theo_ma_sinh_vien;

import java.util.Scanner;

/**
 *
 * @author nguye
 */
class Student implements Comparable<Student>{
    private String code, name, group, email;
    
    public Student(Scanner sc){
        code=sc.nextLine();
        name=sc.nextLine();
        group=sc.nextLine();
        email=sc.nextLine();
    }
    
    @Override
    public int compareTo(Student other){
        return code.compareTo(other.code);
    }
    
    @Override
    public String toString(){
        return code+" "+name+" "+group+" "+email;
    }
}
