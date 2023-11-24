/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J02023_lua_chon_tham_lam {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt(), s=sc.nextInt();
        if(n==0||(n!=1&&s==0)||(s>9*n)) System.out.println("-1 -1");
        else System.out.println(mn(n, s)+" "+mx(n, s));
        
    }
    
    public static String mn(int n, int s){
        String res="";
        while(s>9){
            res+="9";
            s-=9;
        }
        
        if(n==res.length()+1) res=String.valueOf(s)+res;
        else{
            res=String.valueOf(s-1)+res;
            while(n!=res.length()+1) res="0"+res;
            res="1"+res;
        }
        return res;
    }
    
    public static String mx(int n, int s){
        String res="";
        while(s>0){
            if(s>=9){
                res+="9";
                s-=9;
            }else{
                res+=String.valueOf(s);
                s=0;
            }
        }
        
        while(n!=res.length()) res+="0";
        return res;
    }
}
