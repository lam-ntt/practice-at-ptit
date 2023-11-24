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

class Pair{
    public String a;
    public int b;

    public Pair(String a, int b) {
        this.a = a;
        this.b = b;
    }
    
    public String toString(){
        return a+" "+b;
    }
}

public class J08011_liet_ke_va_dem {
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
        
        List<Pair> ll=new ArrayList();
        for(String i: mp.keySet()){
            ll.add(new Pair(i, mp.get(i)));
        }
        ll.sort((Pair a, Pair b)->{
            if(mp.get(a.a)==mp.get(b.a)){
                return Integer.compare(l.indexOf(a.a), l.indexOf(b.a));
            }else{
                return -Integer.compare(mp.get(a.a), mp.get(b.a));
            }
        });
        for(Pair p: ll){
            System.out.println(p);
        }
    }
    
    public static boolean check(String s){
        for(int i=0; i<s.length()-1; i++){
            if(s.charAt(i)>s.charAt(i+1)) return false;
        }
        return true;
    }
}
