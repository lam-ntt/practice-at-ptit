/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J01007_kiem_tra_so_fibonaxi {
    static long[] fibo=new long[100];
    
    public static void main(String[] args){
        init();
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            long n=sc.nextLong();
            if(check(n)) System.out.println("YES");
            else System.out.println("NO");
            t-=1;
        }
    }
    
    public static void init(){
        fibo[1]=0; fibo[2]=1;
        for(int i=3; i<=92; i++){
            fibo[i]=fibo[i-1]+fibo[i-2];
        }
    }
    
    public static boolean check(long n){
        for(int i=1; i<=92; i++){
            if(fibo[i]==n) return true;
        }
        return false;
    }
}
