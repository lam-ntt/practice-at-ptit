/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07057_diem_tuyen_sinh;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Student {
    private static int cnt=1;
    
    private String code, name, state, eth;
    private float region;
    private float score;
    
    public Student(Scanner sc) {
        code=format("TS%02d", cnt++);
        name=sc.nextLine();
        score=Float.parseFloat(sc.nextLine());
        eth=sc.nextLine();
        region=sc.nextInt();
    }

    public String getCode() {
        return code;
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
        if(region==1) score+=1.5;
        else if(region==2) score+=1;
        
        if(!eth.equals("Kinh")) score+=1.5;
        
        if(score>=20.5) state="Do";
        else state="Truot";
    }
    
    public String toString(){
        return code+" "+name+" "+format("%.1f", score)+" "+state;
    }
    
}
