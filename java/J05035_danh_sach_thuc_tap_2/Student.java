/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05035_danh_sach_thuc_tap_2;

import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
class Student implements Comparable<Student>{
    private static int cnt=0;
    private int count;
    private String code, name, group, mail, company;
    
    public Student(Scanner sc){
        count=++cnt;
        code=sc.nextLine();
        name=sc.nextLine();
        group=sc.nextLine();
        mail=sc.nextLine();
        company=sc.nextLine();
    }
    
    @Override
    public int compareTo(Student other){
        return code.compareTo(other.code);
    }
    
    public static void find(List<Student> l, String key){
        for(Student s: l){
            if(s.company.equals(key)) System.out.println(s);
        }
    }
    
    @Override
    public String toString(){
        return count+" "+code+" "+name+" "+group+" "+mail+" "+company;
    }
}
