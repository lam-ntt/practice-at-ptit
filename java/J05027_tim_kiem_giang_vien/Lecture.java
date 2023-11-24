/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05027_tim_kiem_giang_vien;

import static java.lang.String.format;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
class Lecture{
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
    
    public static void find(List<Lecture> l, String key){
        System.out.println("DANH SACH GIANG VIEN THEO TU KHOA "+key+":");
        key=key.toLowerCase();
        for(Lecture ll: l){
            if(ll.name.toLowerCase().contains(key)) System.out.println(ll);
        }
    }
    
    @Override
    public String toString(){
        return code+" "+name+" "+falcuty;
    }
}
