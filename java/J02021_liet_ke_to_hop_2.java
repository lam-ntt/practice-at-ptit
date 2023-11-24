/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J02021_liet_ke_to_hop_2 {
    public static int n, k, cnt;
    public static int[] a;
    
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt(); 
        k=sc.nextInt();
        cnt=0;
        a=new int[n+1];
        for(int i=0; i<=n; i++){
            a[i]=i;
        }
        tryy(1);
        System.out.println("\nTong cong co "+cnt+" to hop");
    }
    
    public static void tryy(int i){
        for(int j=a[i-1]+1; j<=n; j++){
            a[i]=j;
            if(i==k) print();
            else tryy(i+1);
        }
    }
    
    public static void print(){
        ++cnt;
        for(int i=1; i<=k; i++){
            System.out.print(a[i]);
        }
        System.out.print(" ");
    }
}
