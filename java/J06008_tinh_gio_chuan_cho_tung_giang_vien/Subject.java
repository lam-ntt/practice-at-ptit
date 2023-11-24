/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J06008_tinh_gio_chuan_cho_tung_giang_vien;

import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Subject {
    private String code, name;
    
    public Subject(Scanner sc) {
        code=sc.next();
        name=sc.nextLine().trim();
    }

    public String getCode() {
        return code;
    }

    public String getName() {
        return name;
    }
    
    public static Subject find(List<Subject> l, String code){
        for(Subject s: l){
            if(s.code.equals(code)) return s;
        }
        return null;
    }
}
