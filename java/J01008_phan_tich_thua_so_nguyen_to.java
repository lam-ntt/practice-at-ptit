/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J01008_phan_tich_thua_so_nguyen_to {
    static int cnt=0;
    
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            int n=sc.nextInt();
            check(n);
            t--;
        }
    }
    
    public static void check(int n){
        cnt++;
        System.out.print("Test "+cnt+": ");
        for(int i=2; i<=Math.sqrt(n); i++){
            if(n%i==0){
                int count=0;
                while(n%i==0){
                    count++;
                    n/=i;
                }
                System.out.print(i+"("+count+") ");
            }
        }
        if(n!=1) System.out.print(n+"(1)");
        System.out.println();
    }
}
