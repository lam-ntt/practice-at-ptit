/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J01011_boi_so_chung_uoc_so_chung {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            long a=sc.nextLong(), b=sc.nextLong();
            long res=gcd(a, b);
            System.out.println(a*b/res+" "+res);
            t--;
        }
    }
    
    public static long gcd(long a, long b){
        long tmp;
        if(a<b){
            tmp=a;
            a=b;
            b=tmp;
        }
        while(b!=0){
            tmp=a;
            a=b;
            b=tmp%b;
        }
        return a;
    }
}
