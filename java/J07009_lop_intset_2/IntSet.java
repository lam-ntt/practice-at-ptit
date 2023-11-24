/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07009_lop_intset_2;

import java.util.Set;
import java.util.TreeSet;

/**
 *
 * @author nguye
 */
public class IntSet {
    private Set<Integer> se=new TreeSet();

    public IntSet() {
    }

    public IntSet(int[] a) {
        for(int i=0; i<a.length; i++){
            se.add(a[i]);
        }
    }
    
    public IntSet intersection(IntSet is){
        IntSet res=new IntSet();
        for(Integer i: se){
            if(is.se.contains(i)) res.se.add(i);
        }
        return res;
    }
    
    public String toString(){
        String tmp="";
        for(Integer i: se){
            tmp+=(i+" ");
        }
        return tmp;
    }
}
