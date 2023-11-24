/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07060_sap_xep_lich_thi;

import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Subject {
    private String code, name, type;
    
    public Subject(Scanner sc) {
        code=sc.nextLine();
        name=sc.nextLine();
        type=sc.nextLine();
    }

    public String getCode() {
        return code;
    }

    public String getName() {
        return name;
    }

    public String getType() {
        return type;
    }
    
    public static Subject find(List<Subject> l, String code){
        for(Subject s: l){
            if(s.code.equals(code)) return s;
        }
        return null;
    }
    
}
