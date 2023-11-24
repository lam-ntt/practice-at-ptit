/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J06004_quan_li_bai_tap_nhom_2;

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
    
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        List<Student> l=new ArrayList();
        int t=sc.nextInt(), tt=sc.nextInt();
        while(t!=0){
            sc.nextLine();
            l.add(new Student(sc));
            t--;
        }
        
        sc.nextLine();
        for(int i=1; i<=tt; i++){
            mp.put(i, sc.nextLine());
        }
        
        l.sort((Student a, Student b)->{
            return a.getCode().compareTo(b.getCode());
        });
        
        
        for(Student s: l){
            System.out.println(s+" "+mp.get(s.getGroup()));
        }
    }
}
