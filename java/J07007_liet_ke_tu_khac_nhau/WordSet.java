/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07007_liet_ke_tu_khac_nhau;

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
    
    public WordSet(String vanbaNin) throws FileNotFoundException {
        Scanner sc=new Scanner(new File(vanbaNin));
        
        while(sc.hasNext()){
            s.add(sc.next().toLowerCase());
        }
    }
    
    public String toString(){
        String tmp="";
        for(String i: s){
            tmp+=(i+"\n");
        }
        return tmp;
    }
}
