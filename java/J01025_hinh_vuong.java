/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J01025_hinh_vuong {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        
        int[] a=new int[4];
        int[] b=new int[4];
        for(int i=0; i<4; i++){
            a[i]=sc.nextInt();
        }
        for(int i=0; i<4; i++){
            b[i]=sc.nextInt();
        }
        
        int res=-1;
        res=Math.max(res, Math.abs(a[0]-b[2]));
        res=Math.max(res, Math.abs(a[2]-b[0]));
        res=Math.max(res, Math.abs(a[0]-a[2]));
        res=Math.max(res, Math.abs(b[0]-b[2]));
        
        res=Math.max(res, Math.abs(a[1]-b[3]));
        res=Math.max(res, Math.abs(a[3]-b[1]));
        res=Math.max(res, Math.abs(a[1]-a[3]));
        res=Math.max(res, Math.abs(b[1]-b[3]));
        System.out.println(res*res);
    }
}
