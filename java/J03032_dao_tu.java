/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J03032_dao_tu {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        sc.nextLine();
        while(t!=0){
            String s=sc.nextLine();
            String[] ss=s.split("\\s+");
            
            for(int i=0; i<ss.length; i++){
                System.out.print(reverse(ss[i])+" ");
            }
            System.out.println();
            t--;
        }
    }
    
    public static String reverse(String s){
        String t="";
        for(int i=0; i<s.length(); i++){
            t=s.charAt(i)+t;
        }
        return t;
    }
}
