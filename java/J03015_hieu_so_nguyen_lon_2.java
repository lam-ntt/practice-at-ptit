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
public class J03015_hieu_so_nguyen_lon_2 {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        BigInteger bi1=new BigInteger(sc.next());
        BigInteger bi2=new BigInteger(sc.next());
        String s=bi1.subtract(bi2).toString();
        System.out.println(s);
    }
}
