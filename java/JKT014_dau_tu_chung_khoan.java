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
public class JKT014_dau_tu_chung_khoan {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            int n=sc.nextInt();
            int[] a=new int[n];
            for(int i=0; i<n; i++){
                a[i]=sc.nextInt();
            }
            
            int res[]=new int[n];
            Stack<Integer> st=new Stack();
            for(int i=0; i<n; i++){
                while((!st.isEmpty())&&a[st.peek()]<=a[i]){
                    st.pop();
                }
                if(st.isEmpty()){
                    res[i]=i+1;
                }else{
                    res[i]=i-st.peek();
                }
                st.add(i);
            }
            
            for(int i=0; i<n; i++){
                System.out.print(res[i]+" ");
            }
            System.out.println();
            t--;
        }
        
    }
}
