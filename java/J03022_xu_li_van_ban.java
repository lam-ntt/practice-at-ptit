/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J03022_xu_li_van_ban {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        while(sc.hasNext()){
            String s=sc.nextLine();
            String[] ss=s.split("[.|?|!]");
            
            for(int i=0; i<ss.length; i++){
                ss[i]=ss[i].replaceAll("\\.", "");
                ss[i]=ss[i].replaceAll("\\?", "");
                ss[i]=ss[i].replaceAll("\\!", "");
                
                ss[i]=ss[i].replaceAll("\\s+", " ");
                ss[i]=ss[i].replaceAll(",", ", ");
                ss[i]=ss[i].replaceAll(":", ": ");
                ss[i]=ss[i].replaceAll(",", ",");
                ss[i]=ss[i].replaceAll(" :", ":");
                ss[i]=ss[i].replaceAll("\\s+", " ");
                
                ss[i]=ss[i].trim().toLowerCase();
                if(ss[i].equals("")) continue;
                if(ss[i].length()==1){
                    System.out.println(ss[i]);
                }else{
                    ss[i]=ss[i].substring(0, 1).toUpperCase()+ss[i].substring(1);
                    System.out.println(ss[i]);
                }
            }
        }
    }
}
