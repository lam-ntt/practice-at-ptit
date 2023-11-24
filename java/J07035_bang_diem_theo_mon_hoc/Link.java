/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07035_bang_diem_theo_mon_hoc;

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
    
    public String getScode(){
        return s.getCode();
    }

    public String getSbjcode() {
        return sbjcode;
    }
    
    public float getScore() {
        return score;
    }
    
    public String toString(){
        if(score==(int)score) return s.toString()+" "+format("%.0f", score);
        return s.toString()+" "+score;
    }
    
}
