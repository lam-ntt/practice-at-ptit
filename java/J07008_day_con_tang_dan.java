/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J07008_day_con_tang_dan {
    public static int n;
    public static int[] a, A;
    public static List<String> l=new ArrayList();
    
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc=new Scanner(new File("DAYSO.in"));
        
        n=sc.nextInt();
        a=new int[n];
        A=new int[n];
        for(int i=0; i<n; i++){
            A[i]=sc.nextInt();
        }
        
        tryy(0);
        
        Collections.sort(l);
        for(String i: l){
            System.out.println(i);
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
        int cur=0, cnt=0;
        String tmp="";
        for(int i=0; i<n; i++){
            if(a[i]==0) continue;
            if(A[i]>cur){
                tmp+=(A[i]+" ");
                cur=A[i];
                ++cnt;
            }else{
                return;
            }
        }
        
        if(cnt==1) return;
        l.add(tmp);
    }
}
