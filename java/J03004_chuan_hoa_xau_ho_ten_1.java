/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J03004_chuan_hoa_xau_ho_ten_1 {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        sc.nextLine();
        while(t!=0){
            String s=sc.nextLine();
            String[] name=s.trim().toLowerCase().split(" +");
            for(int i=0; i<name.length; i++){
                name[i]=name[i].substring(0, 1).toUpperCase()+name[i].substring(1);
                System.out.print(name[i]+" ");
            }
            System.out.println();
            t--;
        }
    }
}
