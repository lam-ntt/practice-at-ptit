/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07027_quan_li_bai_tap_nhom;

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
    public static Map<Integer, String> mp=new HashMap();
    
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc=new Scanner(new File("SINHVIEN.in"));
        List<Student> l=new ArrayList();
        int t=sc.nextInt();
        sc.nextLine();
        while(t!=0){
            l.add(new Student(sc));
            t--;
        }
        
        sc=new Scanner(new File("BAITAP.in"));
        int tt=sc.nextInt();
        sc.nextLine();
        for(int i=1; i<=tt; i++){
            mp.put(i, sc.nextLine());
        }
        
        sc=new Scanner(new File("NHOM.in"));
        String code; int group;
        while(sc.hasNext()){
            code=sc.next();
            group=Integer.parseInt(sc.next());
            Student tmp=Student.find(l, code);
            tmp.setGroup(group);
        }
        
        l.sort((Student a, Student b)->{
            return a.getCode().compareTo(b.getCode());
        });
        
        for(Student s: l){
            System.out.println(s+" "+s.getGroup()+" "+mp.get(s.getGroup()));
        }
    }
}

