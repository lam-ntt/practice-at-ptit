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
public class J02017_thu_gon_day_so {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        int n;
        Stack<Integer> s=new Stack();
        for(int i=0; i<t; i++){
            n=sc.nextInt();
            if(s.empty()){
                s.add(n);
            }else{
                if((n+s.peek())%2==0){
                    s.pop();
                }else{
                    s.add(n);
                }
            }
        }
        System.out.print(s.size());
    }
}
