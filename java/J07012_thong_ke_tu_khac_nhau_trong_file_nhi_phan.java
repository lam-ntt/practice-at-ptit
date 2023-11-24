/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

/**
 *
 * @author nguye
 */

class Pair{
    public String s;
    public int fre;

    public Pair(String s, int fre) {
        this.s = s;
        this.fre = fre;
    }
    
    public String toString(){
        return s+" "+fre;
    }
}

public class J07012_thong_ke_tu_khac_nhau_trong_file_nhi_phan {
    public static void main(String[] args) throws IOException, FileNotFoundException, ClassNotFoundException{
        ObjectInputStream o=new ObjectInputStream(
                new FileInputStream("DATA.in"));
        List<String> l=(List<String>) o.readObject();
        o.close();
        
        Map<String, Integer> mp=new HashMap();
        for(String s: l){
            if(s.equals("")) continue;
            String[] ss=s.toLowerCase().trim().split("[^a-z0-9]");
            
            for(String i: ss){
                if(i.equals("")) continue;
                if(mp.containsKey(i)){
                    mp.replace(i, mp.get(i)+1);
                }else{
                    mp.put(i, 1);
                }
            }
        }
        
        List<Pair> ll=new ArrayList();
        for(String s: mp.keySet()){
            ll.add(new Pair(s, mp.get(s)));
        }
        
        ll.sort((Pair a, Pair b)->{
            if(a.fre==b.fre){
                return a.s.compareTo(b.s);
            }else{
                return -Integer.compare(a.fre, b.fre);
            }
        });
        
        for(Pair p: ll){
            System.out.println(p);
        }
    }
}
