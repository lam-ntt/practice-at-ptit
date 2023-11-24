/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07038_danh_sach_thuc_tap_3;

import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Student {
    private String code, name, group, mail;
    
    public Student(Scanner sc) {
        this.code=sc.nextLine();
        this.name=sc.nextLine();
        this.group=sc.nextLine();
        this.mail=sc.nextLine();
    }

    public String getCode() {
        return code;
    }
    
    public void normalize(){
        String[] tmp=this.name.toLowerCase().trim().split("\\s+");
        this.name="";
        for(int i=0; i<tmp.length; i++){
            tmp[i]=tmp[i].substring(0, 1).toUpperCase()+tmp[i].substring(1);
            this.name+=tmp[i];
            if(i!=tmp.length-1) this.name+=' ';
        }
    }
    
    public static Student find(List<Student> l, String code){
        for(Student s: l){
            if(s.code.equals(code)) return s;
        }
        return null;
    }
    
    public String toString(){
        return this.code+" "+this.name+" "+this.group;
    }
    
}
