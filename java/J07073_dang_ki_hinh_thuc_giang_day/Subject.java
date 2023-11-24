/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07073_dang_ki_hinh_thuc_giang_day;

import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Subject {
    private String code, name, num, dform, uform;

    public Subject(Scanner sc) {
        code=sc.nextLine();
        name=sc.nextLine();
        num=sc.nextLine();
        dform=sc.nextLine();
        uform=sc.nextLine();
    }

    public String getCode() {
        return code;
    }

    public String getUform() {
        return uform;
    }
    
    public String toString(){
        return code+" "+name+" "+num+" "+dform+" "+uform;
    }
    
}
