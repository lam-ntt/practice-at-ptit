/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05058_sap_xep_ket_qua_tuyen_sinh;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
class Student implements Comparable<Student>{
    private String code, name, state;
    private float s1, s2, s3, s, ps;
    
    public Student(Scanner sc){
        code=sc.nextLine();
        name=sc.nextLine();
        s1=sc.nextFloat();
        s2=sc.nextFloat();
        s3=sc.nextFloat();
    }
    
    public void cal(){
        String area=code.substring(0, 3);
        if(area.equals("KV1")) ps=(float)0.5;
        else if(area.equals("KV2")) ps=(float)1;
        else if(area.equals("KV3")) ps=(float)2.5;
        
        s=s1*2+s2+s3;
        if(s+ps>=24) state="TRUNG TUYEN";
        else state="TRUOT";
        s+=ps;
    }
    
    @Override
    public int compareTo(Student other){
        if(s==other.s){
            return code.compareTo(other.code);
        }else{
            return -Float.compare(s, other.s);
        }
    }
    
    @Override
    public String toString(){
        String res=code+" "+name+" ";
        if(ps==(int)ps) res=res+format("%.0f", ps)+" ";
        else res=res+ps+" ";
        if(s==(int)s) res=res+format("%.0f", s)+" ";
        else res=res+s+" ";
        res=res+state;
        return res;
    }
}
