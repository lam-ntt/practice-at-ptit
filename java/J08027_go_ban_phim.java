/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.Scanner;
import java.util.Stack;

/**
 *
 * @author nguye
 */
public class J08027_go_ban_phim {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        Stack<Character> st1=new Stack(), st2=new Stack();
        
        for(int i=0; i<s.length(); i++){
            char c=s.charAt(i);
            if(c=='-'){
                if(!st1.isEmpty()){
                    st1.pop();
                }
            }else if(c=='<'){
                if(!st1.isEmpty()){
                    st2.add(st1.pop());
                }
            }else if(c=='>'){
                if(!st2.isEmpty()){
                    st1.add(st2.pop());
                }
            }else{
                st1.add(s.charAt(i));
            }
        }
        
        while(!st1.isEmpty()){
            st2.add(st1.pop());
        }
        while(!st2.isEmpty()){
            System.out.print(st2.pop());
        }
    }
}
