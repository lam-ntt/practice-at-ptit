/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

/**
 *
 * @author nguye
 */
public class J02034_bo_sung_day_so {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        Set<Integer> s=new HashSet();
        int t=sc.nextInt();
        int tmp, mx=-1;
        while(t!=0){
            tmp=sc.nextInt();
            mx=Math.max(mx, tmp);
            s.add(tmp);
            t--;
        }
        
        if(s.size()==mx) System.out.println("Excellent!");
        else{
            for(int i=1; i<mx; i++){
                if(s.contains(i)) continue;
                System.out.println(i);
            }
        }
    }
}
