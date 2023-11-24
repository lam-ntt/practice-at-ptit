/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J02028_day_con_lien_tiep_tong_bang_k {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        int n; long k;
        long[] a;
        while(t!=0){
            n=sc.nextInt();
            k=sc.nextLong();
            
            a=new long[n];
            for(int i=0; i<n; i++){
                a[i]=sc.nextInt();
                if(i!=0) a[i]+=a[i-1];
            }
            
            if(find(a, 0, n-1, k)) System.out.println("YES");
            else{
                int ok=0;
                for(int i=0; i<n-1; i++){
                    if(find(a, i+1, n-1, a[i]+k)){
                        ok=1;
                        break;
                    }
                }
                if(ok==1) System.out.println("YES");
                else System.out.println("NO");
            }
            t--;
        }
    }
    
    public static boolean find(long[] a, int l, int r, long value){
        if(l>r) return false;
        int m=(l+r)/2;
        if(a[m]==value) return true;
        else if(a[m]<value) return find(a, m+1, r, value);
        else return find(a, l, m-1, value);
    }
}
