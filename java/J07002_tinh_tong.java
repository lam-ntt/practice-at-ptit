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
public class J07002_tinh_tong {
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc=new Scanner(new File("DATA.in"));
        long sum=0, num;
        String tmp;
        while(sc.hasNext()){
            tmp=sc.next();
            try{
                num=Integer.parseInt(tmp);
                sum+=num;
            }catch(NumberFormatException e){
            }
        }
        System.out.println(sum);
    }
}
