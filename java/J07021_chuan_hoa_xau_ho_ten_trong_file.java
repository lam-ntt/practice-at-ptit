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
public class J07021_chuan_hoa_xau_ho_ten_trong_file {
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc=new Scanner(new File("DATA.in"));
        while(sc.hasNext()){
            String res=sc.nextLine().trim();
            if(res.equals("END")) break;
            
            String[] ss=res.toLowerCase().split("\\s+");
            res="";
            for(String i: ss){
                i=i.substring(0, 1).toUpperCase()+i.substring(1);
                res+=(i+" ");
            }
            System.out.println(res);
        }
    }
}
