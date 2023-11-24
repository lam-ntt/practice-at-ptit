/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J03040_bien_so_dep {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        
        int t=sc.nextInt();
        while(t!=0){
            String s=sc.next();
            if(check(s)) System.out.println("YES");
            else System.out.println("NO");
            t--;
        }
    }
    
    public static boolean check(String s){
        char a=s.charAt(5), b=s.charAt(6), c=s.charAt(7),
                d=s.charAt(9), e=s.charAt(10);
        if(a<b&&b<c&&c<d&&d<e) return true;
        if(a==b&&b==c&&d==e) return true;
        
        for(int i=5; i<=10; i++){
            if(i==8) continue;
            if(s.charAt(i)!='6'&&s.charAt(i)!='8') return false;
        }
        return true;
    }
}
