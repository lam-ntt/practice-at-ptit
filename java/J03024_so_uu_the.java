/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J03024_so_uu_the {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            String s=sc.next();
            if(valid(s)==false) System.out.println("INVALID");
            else{
                if(check(s)) System.out.println("YES");
                else System.out.println("NO");
            }
            t--;
        }
    }
    
    public static boolean valid(String s){
        if(s.charAt(0)=='0') return false;
        for(int i=0; i<s.length(); i++){
            if(!Character.isDigit(s.charAt(i))) return false;
        }
        return true;
    }
    
    public static boolean check(String s){
        int cnt=0;
        for(int i=0; i<s.length(); i++){
            char tmp=s.charAt(i);
            if(tmp=='0'||tmp=='2'||tmp=='4'||tmp=='6'||tmp=='8') cnt++;
            else cnt--;
        }
        if(s.length()%2==0&&cnt>0) return true;
        if(s.length()%2==1&&cnt<0) return true;
        return false;
    }
}
