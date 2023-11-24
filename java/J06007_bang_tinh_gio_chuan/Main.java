/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J06007_bang_tinh_gio_chuan;

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
    
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        List<Subject> l=new ArrayList();
        int t=sc.nextInt();
        sc.nextLine();
        while(t!=0){
            l.add(new Subject(sc));
            t--;
        }
        
        List<Lecturer> ll=new ArrayList();
        t=sc.nextInt();
        sc.nextLine();
        while(t!=0){
            ll.add(new Lecturer(sc));
            t--;
        }
        
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
