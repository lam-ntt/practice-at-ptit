/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J01003_giai_phuong_trinh_bac_nhat {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        double a=sc.nextDouble(), b=sc.nextDouble();
        if(a==0){
            if(b==0) System.out.println("VSN");
            else System.out.print("VN");
        }else{
            System.out.printf("%.2f", -b/a);
        }
    }
}
