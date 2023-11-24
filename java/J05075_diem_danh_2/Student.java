/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05075_diem_danh_2;

import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Student {
    private String code, name, group;
    private int score;
    
    public Student(Scanner sc) {
        this.code=sc.nextLine();
        this.name=sc.nextLine();
        this.group=sc.nextLine();
    }
    
    public void setScore(int score){
        this.score=score;
    }
    
    public static Student find(List<Student> l, String code){
        for(Student t: l){
            if(t.code.equalsIgnoreCase(code)) return t;
        }
        return null;
    }
    
    public static void findByGroup(List<Student> l, String group){
        for(Student t: l){
            if(t.group.equals(group)) System.out.println(t);
        }
    }
    
    @Override
    public String toString(){
        String tmp=this.code+" "+this.name+" "+this.group+" "+this.score+" ";
        if(score==0) tmp+="KDDK";
        return tmp;
    }
    
}
