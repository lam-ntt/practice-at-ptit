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
public class J08020_kiem_tra_day_ngoac_dung {
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
        Stack<Character> st=new Stack();
        for(int i=0; i<s.length(); i++){
            if(st.isEmpty()){
                st.add(s.charAt(i));
            }else{
                if(st.peek()=='('&&s.charAt(i)==')') st.pop();
                else if(st.peek()=='{'&&s.charAt(i)=='}') st.pop();
                else if(st.peek()=='['&&s.charAt(i)==']') st.pop();
                else st.add(s.charAt(i));
            }
        }
        return st.isEmpty();
    }
}
