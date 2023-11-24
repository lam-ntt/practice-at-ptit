/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J06008_tinh_gio_chuan_cho_tung_giang_vien;

import static java.lang.String.format;
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
        
        List<Link> lll=new ArrayList();
        t=sc.nextInt();
        String code1, code2;
        double num;
        while(t!=0){
            code1=sc.next();
            code2=sc.next();
            num=sc.nextDouble();
            if(!(mp.containsKey(code1)&&mp.get(code1).equals(code2))){
                Lecturer tmp=Lecturer.find(ll, code1);
                Subject tmpp=Subject.find(l, code2);
                
                tmp.setHours(tmp.getHours()+num);
                mp.put(code1, code2);
                
                Link li=new Link(tmp, tmpp, num);
                lll.add(li);
            }
            t--;
        }
        
        String key=sc.next();
        Lecturer le=Lecturer.find(ll, key);
        System.out.println("Giang vien: "+le.getName());
        for(Link li: lll){
            if(li.getL().equals(key)) System.out.println(li.getS());
        }
        System.out.println("Tong: "+format("%.2f", le.getHours()));
    }
}
