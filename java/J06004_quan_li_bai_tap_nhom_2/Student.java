/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J06004_quan_li_bai_tap_nhom_2;

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
        group=sc.nextInt();
    }

    public String getCode() {
        return code;
    }

    public int getGroup() {
        return group;
    }
    
    public String toString(){
        return code+" "+name+" "+phonenum+" "+group;
    }
    
}
