/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J03030_bien_doi_a_b {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        long[] dpA=new long[s.length()], dpB=new long[s.length()];
        if(s.charAt(0)=='A'){
            dpA[0]=0;
            dpB[0]=1;
        }else{
            dpA[0]=1;
            dpB[0]=0;
        }
        
        for(int i=1; i<s.length(); i++){
            if(s.charAt(i)=='A'){
                dpA[i]=dpA[i-1];
                dpB[i]=Math.min(dpB[i-1]+1, dpA[i-1]+1);
            }else{
                dpB[i]=dpB[i-1];
                dpA[i]=Math.min(dpA[i-1]+1, dpB[i-1]+1);
            }
        }
        System.out.println(dpA[s.length()-1]);
    }
}
