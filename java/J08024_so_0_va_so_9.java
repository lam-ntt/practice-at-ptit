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
public class J08024_so_0_va_so_9 {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            int n=sc.nextInt();
            
            Queue<String> q=new LinkedList();
            q.add("9");
            while(Integer.parseInt(q.peek())%n!=0){
                q.add(q.peek()+"0");
                q.add(q.peek()+"9");
                q.remove();
            }
            System.out.println(q.peek());
            t--;
        }
    }
}
