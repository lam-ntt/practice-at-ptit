/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author nguye
 */
public class J07015_so_nguyen_to_trong_file_nhi_phan {
    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException{
        ObjectInputStream ois=new ObjectInputStream(
                new FileInputStream("SONGUYEN.in"));
        List<Integer> l=(List<Integer>) ois.readObject();
        
        int[] a=new int[10000];
        for(Integer i: l){
            if(checkPrime(i)) a[i]++;
        }
        for(int i=2; i<10000; i++){
            if(a[i]!=0) System.out.println(i+" "+a[i]);
        }
    }

    private static boolean checkPrime(Integer n) {
        if(n<2) return false;
        for(int i=2; i<=Math.sqrt(n); i++){
            if(n%i==0) return false;
        }
        return true;
    }
}
