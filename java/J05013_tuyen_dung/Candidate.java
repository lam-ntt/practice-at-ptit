/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05013_tuyen_dung;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Candidate {
    private static int cnt=1;
    
    private String code, name, state;
    private float s1, s2, score;
    
    public Candidate(Scanner sc) {
        code=format("TS%02d", cnt++);
        name=sc.nextLine();
        s1=sc.nextFloat();
        s2=sc.nextFloat();
    }

    public float getScore() {
        return score;
    }
    
    public void cal(){
        if(s1>10||s2>10) score=(s1+s2)/20;
        else score=(s1+s2)/2;
        
        if(score>9.5) state="XUAT SAC";
        else if(score>=8) state="DAT";
        else if(score>=5) state="CAN NHAC";
        else state="TRUOT";
    }
    
    public String toString(){
        return code+" "+name+" "+format("%.2f", score)+" "+state;
    }
    
}
