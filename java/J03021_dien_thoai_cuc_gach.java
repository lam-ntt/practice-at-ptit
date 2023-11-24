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
public class J03021_dien_thoai_cuc_gach {
    public static Map<String, String> mp=new HashMap();
    
    public static void main(String[] args){
        init();
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            if(check(convert(sc.next().toUpperCase()))) System.out.println("YES");
            else System.out.println("NO");
            t--;
        }
    }
    
    public static void init(){
        mp.put("ABC", "2");
        mp.put("DEF", "3");
        mp.put("GHI", "4");
        mp.put("JKL", "5");
        mp.put("MNO", "6");
        mp.put("PQRS", "7");
        mp.put("TUV", "8");
        mp.put("WXYZ", "9");
    }
    
    public static boolean check(String s){
        for(int i=0; i<(float)s.length()/2; i++){
            if(s.charAt(i)!=s.charAt(s.length()-1-i)) return false;
        }
        return true;
    }
    
    public static String convert(String s){
        String res="";
        for(int i=0; i<s.length(); i++){
            res+=find(s.substring(i, i+1));
        }
        return res;
    }
    
    public static String find(String s){
        for(String i: mp.keySet()){
            if(i.contains(s)) return mp.get(i);
        }
        return "";
    }
}
