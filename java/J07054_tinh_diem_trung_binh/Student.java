/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07054_tinh_diem_trung_binh;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Student {
    private static int cnt=1;
    
    private String code, name;
    private int rank;
    private float score;
    
    public Student(Scanner sc) {
        code=format("SV%02d", cnt++);
        name=sc.nextLine();
        score=(sc.nextFloat()*3+sc.nextFloat()*3+sc.nextFloat()*2)/8;
    }

    public String getCode() {
        return code;
    }

    public float getScore() {
        return score;
    }

    public int getRank() {
        return rank;
    }

    public void setRank(int rank) {
        this.rank = rank;
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
    
    public String toString(){
        return code+" "+name+" "+format("%.2f", score)+" "+rank;
    }
    
}
