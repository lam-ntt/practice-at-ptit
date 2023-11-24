/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J03028_ma_hoa_drm {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            String s=sc.next();
            String s1=s.substring(0, s.length()/2),
                    s2=s.substring(s.length()/2);
            
            String l="", r="";
            int rol=0;
            for(int i=0; i<s1.length(); i++){
                rol+=s1.charAt(i)-'A';
            }
            for(int i=0; i<s1.length(); i++){
                l+=rotate(s1.charAt(i), rol);
            }
            
            rol=0;
            for(int i=0; i<s2.length(); i++){
                rol+=s2.charAt(i)-'A';
            }
            for(int i=0; i<s2.length(); i++){
                r+=rotate(s2.charAt(i), rol);
            }
            
            String res="";
            for(int i=0; i<l.length(); i++){
                res+=rotate(l.charAt(i), r.charAt(i)-'A');
            }
            System.out.println(res);
            t--;
        }
    }
    
    public static Character rotate(Character c, int n){
        n%=26;
        if(n>'Z'-c) return (char)('A'+(n-('Z'-c))-1);
        else return (char)(c+n);
    }
}