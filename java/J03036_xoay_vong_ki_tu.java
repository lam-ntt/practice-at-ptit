/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J03036_xoay_vong_ki_tu {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        String[] ss=new String[t];
        for(int i=0; i<t; i++){
            ss[i]=sc.next();
        }
        
        int[] a=new int[t];
        a[0]=0;
        for(int i=1; i<t; i++){
            a[i]=cal(ss[0], ss[i]);
            if(a[i]==-1){
                System.out.println("-1");
                return;
            }
        }
        
        int mn=(int) 1e9, cnt;
        for(int i=0; i<t; i++){
            cnt=0;
            for(int j=0; j<t; j++){
                if(a[i]<=a[j]) cnt+=a[j]-a[i];
                else cnt+=ss[0].length()-(a[i]-a[j]);
            }
            mn=Math.min(mn, cnt);
        }
        System.out.println(mn);
    }
    
    public static int cal(String t, String s){
        if(s.equals(t)) return 0;
        for(int i=0; i<s.length()-1; i++){
            s=s.substring(1)+s.substring(0, 1);
            if(s.equals(t)){
                return i+1;
            }
        }
        return -1;
    }
}
