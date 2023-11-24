/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J01014_uoc_so_nguyen_to_lon_nhat {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            long n=sc.nextLong();
            System.out.println(cal(n));
            t-=1;
        }
    }
    
    public static long cal(long n){
        for(int i=1; i<=(int)Math.sqrt(n); i++){
            if(n%i==0&&check(n/i)) return n/i;
        }
        for(int i=(int)Math.sqrt(n)-1; i>=2; i--){
            if(n%i==0&&check(i)) return i;
        }
        return -1;
    }
    
    public static boolean check(long n){
        if(n<2) return false;
        for(int i=2; i<=Math.sqrt(n); i++){
            if(n%i==0) return false;
        }
        return true;
    }
}
