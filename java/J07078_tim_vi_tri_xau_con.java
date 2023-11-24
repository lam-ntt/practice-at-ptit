/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J07078_tim_vi_tri_xau_con {
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc=new Scanner(new File("STRING.in"));
        int t=sc.nextInt();
        while(t!=0){
            String s=sc.next(), ss=sc.next();
            int tmp=s.indexOf(ss);
            int cur=0;
            while(tmp!=-1){
                System.out.print((tmp+cur+1)+" ");
                cur=tmp+cur+1;
                s=s.substring(tmp+1);
                tmp=s.indexOf(ss);
            }
            System.out.println();
            t--;
        }
    }
}