/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Scanner;
import java.util.Set;

/**
 *
 * @author nguye
 */
public class J07040_liet_ke_theo_thu_tu_xuat_hien {
    public static void main(String[] args) throws IOException, ClassNotFoundException{
        List<String> l;
        List<String> l1=new ArrayList(), l2=new ArrayList();
        
        ObjectInputStream o=new ObjectInputStream(
                new FileInputStream("NHIPHAN.in"));
        l=(List<String>) o.readObject();
        o.close();
        
        for(String i: l){
            String[] ss=i.toLowerCase().trim().split("\\s+");
            for(String j: ss){
                l1.add(j);
            }
        }
        
        Scanner sc=new Scanner(new File("VANBAN.in"));
        while(sc.hasNext()){
            String s=sc.nextLine();
            String[] ss=s.toLowerCase().trim().split("\\s+");
            for(String i: ss){
                l2.add(i);
            }
        }
        
        Set<String> s=new HashSet();
        for(String i: l2){
            if(l1.contains(i)&&!s.contains(i)){
                System.out.println(i);
                s.add(i);
            }
        } 
    }
}
