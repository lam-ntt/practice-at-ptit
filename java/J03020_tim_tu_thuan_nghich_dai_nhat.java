/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J03020_tim_tu_thuan_nghich_dai_nhat {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s="";
        Map<String, Integer> mp=new HashMap();
        List<String> l=new ArrayList();
        while(sc.hasNext()){
            s=sc.next();
            if(check(s)){
                if(mp.containsKey(s)) mp.replace(s, mp.get(s)+1);
                else{
                    mp.put(s, 1);
                    l.add(s);
                }
            }
        }
        
        int tmp=0;
        for(String i: mp.keySet()){
            if(i.length()>tmp) tmp=i.length();
        }
        for(String i: l){
            if(i.length()==tmp) System.out.println(i+" "+mp.get(i));
        }
    }
    
    public static boolean check(String s){
        for(int i=0; i<s.length()/2; i++){
            if(s.charAt(i)!=s.charAt(s.length()-1-i)) return false;
        }
        return true;
    }
}
