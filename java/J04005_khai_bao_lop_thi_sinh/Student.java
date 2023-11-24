/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J04005_khai_bao_lop_thi_sinh;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Student {
    private String name, birth;
    private float s1, s2, s3;
    
    public Student(Scanner sc){
        name=sc.nextLine();
        birth=sc.nextLine();
        s1=sc.nextFloat();
        s2=sc.nextFloat();
        s3=sc.nextFloat();
    }
    
    @Override
    public String toString(){
        return name+" "+birth+" "+format("%.1f", s1+s2+s3);
    }
}
