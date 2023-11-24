/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J03019_xau_con_lon_nhat {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        int pos=findMx(s);
        while(pos!=-1){
            for(int i=0; i<=pos; i++){
                if(s.charAt(i)==s.charAt(pos)) System.out.print(s.charAt(i));
            }
            s=s.substring(pos+1);
            pos=findMx(s);
        }
    }
    
    public static int findMx(String s){
        if(s.equals("")) return -1;
        int idx=0;
        for(int i=1; i<s.length(); i++){
            if(s.charAt(i)>=s.charAt(idx)) idx=i;
        }
        return idx;
        
    }
}
