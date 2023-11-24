/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05009_tim_thu_khoa_cua_ki_thi;

import java.util.Scanner;

/**
 *
 * @author nguye
 */
class Student implements Comparable<Student>{
    private static int cnt=0;
    private int code;
    private String name, birth;
    private float score;
    
    public Student(Scanner sc){
        cnt++;
        code=cnt;
        name=sc.nextLine();
        birth=sc.nextLine();
        score=sc.nextFloat()+sc.nextFloat()+sc.nextFloat();
    }
    
    public float getScore(){
        return score;
    }
    
    @Override
    public int compareTo(Student other){
        if(code>other.code) return 1;
        return -1;
    }
    
    @Override
    public String toString(){
        return code+" "+name+" "+birth+" "+score;
    }
    
    
}
