/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07081_sap_xep_danh_sach_sinh_vien;

import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Student implements Comparable<Student>{
    private String code, name, phone, mail, fn, mn, ln;
    
    public Student(Scanner sc) {
        code=sc.nextLine();
        name=sc.nextLine();
        phone=sc.nextLine();
        mail=sc.nextLine();
    }
    
    public void split(){
        String[] ss=name.split("\\s+");
        fn=ss[0];
        ln=ss[ss.length-1];
        for(int i=1; i<ss.length-1; i++){
            mn+=(ss[i]+" ");
        }
    }
    
    public int compareTo(Student other){
        if(ln.equals(other.ln)){
            if(fn.equals(other.fn)){
                if(mn.equals(other.mn)){
                    return code.compareTo(other.code);
                }
                return mn.compareTo(other.mn);
            }
            return fn.compareTo(other.fn);
        }
        return ln.compareTo(other.ln);
    }
    
    public String toString(){
        return code+" "+name+" "+phone+" "+mail;
    }
    
}
