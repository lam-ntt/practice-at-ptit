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
public class J03033_boi_so_chung_nho_nhat {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            BigInteger bi1=new BigInteger(sc.next());
            BigInteger bi2=new BigInteger(sc.next());
            System.out.println(bi1.multiply(bi2).divide(bi1.gcd(bi2)));
            t--;
        }
    }
}
