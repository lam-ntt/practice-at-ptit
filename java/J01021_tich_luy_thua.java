/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J01021_tich_luy_thua {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        long mod=(long) (1e9+7);
        while(true){
            long a=sc.nextLong(), b=sc.nextLong();
            if(a==0&&b==0) break;
            if(a==0){
                System.out.println(1);
                continue;
            }
            
            long res=1;
            while(b!=0){
                if(b%2==1){
                    res*=a;
                    res%=mod;
                }
                a*=a;
                a%=mod;
                b/=2;
            }
            System.out.println(res);
        }
    }
}
