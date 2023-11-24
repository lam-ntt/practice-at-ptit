/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J01010_cat_doi {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            String s=sc.next();
            check(s);
            t--;
        }
    }
    
    public static void check(String s){
        long n=0;
        for(int i=0; i<s.length(); i++){
            char c=s.charAt(i);
            if(c=='8'||c=='9') c='0';
            if(c!='0'&&c!='1'){
                System.out.println("INVALID");
                return;
            }
            n=n*10+c-'0';
        }
        if(n==0) System.out.println("INVALID");
        else System.out.println(n);
    }
}
