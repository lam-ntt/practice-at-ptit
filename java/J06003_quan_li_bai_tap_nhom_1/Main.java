/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J06003_quan_li_bai_tap_nhom_1;

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
        
        t=sc.nextInt();
        while(t!=0){
            int tmp=sc.nextInt();
            System.out.println("DANH SACH NHOM "+tmp+":");
            for(Student s: l){
                if(s.getGroup()==tmp) System.out.println(s);
            }
            System.out.println("Bai tap dang ky: "+mp.get(tmp));
            t--;
        }
    }
}
