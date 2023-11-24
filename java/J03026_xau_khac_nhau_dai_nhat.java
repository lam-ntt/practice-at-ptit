/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J03026_xau_khac_nhau_dai_nhat {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            String s1=sc.next(), s2=sc.next();
            if(s1.equals(s2)) System.out.println("-1");
            else System.out.println(Math.max(s1.length(), s2.length()));
            t--;
        }
    }
}
