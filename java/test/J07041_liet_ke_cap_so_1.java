/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package test;

import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.Collections;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

/**
 *
 * @author nguye
 */
public class J07041_liet_ke_cap_so_1 {
    public static void main(String[] args) throws IOException, ClassNotFoundException{ 
        ObjectInputStream o=new ObjectInputStream(
                new FileInputStream("DATA.in"));
        List<Pair> l=(List<Pair>) o.readObject();
        o.close();
        
        Collections.sort(l);
        
        Set<String> s=new HashSet();
        for(Pair p: l){
            if(p.getFirst()<p.getSecond()&&!s.contains(p.toString())){
                System.out.println(p);
                s.add(p.toString());
            }
        }
    }
}
