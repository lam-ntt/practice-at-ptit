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
public class J08022_phan_tu_ben_phai_dau_tien_lon_hon {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            int n=sc.nextInt();
            int[] a=new int[n];
            for(int i=0; i<n; i++){
                a[i]=sc.nextInt();
            }
            
            Stack<Integer> st=new Stack();
            int[] res=new int[n];
            for(int i=n-1; i>=0; i--){
                while(!st.isEmpty()&&st.peek()<=a[i]){
                    st.pop();
                }
                if(st.isEmpty()){
                    res[i]=-1;
                }else{
                    res[i]=st.peek();
                }
                st.add(a[i]);
            }
            
            for(int i=0; i<n; i++){
                System.out.print(res[i]+" ");
            }
            System.out.println();
            t--;
        }
    }
}
