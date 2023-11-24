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
public class J03013_hieu_so_nguyen_lon_1 {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            BigInteger bi1=new BigInteger(sc.next());
            BigInteger bi2=new BigInteger(sc.next());
            String s;
            if(bi1.compareTo(bi2)>0){
                s=bi1.subtract(bi2).toString();
            }else{
                s=bi2.subtract(bi1).toString();
            }
            
            int len1=bi1.toString().length();
            int len2=bi2.toString().length();
            while(s.length()<Math.max(len1, len2)) s="0"+s;
            System.out.println(s);
            t--;
        }
    }
}
