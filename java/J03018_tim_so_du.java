/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J03018_tim_so_du {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            String s=sc.next();
            int res=1;
            int md4=mod4(s);
            if(md4%4==0) res+=2;
            else if(md4%4==1) res+=5;
            else if(md4%4==2) res+=8;
            else res+=5;
            int md2=mod2(s);
            if(md2%2==0) res+=1;
            else res+=4;
            System.out.println(res%5);
            t--;
        }
    }
    
    public static int mod2(String s){
        return Integer.parseInt(s.substring(s.length()-1))%2;
    }
    
    public static int mod4(String s){
        if(s.length()==1) return Integer.parseInt(s.substring(s.length()-1))%4;
        else return Integer.parseInt(s.substring(s.length()-2))%4;
    }
}
