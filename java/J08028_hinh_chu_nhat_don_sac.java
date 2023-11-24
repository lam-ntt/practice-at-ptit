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
public class J08028_hinh_chu_nhat_don_sac {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int k=sc.nextInt(), n=sc.nextInt();
        int[] a=new int[n];
        for(int i=0; i<n; i++){
            a[i]=sc.nextInt();
        }
        
        long res=cal(a, n);
        for(int i=0; i<n; i++){
            a[i]=k-a[i];
        }
        res=Math.max(res, cal(a, n));
        System.out.println(res);
    }
    
    public static long cal(int[] a, int n){
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
        return res;
    }
}
