
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author nguye
 */
class CheckIn {
    public int t, d;
    
    public CheckIn(Scanner sc){
        t=sc.nextInt();
        d=sc.nextInt();
    }   
}

public class J02009_xep_hang {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        
        List<CheckIn> l=new ArrayList();
        int t=sc.nextInt();
        while(t!=0){
            l.add(new CheckIn(sc));
            t--;
        }
        
        l.sort((CheckIn a, CheckIn b)->{
            if(a.t==b.t){
                return Integer.compare(a.d, b.d);
            }
            return Integer.compare(a.t, b.t);
        });
        
        int time=0;
        for(CheckIn c: l){
            if(c.t>time) time=c.t;
            time+=c.d;
        }
        System.out.println(time);
    }
}

