/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class J08025_quay_hinh_vuong {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            String s1="", s2="";
            for(int i=0; i<6; i++){
                s1+=sc.nextInt();
            }
            for(int i=0; i<6; i++){
                s2+=sc.nextInt();
            }
            
            Queue<String> q=new LinkedList();
            q.add(s1);
            q.add("-1");
            int cnt=0;
            while(!q.peek().equals(s2)){
                if(q.peek().equals("-1")){
                    cnt++;
                    q.add(q.peek());
                }else{
                    q.add(change1(q.peek()));
                    q.add(change2(q.peek()));
                }
                q.remove();
            }
            System.out.println(cnt);
            t--;
        }
    }
    
    public static String change1(String s){
        String tmp=s.charAt(3)+"";
        tmp+=s.charAt(0)+"";
        tmp+=s.charAt(2)+"";
        tmp+=s.charAt(4)+"";
        tmp+=s.charAt(1)+"";
        tmp+=s.charAt(5)+"";
        return tmp;
    }
    
    public static String change2(String s){
        String tmp=s.charAt(0)+"";
        tmp+=s.charAt(4)+"";
        tmp+=s.charAt(1)+"";
        tmp+=s.charAt(3)+"";
        tmp+=s.charAt(5)+"";
        tmp+=s.charAt(2)+"";
        return tmp;
    }
}