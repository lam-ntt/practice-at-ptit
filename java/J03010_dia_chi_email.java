/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J03010_dia_chi_email {
    public static Map<String, Integer> mp=new HashMap();
    
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        sc.nextLine();
        while(t!=0){
            String s=sc.nextLine();
            String[] ss=s.trim().toLowerCase().split("\\s+");
            
            String name=ss[ss.length-1];
            for(int i=0; i<ss.length-1; i++){
                name+=ss[i].substring(0, 1);
            }
            
            if(mp.containsKey(name)){
                mp.replace(name, mp.get(name)+1);
                name+=(mp.get(name));
            }else{
                mp.put(name, 1);
            }
            
            System.out.println(name+"@ptit.edu.vn");
            t--;
        }
    }
}
