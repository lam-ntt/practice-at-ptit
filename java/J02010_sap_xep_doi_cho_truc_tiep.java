/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J02010_sap_xep_doi_cho_truc_tiep {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int[] a=new int[n];
        for(int i=0; i<n; i++){
            a[i]=sc.nextInt();
        }
        
        int tmp;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(a[j]<a[i]){
                    tmp=a[i];
                    a[i]=a[j];
                    a[j]=tmp;
                }
            }
            System.out.print("Buoc "+(i+1)+": ");
            for(int j=0; j<n; j++){
                System.out.print(a[j]+" ");
            }
            System.out.println();
        }
    }
}
