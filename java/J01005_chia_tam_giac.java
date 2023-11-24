/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J01005_chia_tam_giac {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            double n=sc.nextDouble(), h=sc.nextDouble();
            for(int i=1; i<n; i++){
                System.out.printf("%.6f ", Math.sqrt(i/n)*h);
            }
            System.out.println();
            t-=1;
        }
    }
}
