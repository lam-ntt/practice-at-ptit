/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05062_hoc_bong_sinh_vien;

import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Student {
    private String name, state;
    private float s1, s2;
    
    public Student(Scanner sc) {
        name=sc.nextLine();
        s1=sc.nextFloat();
        s2=sc.nextFloat();
    }

    public float getS1() {
        return s1;
    }

    public float getS2() {
        return s2;
    }

    public String getState() {
        return state;
    }

    public void setState(String state) {
        this.state = state;
    }
    
    public void cal(){
        if(s1>=3.6&&s2>=90) state="XUATSAC";
        else if(s1>=3.2&&s2>=80) state="GIOI";
        else if(s1>=2.5&&s2>=70) state="KHA";
        else state="KHONG";
    }
    
    public String toString(){
        return name+": "+state;
    }
    
}
