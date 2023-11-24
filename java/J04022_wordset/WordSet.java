/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J04022_wordset;

import java.util.Set;
import java.util.TreeSet;

/**
 *
 * @author nguye
 */
public class WordSet {
    private Set<String> se=new TreeSet();

    public WordSet() {
    }
    
    public WordSet(String nextLine) {
        String[] ss=nextLine.toLowerCase().split("\\s+");
        for(int i=0; i<ss.length; i++){
            se.add(ss[i]);
        }
    }
    
    public WordSet union(WordSet ws){
        WordSet res=new WordSet();
        res.se.addAll(se);
        res.se.addAll(ws.se);
        return res;
    }
    
    public WordSet intersection(WordSet ws){
        WordSet res=new WordSet();
        for(String i: se){
            if(ws.se.contains(i)) res.se.add(i);
        }
        return res;
    }
    
    public String toString(){
        String tmp="";
        for(String i: se){
            tmp+=(i+" ");
        }
        return tmp;
    }
}
