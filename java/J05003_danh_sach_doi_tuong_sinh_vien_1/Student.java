/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05003_danh_sach_doi_tuong_sinh_vien_1;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Student {
    private static int cnt=0;
    
    private String code, name, birth, group;
    private float gpa;
    
    public Student(Scanner sc) {
        cnt++;
        code=format("B20DCCN%03d", cnt);
        name=sc.nextLine();
        group=sc.nextLine();
        birth=sc.nextLine();
        gpa=sc.nextFloat();
        normalize();
    }
    
    public void normalize(){
        if(birth.charAt(1)=='/') birth="0"+birth;
        if(birth.charAt(4)=='/') birth=birth.substring(0, 3)+"0"+birth.substring(3);
    }
    
    @Override
    public String toString(){
        return code+" "+name+" "+group+" "+birth+" "+format("%.2f", gpa);
    }
    
}
