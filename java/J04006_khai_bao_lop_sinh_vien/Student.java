/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J04006_khai_bao_lop_sinh_vien;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Student {
    private String name, group, birth, code="B20DCCN001";
    private float score;
    
    public Student(Scanner sc){
        name=sc.nextLine();
        group=sc.next();
        birth=sc.next();
        if(birth.charAt(1)=='/') birth="0"+birth;
        if(birth.charAt(4)=='/') birth=birth.substring(0, 3)+"0"+birth.substring(3);
        score=sc.nextFloat();
    }
    
    @Override
    public String toString(){
        return code+" "+name+" "+group+" "+birth+" "+format("%.2f", score);
    }
}
