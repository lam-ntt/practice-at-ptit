/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import java.util.Set;


/**
 *
 * @author nguye
 */

public class J07030_cap_so_nguyen_to_trong_file_1 {
    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException{
        ObjectInputStream o=new ObjectInputStream(
                new FileInputStream("DATA1.in"));
        List<Integer> l1=(List<Integer>) o.readObject();
        o.close();
        
        o=new ObjectInputStream(
                new FileInputStream("DATA2.in"));
        List<Integer> l2=(List<Integer>) o.readObject();
        o.close();

        
        List<Integer> l=new ArrayList();
        List<Integer> ll=new ArrayList();
        
        Set<Integer> s=new HashSet();
        for(Integer i: l1){
            if(checkPrime(i)&&!s.contains(i)){
                l.add(i);
                s.add(i);
            }
        }
        s.clear();
        for(Integer i: l2){
            if(checkPrime(i)&&!s.contains(i)){
                ll.add(i);
                s.add(i);
            }
        }
        
        Collections.sort(l);
        for(Integer i: l){
            for(Integer ii: ll){
                if(i<ii&&i+ii==1000000) System.out.println(i+" "+ii);
            }
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
