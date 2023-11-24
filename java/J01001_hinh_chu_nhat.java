/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J01001_hinh_chu_nhat {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        long a=sc.nextLong(), b=sc.nextLong();
        if(a<=0||b<=0){
            System.out.println("0");
        }else{
            System.out.println((2*(a+b))+" "+a*b);
        }
    }
}
