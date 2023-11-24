/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05054_xep_hang_hoc_sinh;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
class Student implements Comparable<Student>{
    private static int cnt=0;
    private String code, name, kind;
    private float score;
    private int stt;
    
    public Student(Scanner sc){
        code=format("HS%02d", ++cnt);
        name=sc.nextLine();
        score=sc.nextFloat();
    }
    
    public float getScore(){
        return score;
    }
    
    public int getStt(){
        return stt;
    }
    
    public void setStt(int stt){
        this.stt=stt;
    }
    
    public void cal(){
        if(score>=9) kind="Gioi";
        else if(score>=7) kind="Kha";
        else if(score>=5) kind="Trung Binh";
        else kind="Yeu";
    }
    
    @Override
    public int compareTo(Student other){
        if(score<other.score) return 1;
        return -1;
    }
    
    @Override
    public String toString(){
        return code+" "+name+" "+format("%.1f", score)+" "+kind+" "+stt;
    }
}
