/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J02014_diem_can_bang {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            int n=sc.nextInt();
            int[] a=new int[n];
            int left_sum=0, right_sum=0;
            for(int i=0; i<n; i++){
                a[i]=sc.nextInt();
                if(i!=0) right_sum+=a[i];
            }
            
            int ok=0;
            for(int i=0; i<n; i++){
                if(left_sum==right_sum){
                    System.out.println(i+1);
                    ok=1;
                    break;
                }
                if(i==n-1) break;
                left_sum+=a[i];
                right_sum-=a[i+1];
            }
            if(ok==0){
                System.out.println("-1");
            }
            t--;
        }
    }
}
