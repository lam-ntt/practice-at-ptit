/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J01022_xau_nhi_phan {
    public static long[] fi=new long[100];
    
    public static void main(String[] args){
        init();
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            int n=sc.nextInt();
            long k=sc.nextLong();
            System.out.println(cal(n, k));
            t--;
        }
    }
    
    public static void init(){
        fi[0]=0;
        fi[1]=1;
        fi[2]=1;
        for(int i=3; i<93; i++){
            fi[i]=fi[i-1]+fi[i-2];
        }
    }
    
    public static long cal(int n, long k){
        if(n==1) return 0;
        if(n==2) return 1;
        if(k<=fi[n-2]) return cal(n-2, k);
        else return cal(n-1, k-fi[n-2]);
    }
}
