/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J04021_lop_intset;

import java.util.Arrays;
import java.util.HashSet;
import java.util.Set;

/**
 *
 * @author nguye
 */
class IntSet {
    private Set<Integer> s;
    
    public IntSet(int[] s){
        this.s=new HashSet();
        for(int i=0; i<s.length; i++){
            this.s.add(s[i]);
        }
    }
    
    public IntSet union(IntSet other){
        s.addAll(other.s);
        return this;
    }
    
    @Override
    public String toString(){
        Object[] a=s.toArray();
        Arrays.sort(a);
        String tmp="";
        for(Object i: a){
            tmp=tmp+i+" ";
        }
        return tmp;
    }
}
