/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05026_danh_sach_giang_vien_theo_bo_mon;

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
        subname=name.substring(name.lastIndexOf(" ")+1);
        falcuty=sc.nextLine();
        falcuty=simplize(falcuty);
    }
    
    public static String simplize(String s){
        String tmp="";
        String[] ss=s.split("\\s+");
        for(int i=0; i<ss.length; i++){
            tmp+=ss[i].substring(0, 1).toUpperCase();
        }
        return tmp;
    }
    
    @Override
    public String toString(){
        return code+" "+name+" "+falcuty;
    }
    
    public static void find(List<Lecture> l, String key){
        key=simplize(key);
        System.out.println("DANH SACH GIANG VIEN BO MON "+key+":");
        for(Lecture ll: l){
            if(ll.falcuty.equals(key)) System.out.println(ll);
        }
    }
}
