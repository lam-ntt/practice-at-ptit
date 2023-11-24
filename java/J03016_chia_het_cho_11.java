/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J03016_chia_het_cho_11 {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            String s=sc.next();
            if(check(s)) System.out.println("1");
            else System.out.println("0");
            t--;
        }
    }
    
    public static boolean check(String s){
        int tmp=0;
        for(int i=0; i<s.length(); i++){
            if(i%2==0) tmp+=Integer.valueOf(s.substring(i, i+1));
            else tmp-=Integer.valueOf(s.substring(i, i+1));
        }
        return tmp%11==0;
    }
}
