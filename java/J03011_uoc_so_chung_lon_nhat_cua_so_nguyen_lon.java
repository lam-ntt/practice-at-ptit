/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.math.BigInteger;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J03011_uoc_so_chung_lon_nhat_cua_so_nguyen_lon {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            BigInteger bi1=new BigInteger(sc.next());
            BigInteger bi2=new BigInteger(sc.next());
            System.out.println(bi1.gcd(bi2));
            t--;
        }
    }
}
