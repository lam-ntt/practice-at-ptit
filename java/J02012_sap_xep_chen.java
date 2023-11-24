/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J02012_sap_xep_chen {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] a=new int[n];
        for(int i=0; i<n; i++){
            a[i]=sc.nextInt();
        }
        
        for(int i=0; i<n; i++){
            int tmp=a[i], idx=i-1;
            while(idx>=0&&a[idx]>=tmp){
                a[idx+1]=a[idx];
                --idx;
            }
            a[idx+1]=tmp;
            
            System.out.print("Buoc "+i+": ");
            for(int j=0; j<=i; j++){
                System.out.print(a[j]+" ");
            }
            System.out.println();
        }
    }
}
