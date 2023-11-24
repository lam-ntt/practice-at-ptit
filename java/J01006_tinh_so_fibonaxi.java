/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J01006_tinh_so_fibonaxi {
    static long [] fibo=new long[100];
    
    public static void main(String[] args){
        init();
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            int n=sc.nextInt();
            System.out.println(fibo[n]);
            t-=1;
        }
    }
    
    public static void init(){
        fibo[1]=fibo[2]=1;
        for(int i=3; i<=92; i++){
            fibo[i]=fibo[i-1]+fibo[i-2];
        }
    }
}
