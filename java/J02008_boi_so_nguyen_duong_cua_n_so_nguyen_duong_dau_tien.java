/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J02008_boi_so_nguyen_duong_cua_n_so_nguyen_duong_dau_tien {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            long n=sc.nextInt();
            long res=1;
            for(int i=2; i<=n; i++){
                if(check(i))  res*=Math.pow(i, (int)(Math.log(n)/Math.log(i)));
            }
            System.out.println(res);
            t--;
        }
    }
    
    public static boolean check(int n){
        if(n<2) return false;
        for(int i=2; i<=Math.sqrt(n); i++){
            if(n%i==0) return false;
        }
        return true;
    }
    
}
