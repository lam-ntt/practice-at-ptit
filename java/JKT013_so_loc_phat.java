/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */


import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class JKT013_so_loc_phat {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            int n=sc.nextInt();
            
            List<Long> l=new ArrayList();
            Queue<String> q=new LinkedList();
            q.add("6");
            q.add("8");
            while(q.peek().length()<=n){
                q.add(q.peek()+"6");
                q.add(q.peek()+"8");
                l.add(Long.parseLong(q.peek()));
                q.remove();
            }
            
            Collections.sort(l);
            System.out.println(l.size());
            for(int i=l.size()-1; i>=0; i--){
                System.out.print(l.get(i)+" ");
            }
            System.out.println();
            t--;
        }
    }
}
