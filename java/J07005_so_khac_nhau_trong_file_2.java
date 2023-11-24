/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.io.DataInputStream;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;

/**
 *
 * @author nguye
 */
public class J07005_so_khac_nhau_trong_file_2 {
    public static void main(String[] args) throws FileNotFoundException, IOException {
        DataInputStream dis=new DataInputStream(
                new FileInputStream("DATA.IN"));
        int[] a=new int[1000];
        for(int i=0; i<100000; i++){
            a[dis.readInt()]++;
        }
        for(int i=0; i<1000; i++){
            if(a[i]!=0) System.out.println(i+" "+a[i]);
        }
        dis.close();
    }
}
