/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05031_bang_diem_thanh_phan_2;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
class Student implements Comparable<Student>{
    private String code, name, group;
    private float s1, s2, s3;
    
    public Student(Scanner sc){
        code=sc.nextLine();
        name=sc.nextLine();
        group=sc.nextLine();
        s1=sc.nextFloat();
        s2=sc.nextFloat();
        s3=sc.nextFloat();
    }
    
    @Override
    public int compareTo(Student other){
        return name.compareTo(other.name);
    }
    
    @Override
    public String toString(){
        return code+" "+name+" "+group+" "+format("%.1f", s1)+" "+format("%.1f", s2)+" "+format("%.1f", s3);
    }
}
