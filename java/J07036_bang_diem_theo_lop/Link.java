/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07036_bang_diem_theo_lop;

import static J07036_bang_diem_theo_lop.Main.mp;
import static java.lang.String.format;

/**
 *
 * @author nguye
 */
public class Link {
    private Student s;
    private String sbjcode;
    private float score;
    
    public Link(Student s, String sbjcode, float score) {
        this.s=s;
        this.sbjcode=sbjcode;
        this.score=score;
    }

    public String getSbjcode() {
        return sbjcode;
    }
    
    public String getScode(){
        return s.getCode();
    }

    public String getSgroup() {
        return s.getGroup();
    }
    
    public float getScore() {
        return score;
    }
    
    public String toString(){
        if(score==(int)score) 
            return s.toString()+" "+sbjcode+" "+mp.get(sbjcode)+" "+format("%.0f", score);
        return s.toString()+" "+sbjcode+" "+mp.get(sbjcode)+" "+score;
    }
    
}
