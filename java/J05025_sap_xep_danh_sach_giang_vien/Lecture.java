/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05025_sap_xep_danh_sach_giang_vien;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
class Lecture implements Comparable<Lecture>{
    private static int cnt=0;
    private String code, name, subname, falcuty;
    
    public Lecture(Scanner sc){
        code=format("GV%02d", ++cnt);
        name=sc.nextLine();
        falcuty=sc.nextLine();
        this.simplize();
    }
    
    public void simplize(){
        subname=name.substring(name.lastIndexOf(" ")+1);
        String tmp="";
        String[] ss=falcuty.split("\\s+");
        for(int i=0; i<ss.length; i++){
            tmp+=ss[i].substring(0, 1).toUpperCase();
        }
        falcuty=tmp;
    }
    
    @Override
    public int compareTo(Lecture other){
        if(!subname.equals(other.subname)) return subname.compareTo(other.subname);
        return code.compareTo(other.code);
    }
    
    @Override
    public String toString(){
        return code+" "+name+" "+falcuty;
    }
}
