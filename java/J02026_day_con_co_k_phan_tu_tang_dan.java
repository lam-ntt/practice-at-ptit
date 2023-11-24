/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Arrays;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J02026_day_con_co_k_phan_tu_tang_dan {
    public static int n, k;
    public static int[] a, A;
    
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        
        int t=sc.nextInt();
        while(t!=0){
            n=sc.nextInt();
            k=sc.nextInt();
            a=new int[k+1];
            A=new int[n];
            for(int i=0; i<n; i++){
                A[i]=sc.nextInt();
            }
            Arrays.sort(A);
            tryy(1);
            t--;
        }
    }
    
    public static void tryy(int i){
        for(int j=a[i-1]+1; j<=n; j++){
            a[i]=j;
            if(i==k) print();
            else tryy(i+1);
        }
    }
    
    public static void print(){
        for(int i=1; i<=k; i++){
            System.out.print(A[a[i]-1]+" ");
        }
        System.out.println();
    }
}
