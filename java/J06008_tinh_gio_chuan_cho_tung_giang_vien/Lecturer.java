/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J06008_tinh_gio_chuan_cho_tung_giang_vien;

import static java.lang.String.format;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Lecturer {
    private String code, name;
    private double hours;
    
    public Lecturer(Scanner sc) {
        code=sc.next();
        name=sc.nextLine().trim();
        hours=0;
    }

    public String getCode() {
        return code;
    }

    public String getName() {
        return name;
    }

    public double getHours() {
        return hours;
    }

    public void setHours(double hours) {
        this.hours = hours;
    }
    
    public static Lecturer find(List<Lecturer> l, String code){
        for(Lecturer lc: l){
            if(lc.code.equals(code)) return lc;
        }
        return l.get(1);
    }
    
    public String toString(){
        return name+" "+format("%.2f", hours);
    }
    
}
