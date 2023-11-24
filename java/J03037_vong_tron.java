/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Scanner;
import java.util.Set;

/**
 *
 * @author nguye
 */

class Bridge{
    public int f, l;

    public Bridge(int f, int l) {
        this.f = f;
        this.l = l;
    }
}

public class J03037_vong_tron {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        Set<Character> se=new HashSet();
        List<Bridge> l=new ArrayList();
        for(int i=0; i<s.length(); i++){
            char c=s.charAt(i);
            if(se.contains(c)) continue;
            se.add(c);
            l.add(new Bridge(i, find(s, c, i+1)));
        }
        
        int cnt=0;
        Bridge b1, b2;
        for(int i=0; i<l.size()-1; i++){
            for(int j=i+1; j<l.size(); j++){
                b1=l.get(i); 
                b2=l.get(j);
                if(b1.f<b2.f&&b2.f<b1.l&&b1.l<b2.l) cnt++;
                if(b2.f<b1.f&&b1.f<b2.l&&b2.l<b1.l) cnt++;
            }
        }
        System.out.println(cnt);
    }
    
    public static int find(String s, char c, int l){
        for(int i=l; i<s.length(); i++){
            if(s.charAt(i)==c) return i;
        }
        return -1;
    }
}
