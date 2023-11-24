/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J01026_so_chinh_phuong {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            int n=sc.nextInt();
            if(n==Math.pow((int) Math.sqrt(n), 2)) System.out.println("YES");
            else System.out.println("NO");
            t--;
        }
    }
}
