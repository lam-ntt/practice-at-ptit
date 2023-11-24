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

public class J07032_so_thuan_nghich_trong_file {
    public static List<Integer> l1, l2;
    public static int[] count=new int[1000001], mark2=new int[1000001];
    
    public static void main(String[] args) throws IOException, FileNotFoundException, ClassNotFoundException{
        ObjectInputStream o=new ObjectInputStream(
                new FileInputStream("DATA1.in"));
        l1=(List<Integer>) o.readObject();
        o.close();
        
        o=new ObjectInputStream(
                new FileInputStream("DATA2.in"));
        l2=(List<Integer>) o.readObject();
        o.close();
        
        init();
        List<Integer> l=new ArrayList();
        Set<Integer> s=new HashSet();
        for(Integer i: l1){
            if(mark2[i]==1&&!s.contains(i)&&check(i)){
                l.add(i);
                s.add(i);
            }
        }
        
        Collections.sort(l);
        
        for(int i=0; i<Math.min(l.size(), 10); i++){
            System.out.println(l.get(i)+" "+count[l.get(i)]);
        }
        
    }
    
    public static void init(){
        for(Integer i: l1){
            count[i]++;
        }
        for(Integer i: l2){
            count[i]++;
            mark2[i]=1;
        }
    }
    
    public static boolean check(int n){
        String s=n+"";
        if(s.length()%2==0||s.length()<=1) return false;
        for(int i=0; i<s.length(); i++){
            if(s.charAt(i)%2==0||s.charAt(i)!=s.charAt(s.length()-1-i)) return false;
        }
        return true;
    }
}
