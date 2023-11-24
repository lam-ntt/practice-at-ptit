/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J03007_so_dep_2 {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            String s=sc.next();
            if(check(s)) System.out.println("YES");
            else System.out.println("NO");
            t--;
        }
    }
    
    public static boolean check(String s){
        if(!(s.charAt(0)=='8'&&s.charAt(s.length()-1)=='8')) return false;
        for(int i=0; i<s.length()/2; i++){
            if(s.charAt(i)!=s.charAt(s.length()-1-i)) return false;
        }
        int sum=0;
        for(int i=0; i<s.length(); i++){
            sum+=(int)s.charAt(i)-(int)'0';
        }
        return sum%10==0;  
    }
}
