/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05020_sap_xep_tinh_vien_theo_lop;

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
        if(group.compareTo(other.group)==0) return code.compareTo(other.code);
        return group.compareTo(other.group);
    }
    
    @Override
    public String toString(){
        return code+" "+name+" "+group+" "+email;
    }
}
