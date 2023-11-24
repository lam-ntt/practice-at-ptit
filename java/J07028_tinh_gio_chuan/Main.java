/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07028_tinh_gio_chuan;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Main {
    public static Map<String, String> mp=new HashMap();
    
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc=new Scanner(new File("MONHOC.in"));
        List<Subject> l=new ArrayList();
        int t=sc.nextInt();
        sc.nextLine();
        while(t!=0){
            l.add(new Subject(sc));
            t--;
        }
        
        sc=new Scanner(new File("GIANGVIEN.in"));
        List<Lecturer> ll=new ArrayList();
        t=sc.nextInt();
        sc.nextLine();
        while(t!=0){
            ll.add(new Lecturer(sc));
            t--;
        }
        
        sc=new Scanner(new File("GIOCHUAN.in"));
        t=sc.nextInt();
        String code1, code2;
        double num;
        while(t!=0){
            code1=sc.next();
            code2=sc.next();
            num=sc.nextDouble();
            if(!(mp.containsKey(code1)&&mp.get(code1).equals(code2))){
                Lecturer tmp=Lecturer.find(ll, code1);
                tmp.setHours(tmp.getHours()+num);
                mp.put(code1, code2);
            }
            t--;
        }
        
        for(Lecturer le: ll){
            System.out.println(le);
        }
    }
}
