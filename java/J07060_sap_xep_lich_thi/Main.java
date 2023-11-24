/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07060_sap_xep_lich_thi;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Main {
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc=new Scanner(new File("MONTHI.in"));
        List<Subject> l=new ArrayList();
        int t=sc.nextInt();
        sc.nextLine();
        while(t!=0){
            l.add(new Subject(sc));
            t--;
        }
        
        
        sc=new Scanner(new File("CATHI.in"));
        List<Period> ll=new ArrayList();
        t=sc.nextInt();
        sc.nextLine();
        while(t!=0){
            ll.add(new Period(sc));
            t--;
        }
        
        sc=new Scanner(new File("LICHTHI.in"));
        List<Link> lll=new ArrayList();
        t=sc.nextInt();
        String scode, pcode, gcode, num;
        while(t!=0){
            pcode=sc.next();
            scode=sc.next();
            gcode=sc.next();
            num=sc.next();
            
            Subject tmp1=Subject.find(l, scode);
            Period tmp2=Period.find(ll, pcode);
            Link li=new Link(tmp1, tmp2, gcode, num);
            li.cal();
            lll.add(li);
            t--;
        }
        
        
        lll.sort((Link a, Link b)->{
            if(a.getDt().equals(b.getDt())){
                return a.getPcode().compareTo(b.getPcode());
            }
            if(a.getDt().isAfter(b.getDt())) return 1;
            return -1;
        });
        
        
        for(Link li: lll){
            System.out.println(li);
        }
    }
}
