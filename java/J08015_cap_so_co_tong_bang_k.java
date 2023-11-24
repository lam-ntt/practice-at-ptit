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
public class J08015_cap_so_co_tong_bang_k {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            int n=sc.nextInt();
            long k=sc.nextInt();
            long[] a=new long[n];
            for(int i=0; i<n; i++){
                a[i]=sc.nextLong();
            }
            
            Arrays.sort(a);
            
            long cnt=0;
            for(int i=0; i<n-1; i++){
                if(k-a[i]<a[i]) continue;
                int l=findl(a, i+1, n-1, k-a[i]);
                int r=findr(a, i+1, n-1, k-a[i]);
                if(l==-1) continue;
                cnt+=(r-l+1);
            }
            System.out.println(cnt);
            t--;
        }
    }
    
    public static int findl(long[] a, int l, int r, long value){
        if(l>r) return -1;
        int m=(l+r)/2;
        
        if(a[m]==value){
            int tmp=findl(a, l,  m-1, value);
            if(tmp==-1) return m;
            else return tmp;
        }
        else if(a[m]>value) return findl(a, l, m-1, value);
        else return findl(a, m+1, r, value);
    }
    
    public static int findr(long[] a, int l, int r, long value){
        if(l>r) return -1;
        int m=(l+r)/2;
        
        if(a[m]==value){
            int tmp=findr(a, m+1, r, value);
            if(tmp==-1) return m;
            else return tmp;
        }
        else if(a[m]>value) return findr(a, l, m-1, value);
        else return findr(a, m+1, r, value);
    }
}