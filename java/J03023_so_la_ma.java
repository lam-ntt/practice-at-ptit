/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J03023_so_la_ma {
    public static Map<Character, Integer> mp=new HashMap();
    
    public static void main(String[] args){
        init();
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            String s=sc.next();
            System.out.println(cal(s));
            t--;
        }
    }
    
    public static void init(){
        mp.put('I', 1);
        mp.put('V', 5);
        mp.put('X', 10);
        mp.put('L', 50);
        mp.put('C', 100);
        mp.put('D', 500);
        mp.put('M', 1000);
    }
    
    public static int cal(String s){
        int res=0;
        int i=s.length()-1;
        while(i>=0){
            res+=mp.get(s.charAt(i));
            if(i==0) break;
            
            int pos=i-1;
            while(mp.get(s.charAt(pos))<mp.get(s.charAt(i))){
                pos--;
                if(pos==-1) break;
            }
            
            for(int j=pos+1; j<i; j++){
                res-=mp.get(s.charAt(j));
            }
            i=pos;
        }
        return res;
    }
}
