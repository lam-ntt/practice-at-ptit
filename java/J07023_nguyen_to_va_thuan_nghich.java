/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;


/**
 *
 * @author nguye
 */

public class J07023_nguyen_to_va_thuan_nghich {
    public static int N=10000;
    public static boolean[] f=new boolean[N+1];
    public static int[] mark1=new int[N+1], mark2=new int[N+1], 
            count1=new int[N+1], count2=new int[N+1];
    public static List<Integer> l1, l2;
    
    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException{
        ObjectInputStream o=new ObjectInputStream(
                new FileInputStream("DATA1.in"));
        l1=(List<Integer>) o.readObject();
        o.close();
        
        o=new ObjectInputStream(
                new FileInputStream("DATA2.in"));
        l2=(List<Integer>) o.readObject();
        o.close();
        
        List<Integer> l=new ArrayList();
        for(Integer i: l2){
            mark2[i]++;
        }
        
        initSieve();
        for(Integer i: l1){
            if(mark1[i]==0&&mark2[i]>0&&f[i]){
                l.add(i);
                mark1[i]=1;
            }
        }
        
        countFre();
        Collections.sort(l);
        for(Integer i: l){
            if(check(i)) System.out.println(i+" "+count1[i]+" "+count2[i]);
        }
    }

    public static void initSieve() {
        f[0]=false; f[1]=false;
        for(int i=2; i<=N; i++){
            f[i]=true;
        }
        for(int i=2; i<=Math.sqrt(N); i++){
            if(checkPrime(i)){
                for(int j=2*i; j<=N; j+=i){
                    f[j]=false;
                }
            }
        }
    }
    
    public static boolean checkPrime(Integer n) {
        if(n<2) return false;
        for(int i=2; i<=Math.sqrt(n); i++){
            if(n%i==0) return false;
        }
        return true;
    }
    
    public static boolean check(int n){
        String s=n+"";
        for(int i=0; i<s.length()/2; i++){
            if(s.charAt(i)!=s.charAt(s.length()-1-i)) return false;
        }
        return true;
    }
    
    public static void countFre(){
        for(Integer i: l1){
            count1[i]++;
        }
        for(Integer i: l2){
            count2[i]++;
        }
    }
}
