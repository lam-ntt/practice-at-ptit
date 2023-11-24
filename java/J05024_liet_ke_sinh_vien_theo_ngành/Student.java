/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05024_liet_ke_sinh_vien_theo_ngành;

import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
class Student {
    private String code, name, group, email;
    
    public Student(Scanner sc){
        code=sc.nextLine();
        name=sc.nextLine();
        group=sc.nextLine();
        email=sc.nextLine();
    }
    
    @Override
    public String toString(){
        return code+" "+name+" "+group+" "+email;
    }
    
    public static void find(List<Student> l, String key){
        System.out.println("DANH SACH SINH VIEN NGANH "+key.toUpperCase()+":");
        if(key.equals("Ke toan")) key="DCKT";
        else if(key.equals("Cong nghe thong tin")) key="DCCN";
        else if(key.equals("An toan thong tin")) key="DCAT";
        else if(key.equals("Vien thong")) key="DCVT";
        else if(key.equals("Dien tu")) key="DCDT";
        for(Student s: l){
            if(s.group.substring(0, 1).equals("E")){
                if(key.equals("DCCN")||key.equals("DCAT")) continue;
            }
            if(s.code.contains(key)) System.out.println(s);
        }
    }
}
