/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J02007_dem_so_lan_xuat_hien {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt(), cnt=1;
        while(cnt<=t){
            int n=sc.nextInt();
            int[] a=new int[n];
            int[] mark=new int[100005];
            for(int i=0; i<n; i++){
                a[i]=sc.nextInt();
                mark[a[i]]++;
            }
            
            System.out.println("Test "+cnt+":");
            for(int i=0; i<n; i++){
                if(mark[a[i]]!=0){
                    System.out.println(a[i]+" xuat hien "+mark[a[i]]+" lan");
                    mark[a[i]]=0;
                }
            }
            cnt++;
        }
    }
}
