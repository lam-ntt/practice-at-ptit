/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07027_quan_li_bai_tap_nhom;

import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Student {
    private String code, name, phonenum;
    private int group;
    
    public Student(Scanner sc) {
        code=sc.nextLine();
        name=sc.nextLine();
        phonenum=sc.nextLine();
    }

    public String getCode() {
        return code;
    }

    public int getGroup() {
        return group;
    }

    public void setGroup(int group) {
        this.group = group;
    }
    
    public static Student find(List<Student> l, String code){
        for(Student s: l){
            if(s.code.equals(code)) return s;
        }
        return null;
    }
    
    public String toString(){
        return code+" "+name+" "+phonenum;
    }
    
}

