/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J01018_so_khong_lien_Ke {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            long n=sc.nextLong();
            if(check(n)) System.out.println("YES");
            else System.out.println("NO");
            t--;
        }
    }
    
    public static boolean check(long n){
        int cur=(int)n%10, sum=cur;
        n/=10;
        while(n>0){
            if(Math.abs(n%10-cur)>2) return false;
            cur=(int)n%10;
            sum+=cur;
            n/=10;
        }
        return sum%10==0;
    }
}
