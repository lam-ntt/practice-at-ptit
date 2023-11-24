/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07014_hop_va_giao_cua_hai_file_van_ban;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.Set;
import java.util.TreeSet;

/**
 *
 * @author nguye
 */
public class WordSet {
    private Set<String> s=new TreeSet();

    public WordSet() {
    }
    
    public WordSet(String name) throws FileNotFoundException {
        Scanner sc=new Scanner(new File(name));
        while(sc.hasNext()){
            s.add(sc.next().toLowerCase());
        }
    }
    
    public WordSet union(WordSet other){
        WordSet ws=new WordSet();
        ws.s.addAll(s);
        ws.s.addAll(other.s);
        return ws;
        
    }
    
    public WordSet intersection(WordSet other){
        WordSet ws=new WordSet();
        for(String i: s){
            if(other.s.contains(i)) ws.s.add(i);
        }
        return ws;
    }
    
    public String toString(){
        String tmp="";
        for(String i: s){
            tmp+=(i+" ");
        }
        return tmp;
    }
    
}
