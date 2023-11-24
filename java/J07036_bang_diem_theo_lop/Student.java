/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07036_bang_diem_theo_lop;

import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Student {
    private String code, name, group, mail;
    
    public Student(Scanner sc) {
        code=sc.nextLine();
        name=sc.nextLine();
        group=sc.nextLine();
        mail=sc.nextLine();
    }

    public String getCode() {
        return code;
    }

    public String getGroup() {
        return group;
    }
    
    public void normalize(){
        String[] ss=name.trim().toLowerCase().split("\\s+");
        name="";
        for(int i=0; i<ss.length; i++){
            name+=ss[i].substring(0, 1).toUpperCase()+ss[i].substring(1);
            if(i!=ss.length-1) name+=" ";
        }
    }
    
    public static Student find(List<Student> l, String code){
        for(Student s: l){
            if(s.code.equals(code)) return s;
        }
        return null;
    }
    
    public String toString(){
        return code+" "+name;
    }
    
}
