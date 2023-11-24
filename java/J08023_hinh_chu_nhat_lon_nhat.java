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
public class J08023_hinh_chu_nhat_lon_nhat {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            int n=sc.nextInt();
            int[] a=new int[n];
            for(int i=0; i<n; i++){
                a[i]=sc.nextInt();
            }
            
            int[] l=new int[n], r=new int[n];
            Stack<Integer> st=new Stack();
            for(int i=0; i<n; i++){
                while(!st.isEmpty()&&a[st.peek()]>=a[i]){
                    st.pop();
                }
                if(st.isEmpty()){
                    l[i]=i+1;
                }else{
                    l[i]=i-st.peek();
                }
                st.add(i);
            }
            st.clear();
            for(int i=n-1; i>=0; i--){
                while(!st.isEmpty()&&a[st.peek()]>=a[i]){
                    st.pop();
                }
                if(st.isEmpty()){
                    r[i]=n-i;
                }else{
                    r[i]=st.peek()-i;
                }
                st.add(i);
            }
            
            long res=-1;
            for(int i=0; i<n; i++){
                res=Math.max(res, (long)a[i]*(l[i]+r[i]-1));
            }
            System.out.println(res);
            t--;
        }
    }
}
