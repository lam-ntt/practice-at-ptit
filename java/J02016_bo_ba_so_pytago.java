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
public class J02016_bo_ba_so_pytago {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            int n=sc.nextInt();
            long[] a=new long[n];
            for(int i=0; i<n; i++){
                a[i]=(long) Math.pow(sc.nextLong(), 2);
            }
            Arrays.sort(a);
            
            int ok=0;
            for(int i=n-1; i>=2; i--){
                int l=0, r=i-1;
                long tmp;
                while(l<r){
                    tmp=a[l]+a[r];
                    if(tmp==a[i]){
                        ok=1;
                        break;
                    }
                    else if(tmp>a[i])  r--;
                    else l++; 
                }
                if(ok==1) break;
            }
            if(ok==1) System.out.println("YES");
            else System.out.println("NO");
            t--;
        }
    }
}
