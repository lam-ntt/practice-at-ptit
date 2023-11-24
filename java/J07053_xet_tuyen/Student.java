/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07053_xet_tuyen;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
class Student {
    private static int cnt=1;
    
    private String code, name, birth, rank;
    private int age, s;
    private float s1, s2, bs;
    
    public Student(Scanner sc){
        code=format("PH%02d", cnt++);
        name=sc.nextLine().trim();
        birth=sc.nextLine();
        s1=sc.nextFloat();
        s2=sc.nextFloat();
    }
    
    public void normalize(){
        String[] ss=name.toLowerCase().split("\\s+");
        name="";
        for(int i=0; i<ss.length; i++){
            ss[i]=ss[i].substring(0, 1).toUpperCase()+ss[i].substring(1);
            name+=ss[i];
            if(i!=ss.length-1) name+=" ";
        }
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
    public String toString(){
        return code+" "+name+" "+age+" "+s+" "+rank;   
    }
}
