/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07011_thong_ke_tu_khac_nhau_trong_file_van_ban;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Main {
    public static Map<String, Integer> mp=new HashMap();
    
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc=new Scanner(new File("VANBAN.in"));
        int t=sc.nextInt();
        sc.nextLine();
        String s, ss; 
        while(t!=0){
            s=sc.nextLine().toLowerCase().trim();
            ss="";
            for(int i=0; i<s.length(); i++){
                if(Character.isLetterOrDigit(s.charAt(i))) ss+=s.charAt(i);
                else ss+=" ";
            }
            
            String[] sss=ss.trim().split("\\s+");
            for(String i: sss){
                if(mp.containsKey(i)) mp.replace(i, mp.get(i)+1);
                else mp.put(i, 1);
            }
            t--;
        }
        
        List<Word> l=new ArrayList();
        for(String i: mp.keySet()){
            l.add(new Word(i, mp.get(i)));
        }
        
        l.sort((Word a, Word b)->{
            if(a.getFre()==b.getFre()){
                return a.getWord().compareTo(b.getWord());
            }
            return -Integer.compare(a.getFre(), b.getFre());
        });
        
        for(Word w: l){
            System.out.println(w);
        }
    }
}
