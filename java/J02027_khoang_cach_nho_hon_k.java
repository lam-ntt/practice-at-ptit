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
public class J02027_khoang_cach_nho_hon_k {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        int n, k;
        int[] a;
        while(t!=0){
            n=sc.nextInt();
            k=sc.nextInt();

            a=new int[n];
            for(int i=0; i<n; i++){
                a[i]=sc.nextInt();
            }
            Arrays.sort(a);
            
            long cnt=0;
            for(int i=0; i<n-1; i++){
                int tmp=find(a, i+1, n-1, a[i]+k);
                if(tmp==-1) cnt+=(n-i-1);
                else cnt+=(tmp-i-1);
            }
            System.out.println(cnt);
            t--;
        }
    }
    
    public static int find(int[] a, int l, int r, int value){
        if(l>r) return -1;
        int m=(l+r)/2;
        if(a[m]>=value){
            int tmp=find(a, l, m-1, value);
            if(tmp==-1) return m;
            else return tmp;
        }
        else return find(a, m+1, r, value);
    }
}
