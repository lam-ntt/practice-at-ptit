/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07018_chuan_hoa_danh_sach_sinh_vien;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Student {
    private static int cnt=1;
    
    private String code, name, group, birth;
    private float score;
    
    public Student(Scanner sc) {
        code=format("B20DCCN%03d", cnt++);
        name=sc.nextLine();
        group=sc.nextLine();
        birth=sc.nextLine();
        score=sc.nextFloat();
    }
    
    public void normalize(){
        String[] ss=name.trim().toLowerCase().split("\\s+");
        name="";
        for(int i=0; i<ss.length; i++){
            name+=ss[i].substring(0, 1).toUpperCase()+ss[i].substring(1);
            if(i!=ss.length-1) name+=" ";
        }
        
        if(birth.charAt(1)=='/') birth="0"+birth;
        if(birth.charAt(4)=='/') birth=birth.substring(0, 3)+"0"+birth.substring(3);
    }
    
    public String toString(){
        return code+" "+name+" "+group+" "+birth+" "+format("%.2f", score);
    }
    
}
