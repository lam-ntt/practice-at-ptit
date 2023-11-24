/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05056_xep_hang_van_dong_vien_2;

import java.text.ParseException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Main {
    public static void main(String[] args) throws ParseException{
        Scanner sc=new Scanner(System.in);
        List<Athlete> l=new ArrayList();
        int t=sc.nextInt(), tt=t;
        sc.nextLine();
        while(t!=0){
            Athlete a=new Athlete(sc);
            a.cal();
            l.add(a);
            t--;
        }
        
        List<Athlete> ll=new ArrayList();
        ll.addAll(l);
        Collections.sort(ll);
        for(int i=0; i<tt; i++){
            Athlete a=ll.get(i);
            a.setRank(i+1);
            
            if(i!=0){
                Athlete b=ll.get(i-1);
                if(a.getSreal().equals(b.getSreal())){
                    a.setRank(b.getRank());
                }
            }
        }
        
        for(Athlete a: ll){
            System.out.println(a);
        }
    }
}


