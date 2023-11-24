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
public class J08026_bien_doi_s_t {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            int n=sc.nextInt(), m=sc.nextInt();
            
            int[] mark=new int[10001];
            
            Queue<Integer> q=new LinkedList();
            q.add(n);
            q.add(-1);
            int cnt=0;
            mark[n]=1;
            while(q.peek()!=m){
                int tmp=q.peek();
                if(tmp==-1){
                    ++cnt;
                    q.add(q.remove());
                }else{
                    if(tmp>0&&mark[tmp-1]==0){
                        q.add(tmp-1);
                        mark[tmp-1]=1;
                    }
                    if(tmp<Math.min(m, 5000)&&mark[tmp*2]==0){
                        q.add(tmp*2);
                        mark[tmp*2]=1;
                    }
                    q.remove();
                }
            }
            System.out.println(cnt);
            
            t--;
        }
    }
} 
