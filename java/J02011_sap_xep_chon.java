/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J02011_sap_xep_chon {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] a=new int[n];
        for(int i=0; i<n; i++){
            a[i]=sc.nextInt();
        }
        
        for(int i=0; i<n-1; i++){
            int idx=i;
            for(int j=i+1; j<n; j++){
                if(a[j]<a[idx]) idx=j;
            }
            int tmp=a[i];
            a[i]=a[idx];
            a[idx]=tmp;
            
            System.out.print("Buoc "+(i+1)+": ");
            for(int j=0; j<n; j++){
                System.out.print(a[j]+" ");
            }
            System.out.println();
        }
    }
}
