/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J03005_chuan_hoa_xau_ho_ten_2 {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        sc.nextLine();
        while(t!=0){
            String s=sc.nextLine();
            String[] name=s.trim().toLowerCase().split(" +");
            name[0]=name[0].toUpperCase();
            for(int i=1; i<name.length; i++){
                name[i]=name[i].substring(0, 1).toUpperCase()+name[i].substring(1);
                System.out.print(name[i]);
                if(i!=name.length-1) System.out.print(" ");
                else System.out.print(", ");
            }
            System.out.println(name[0]);
            t--;
        }
    }
}
