/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07034_danh_sach_mon_hoc;

import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Subject {
    private String code, name;
    private int num;
    
    public Subject(Scanner sc) {
        code=sc.nextLine();
        name=sc.nextLine();
        num=sc.nextInt();
    }

    public String getName() {
        return name;
    }
    
    public String toString(){
        return code+" "+name+" "+num;
    }
    
}
