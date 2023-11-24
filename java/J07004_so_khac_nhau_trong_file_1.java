/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.io.File;
import java.io.FileNotFoundException;
import java.util.Map;
import java.util.Scanner;
import java.util.TreeMap;

/**
 *
 * @author nguye
 */
public class J07004_so_khac_nhau_trong_file_1 {
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc=new Scanner(new File("DATA.in"));
        Map<Integer, Integer> mp=new TreeMap();
        int tmp;
        while(sc.hasNext()){
            tmp=Integer.parseInt(sc.next());
            if(mp.containsKey(tmp)){
                mp.replace(tmp, mp.get(tmp)+1);
            }else{
                mp.put(tmp, 1);
            }
        }
        
        for(Integer i: mp.keySet()){
            System.out.println(i+" "+mp.get(i));
        }
    }
}
