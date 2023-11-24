/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05015_dua_xe_dap;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Candidate {
    private String code, name, location, time;
    private int velocity;
            
    public Candidate(Scanner sc) {
        name=sc.nextLine();
        location=sc.nextLine();
        time=sc.nextLine();
    }

    public int getTime() {
        int tmp=Integer.parseInt(time.substring(0,1))*60;
        tmp+=Integer.parseInt(time.substring(2));
        tmp-=360;
        return tmp;
    }
    
    public void cal(){
        code="";
        String[] ss=location.toUpperCase().split("\\s+");
        for(String i: ss) code+=i.charAt(0);
        ss=name.toUpperCase().split("\\s+");
        for(String i: ss) code+=i.charAt(0);
        
        float tmp=Integer.parseInt(time.substring(0,1))*60;
        tmp+=Integer.parseInt(time.substring(2));
        tmp-=360;
        velocity=(int)Math.round(120*60/tmp);
        
    }
    
    public String toString(){
        return code+" "+name+" "+location+" "+velocity+" Km/h";
    }
    
}
