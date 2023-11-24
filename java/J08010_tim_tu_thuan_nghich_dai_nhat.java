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
public class J08010_tim_tu_thuan_nghich_dai_nhat {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        List<String> l=new ArrayList();
        Map<String, Integer> mp=new HashMap();
        String s;
        
        while(sc.hasNext()){
            s=sc.next();
            if(s.equals("-1")) break;
            if(check(s)){
                if(mp.containsKey(s)){
                    mp.replace(s, mp.get(s)+1);
                }else{
                    l.add(s);
                    mp.put(s, 1);
                }
            }
        }
        
        int mxlen=-1;
        for(String i: l){
            mxlen=Math.max(mxlen, i.length());
        }
        for(String i: l){
            if(i.length()==mxlen){
                System.out.println(i+" "+mp.get(i));
            }
        }
    }
    
    public static boolean check(String s){
        for(int i=0; i<s.length()/2; i++){
            if(s.charAt(i)!=s.charAt(s.length()-1-i)) return false;
        }
        return true;
    }
}
