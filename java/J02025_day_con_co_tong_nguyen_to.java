/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J02025_day_con_co_tong_nguyen_to {
    public static int n;
    public static int[] a, A;
    public static List<String> l=new ArrayList();
    
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        
        int t=sc.nextInt();
        while(t!=0){
            n=sc.nextInt();
            a=new int[n];
            A=new int[n];
            for(int i=0; i<n; i++){
                A[i]=sc.nextInt();
            }
            l.clear();
            
            Arrays.sort(A);
            for(int i=0; i<A.length/2; i++){
                int tmp=A[i];
                A[i]=A[A.length-1-i];
                A[A.length-1-i]=tmp;
            }
            
            tryy(0);
            
            for(String i: l){
                System.out.println(i);
            }
            t--;
        }
    }
    
    public static void tryy(int i){
        for(int j=0; j<=1; j++){
            a[i]=j;
            if(i==n-1) check();
            else tryy(i+1);
        }
    }
    
    public static void check(){
        int sum=0;
        String tmp="";
        for(int i=0; i<n; i++){
            if(a[i]==0) continue;
            sum+=A[i];
            tmp+=(A[i]+" ");
        }
        if(checkPrime(sum)) l.add(tmp);
    }
    
    public static boolean checkPrime(int n){
        if(n<2) return false;
        for(int i=2; i<=Math.sqrt(n); i++){
            if(n%i==0) return false;
        }
        return true;
    }
}
