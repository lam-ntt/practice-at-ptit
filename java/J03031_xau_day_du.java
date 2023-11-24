/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

/**
 *
 * @author nguye
 */
public class J03031_xau_day_du {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            String s=sc.next();
            int k=sc.nextInt();
            if(check(s, k)) System.out.println("YES");
            else System.out.println("NO");
            t--;
        }
    }
    
    public static boolean check(String s, int k){
        if(s.length()<26) return false;
        
        Set<Character> se=new HashSet();
        for(int i=0; i<s.length(); i++){
            se.add(s.charAt(i));
        }
        if(se.size()==26) return true;
        if(k>=26-se.size()) return true;
        return false;
        
    }
}
