/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J02022_so_xa_cach {
    public static int n;
    public static int[] a, mark;
    public static List<String> l=new ArrayList();
    
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            n=sc.nextInt();
            a=new int[n];
            mark=new int[n+1];
            l.clear();
            
            tryy(0);
            for(String i: l){
                System.out.println(i+" ");
            }
            System.out.println();
            t--;
        }
    }
    
    public static void tryy(int i){
        for(int j=1; j<=n; j++){
            if(mark[j]==0){
                a[i]=j;
                mark[j]=1;
                if(i==n-1) save();
                else tryy(i+1);
                mark[j]=0;
            }
        }
    }
    
    public static void save(){
        String tmp="";
        for(int i=0; i<n-1; i++){
            if(Math.abs(a[i]-a[i+1])==1) return;
            tmp+=a[i];
        }
        tmp+=a[n-1];
        l.add(tmp);
    }
}
