/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J02102_ma_tran_xoan_oc_tang_dan {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        
        List<Integer> l=new ArrayList();
        int n=sc.nextInt();
        for(int i=0; i<n*n; i++){
            l.add(sc.nextInt());
        }
        
        Collections.sort(l);
        
        int[][] res=new int[n][n];
        int cnt=0, ll=0, r=n-1, t=0, b=n-1;
        while(true){
            if(ll<=r){
                for(int i=ll; i<=r; i++){
                    res[t][i]=l.get(cnt++);
                }
                t++;
            }else break;
            
            if(t<=b){
                for(int i=t; i<=b; i++){
                    res[i][r]=l.get(cnt++);
                }
                r--;
            }else break;
            
            if(r>=ll){
                for(int i=r; i>=ll; i--){
                    res[b][i]=l.get(cnt++);
                }
                b--;
            }else break;
            
            if(b>=t){
                for(int i=b; i>=t; i--){
                    res[i][ll]=l.get(cnt++);
                }
                ll++;
            }else break;
        }
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                System.out.print(res[i][j]+" ");
            }
            System.out.println();
        }
    }
}
