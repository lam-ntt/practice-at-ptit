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
public class J03027_rut_gon_xau_ki_tu {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String s=sc.next();
        Stack<Integer> st=new Stack();
        for(int i=0; i<s.length(); i++){
            if(st.size()==0){
                st.push(i);
            }else{
                if(s.charAt(st.peek())==s.charAt(i)) st.pop();
                else st.push(i);
            }
        }
        
        String ss="";
        while(st.size()!=0){
            ss=s.charAt(st.pop())+ss;
        }
        if(ss.equals("")) System.out.println("Empty String");
        else System.out.println(ss);
    }
}
