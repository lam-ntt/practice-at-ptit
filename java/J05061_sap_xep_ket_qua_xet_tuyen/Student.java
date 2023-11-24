/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05061_sap_xep_ket_qua_xet_tuyen;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
class Student implements Comparable<Student>{
    private static int cnt=1;
    
    private String code, name, birth, rank;
    private int age, s;
    private float s1, s2, bs;
    
    public Student(Scanner sc){
        code=format("PH%02d", cnt++);
        name=sc.nextLine();
        birth=sc.nextLine();
        s1=sc.nextFloat();
        s2=sc.nextFloat();
    }
    
    public void cal(){
        age=2021-Integer.parseInt(birth.substring(birth.length()-4));
        if(s1>=8&&s2>=8) bs=1;
        else if(s1>=7.5&&s2>=7.5) bs=(float) 0.5;
        else bs=0;
        s=(int)Math.round((s1+s2)/2+bs);
        if(s>10) s=10;
        if(s>=9) rank="Xuat sac";
        else if(s>=8) rank="Gioi";
        else if(s>=7) rank="Kha";
        else if(s>=5) rank="Trung binh";
        else rank="Truot";
    }
    
    @Override
    public int compareTo(Student other){
        if(s!=other.s){
            return -Integer.compare(s, other.s);
        }else{
            return code.compareTo(other.code);
        }
    }
    
    @Override
    public String toString(){
        return code+" "+name+" "+age+" "+s+" "+rank;   
    }
}
