/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.io.File;
import java.io.FileNotFoundException;
import java.math.BigInteger;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J07003_tach_doi_va_tinh_tong {
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc=new Scanner(new File("DATA.in"));
        String s=sc.next();
        if(s.length()==1) System.out.print(s);
        else cal(s);
    }
    
    public static void cal(String s){
        if(s.length()==1) return;
        
        BigInteger bi1=new BigInteger(s.substring(0, s.length()/2));
        BigInteger bi2=new BigInteger(s.substring(s.length()/2));
        
        BigInteger bi=bi1.add(bi2);
        System.out.println(bi);
        cal(bi.toString());
    }
}