/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07074_lich_giang_day_theo_mon_hoc;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Teach implements Comparable<Teach>{
    private static int cnt=1;
    
    private String code, Scode, name, room;
    private int date, time;
    
    public Teach(Scanner sc) {
        code=format("HP%03d", cnt++);
        Scode=sc.nextLine();
        date=Integer.parseInt(sc.nextLine());
        time=Integer.parseInt(sc.nextLine());
        name=sc.nextLine();
        room=sc.nextLine();
    }

    public String getScode() {
        return Scode;
    }
    
    public int compareTo(Teach other){
        if(date==other.date){
            if(time==other.time){
                return name.compareTo(other.name);
            }
            return Integer.compare(time, other.time);
        }
        return Integer.compare(date, other.date);
    }
    
    public String toString(){
        return code+" "+date+" "+time+" "+name+" "+room;
    }
    
}
