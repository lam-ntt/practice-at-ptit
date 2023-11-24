/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J01009_tong_giai_thua {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        long sum=0, tmp=1;
        for(int i=1; i<=n; i++){
            tmp*=i;
            sum+=tmp;
        }
        System.out.println(sum);
    }
}