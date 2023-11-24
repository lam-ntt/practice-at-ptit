/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J08012_hinh_sao {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt(), a=sc.nextInt(), b=sc.nextInt();
        int cnta=1, cntb=1, tmp;
        
        for(int i=0; i<(t-2)*2; i++){
            tmp=sc.nextInt();
            if(tmp==a) cnta++;
            if(tmp==b) cntb++;
        }
        
        if(cnta==t-1||cntb==t-1) System.out.println("Yes");
        else System.out.println("No");
    }
}
