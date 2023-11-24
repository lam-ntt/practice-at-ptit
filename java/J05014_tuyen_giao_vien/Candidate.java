/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05014_tuyen_giao_vien;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Candidate {
    private static int cnt=1;
    
    private String code, code1, name, subject, state;
    private float s1, s2, sbonus, s;
            
    public Candidate(Scanner sc) {
        code=format("GV%02d", cnt++);
        name=sc.nextLine();
        code1=sc.nextLine();
        s1=sc.nextFloat();
        s2=sc.nextFloat();
    }

    public float getS() {
        return s;
    }
    
    public void cal(){
        if(code1.startsWith("A")) subject="TOAN";
        else if(code1.startsWith("B")) subject="LY";
        else subject="HOA";
        
        if(code1.endsWith("1")) sbonus=(float) 2.0;
        else if(code1.endsWith("2")) sbonus=(float) 1.5;
        else if(code1.endsWith("3")) sbonus=(float) 1.0;
        else sbonus=0;
        
        s=s1*2+s2+sbonus;
        
        if(s>=18) state="TRUNG TUYEN";
        else state="LOAI";
    }
    
    public String toString(){
        return code+" "+name+" "+subject+" "+format("%.1f", s)+" "+state;
    }
    
}
