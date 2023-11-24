/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J03029_chuan_hoa_cau {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        while(sc.hasNext()){
            String s=sc.nextLine();
            if(s.equals("-1")) break;
            
            for(int i=0; i<s.length(); i++){
                char c=s.charAt(i);
                if(c=='.'||c=='?'||c=='!') s=s.substring(0, i+1)+"\n"+s.substring(i+1);
            }
            
            String[] ss=s.split("[\n]");
            for(int i=0; i<ss.length; i++){
                ss[i]=ss[i].trim().toLowerCase();
                
                ss[i]=ss[i].replaceAll("\\s+\\.", ".");
                ss[i]=ss[i].replaceAll("\\s+\\?", "?");
                ss[i]=ss[i].replaceAll("\\s+\\!", "!");
                
                ss[i]=ss[i].replaceAll("\\.\\s+", ". ");
                ss[i]=ss[i].replaceAll("\\?\\s+", "? ");
                ss[i]=ss[i].replaceAll("\\!\\s+", "! ");
                
                ss[i]=ss[i].replaceAll("\\s+", " ").trim();
                
                ss[i]=ss[i].substring(0, 1).toUpperCase()+ss[i].substring(1);
                char c=ss[i].charAt(ss[i].length()-1);
                if(c!='.'&&c!='?'&&c!='!') ss[i]+=".";
                
                System.out.println(ss[i]);
            }
        }
    }
}
