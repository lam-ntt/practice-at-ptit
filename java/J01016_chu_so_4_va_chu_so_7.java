/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J01016_chu_so_4_va_chu_so_7 {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        int cnt=0;
        for(int i=0; i<s.length(); i++){
            if(s.charAt(i)=='4'||s.charAt(i)=='7') cnt+=1;
        }
        if(cnt==4||cnt==7) System.out.println("YES");
        else System.out.println("NO");
    }
}
