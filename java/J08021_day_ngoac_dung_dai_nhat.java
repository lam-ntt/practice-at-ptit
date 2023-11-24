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
public class J08021_day_ngoac_dung_dai_nhat {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            String s=sc.next();
            
            int[] mark=new int[s.length()];
            Stack<Integer> st=new Stack();
            for(int i=0; i<s.length(); i++){
                if(st.isEmpty()){
                    st.add(i);
                }else{
                    if((s.charAt(st.peek())=='('&&s.charAt(i)==')')||
                            (s.charAt(st.peek())=='{'&&s.charAt(i)=='}')||
                            (s.charAt(st.peek())=='['&&s.charAt(i)==']')){
                        mark[st.peek()]=1;
                        mark[i]=1;
                        st.pop();
                    }
                    else st.add(i);
                }
            }
            
            int res=0;
            int[] dp=new int[s.length()];
            dp[0]=mark[0];
            for(int i=1; i<s.length(); i++){
                if(mark[i]==1){
                    dp[i]=dp[i-1]+1;
                    res=Math.max(res, dp[i]);
                }
            }
            System.out.println(res);
            t--;
        }
    }
}
