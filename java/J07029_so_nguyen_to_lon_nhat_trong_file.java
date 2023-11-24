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
import java.util.List;
import java.util.Map;
import java.util.TreeMap;

/**
 *
 * @author nguye
 */
public class J07029_so_nguyen_to_lon_nhat_trong_file {
    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException{
        ObjectInputStream ois=new ObjectInputStream(
                new FileInputStream("DATA.in"));
        List<Integer> l=(List<Integer>) ois.readObject();
        
        Map<Integer, Integer> mp=new TreeMap();
        for(Integer i: l){
            if(checkPrime(i)){
                if(mp.containsKey(i)) mp.replace(i, mp.get(i)+1);
                else mp.put(i, 1);
            }
        }
        
        l.clear();
        for(Integer i: mp.keySet()){
            l.add(i);
        }
        Collections.sort(l);
        for(int i=l.size()-1; i>=l.size()-10; i--){
            System.out.println(l.get(i)+" "+mp.get(l.get(i)));
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
