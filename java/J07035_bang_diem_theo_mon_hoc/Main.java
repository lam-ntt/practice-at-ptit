/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07035_bang_diem_theo_mon_hoc;

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
        Scanner sc=new Scanner(new File("SINHVIEN.in"));
        List<Student> l=new ArrayList();
        int t=sc.nextInt();
        sc.nextLine();
        while(t!=0){
            Student s=new Student(sc);
            s.normalize();
            l.add(s);
            t--;
        }
        
        sc=new Scanner(new File("MONHOC.in"));
        t=sc.nextInt();
        while(t!=0){
            sc.nextLine();
            mp.put(sc.nextLine(), sc.nextLine());
            t--;
        }
        
        sc=new Scanner(new File("BANGDIEM.in"));
        List<Link> ll=new ArrayList();
        t=sc.nextInt();
        String stdcode, sbjcode;
        float score;
        while(t!=0){
            stdcode=sc.next();
            sbjcode=sc.next();
            score=sc.nextFloat();
            Student tmp=Student.find(l, stdcode);
            ll.add(new Link(tmp, sbjcode, score));
            t--;
        }
        
        List<Link> lll=new ArrayList();
        t=sc.nextInt();
        String key;
        while(t!=0){
            key=sc.next();
            lll.clear();
            for(Link li: ll){
                if(li.getSbjcode().equals(key)) lll.add(li);
            }
            
            lll.sort((Link a, Link b)->{
                if(a.getScore()==b.getScore()){
                    return a.getScode().compareTo(b.getScode());
                }
                return -Float.compare(a.getScore(), b.getScore());
            });
            
            System.out.println("BANG DIEM MON "+mp.get(key)+":");
            for(Link li: lll){
                System.out.println(li);
            }
            t--;
        }
    }
}
