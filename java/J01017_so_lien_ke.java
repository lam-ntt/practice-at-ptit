/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J01017_so_lien_ke {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            long n=sc.nextLong();
            if(check(n)) System.out.println("YES");
            else System.out.println("NO");
            t-=1;
        }
    }
    
    public static boolean check(long n){
        long cur=n%10;
        while(n>9){
            n/=10;
            System.out.println(n);
            if(Math.abs(cur-n%10)!=1) return false;
            cur=n%10;
        }
        return true;
    }
}
