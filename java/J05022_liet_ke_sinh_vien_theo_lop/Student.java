/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05022_liet_ke_sinh_vien_theo_lop;

import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
class Student {
    private String code, name, group, email;
    
    public Student(Scanner sc){
        code=sc.nextLine();
        name=sc.nextLine();
        group=sc.nextLine();
        email=sc.nextLine();
    }
    
    @Override
    public String toString(){
        return code+" "+name+" "+group+" "+email;
    }
    
    public static void find(List<Student> l, String key){
        System.out.println("DANH SACH SINH VIEN LOP "+key+":");
        for(Student s: l){
            if(s.group.equals(key)) System.out.println(s);
        }
    }
}
