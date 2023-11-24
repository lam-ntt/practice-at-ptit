/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J01012_uoc_so_chia_het_cho_2 {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            int n=sc.nextInt();
            System.out.println(count(n));
            t--;
        }
    }
    
    public static int count(int n){
        int count=0;
        for(int i=1; i<=Math.sqrt(n); i++){
            if(n%i==0){
                if(i%2==0) count++;
                if((n/i)%2==0&&n/i!=i) count++;
            }
        }
        return count;
    }
}
