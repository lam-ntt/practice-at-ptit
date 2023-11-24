/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J03008_so_dep_3 {
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
        for(int i=0; i<(float)s.length()/2; i++){
            char digit=s.charAt(i);
            if(!(digit=='2'||digit=='3'||digit=='5'||digit=='7')) return false;
            if(digit!=s.charAt(s.length()-1-i)) return false;
        }
        return true;
    }
}