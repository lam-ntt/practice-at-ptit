/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07084_thoi_gian_online_lien_tuc;

import java.time.Duration;
import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Student {
    private static DateTimeFormatter dtf=DateTimeFormatter.ofPattern("dd/MM/yyyy HH:mm:ss");
    private String name, stime, etime;
    private int time;
    
    public Student(Scanner sc) {
        name=sc.nextLine();
        stime=sc.nextLine();
        etime=sc.nextLine();
    }

    public int getTime() {
        return time;
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
        LocalDateTime d1=LocalDateTime.parse(stime, dtf), 
                d2=LocalDateTime.parse(etime, dtf);
        Duration d=Duration.between(d1, d2);
        time=(int) d.toMinutes();
    }
    
    public String toString(){
        return name+" "+time;
    }
    
}
