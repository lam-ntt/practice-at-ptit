/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J07022_loai_bo_so_nguyen {
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc=new Scanner(new File("DATA.in"));
        List<String> l=new ArrayList();
        String tmp="";
        int n;
        while(sc.hasNext()){
            try{
                tmp=sc.next();
                n=Integer.parseInt(tmp);
            }catch(NumberFormatException e){
                l.add(tmp);
            }
        }
        
        Collections.sort(l);
        
        for(String i: l){
            System.out.print(i+" ");
        }
        
    }
}
