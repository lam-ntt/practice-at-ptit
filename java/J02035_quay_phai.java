/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J02035_quay_phai {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            int n=sc.nextInt();
            int pos=0; long mx=0;
            long[] a=new long[n];
            for(int i=0; i<n; i++){
                a[i]=sc.nextLong();
                if(a[i]>mx){
                    mx=a[i];
                    pos=i+1;
                }
            }
            
            if(pos==n) System.out.println("0");
            else System.out.println(pos);
            t--;
        }
    }
}
