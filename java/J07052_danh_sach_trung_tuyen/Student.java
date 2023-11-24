/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07052_danh_sach_trung_tuyen;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
class Student {
    private String code, name, state;
    private float s1, s2, s3, s, ps, ss;
    
    public Student(Scanner sc){
        code=sc.nextLine();
        name=sc.nextLine().trim();
        s1=sc.nextFloat();
        s2=sc.nextFloat();
        s3=sc.nextFloat();
    }

    public String getCode() {
        return code;
    }

    public float getSs() {
        return ss;
    }

    public void setState(String state) {
        this.state = state;
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
        String area=code.substring(0, 3);
        if(area.equals("KV1")) ps=(float)0.5;
        else if(area.equals("KV2")) ps=(float)1;
        else if(area.equals("KV3")) ps=(float)2.5;
        
        s=s1*2+s2+s3;
        ss=s+ps;
    }
    
    @Override
    public String toString(){
        String res=code+" "+name+" ";
        if(ps==(int)ps) res=res+format("%.0f", ps)+" ";
        else res=res+ps+" ";
        if(ss==(int)ss) res=res+format("%.0f", ss)+" ";
        else res=res+ss+" ";
        res=res+state;
        return res;
    }
}
