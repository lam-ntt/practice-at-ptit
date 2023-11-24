/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07055_xep_loai;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Student {
    private static int cnt=1;
    
    private String code, name, type;
    private float score;
    
    public Student(Scanner sc) {
        code=format("SV%02d", cnt++);
        name=sc.nextLine();
        score=(float) (sc.nextFloat()*0.25+sc.nextFloat()*0.35+sc.nextFloat()*0.4);
    }

    public float getScore() {
        return score;
    }
    
    public void normalize(){
        String[] ss=name.trim().toLowerCase().split("\\s+");
        name="";
        for(int i=0; i<ss.length; i++){
            ss[i]=ss[i].substring(0, 1).toUpperCase()+ss[i].substring(1);
            name+=ss[i];
            if(i!=ss.length-1) name+=" ";
        }
    }
    
    public void cal(){
        if(score>=8) type="GIOI";
        else if(score>=6.5) type="KHA";
        else if(score>=5) type="TRUNG BINH";
        else type="KEM";
    }
    
    public String toString(){
        return code+" "+name+" "+format("%.2f", score)+" "+type;
    }
    
}
