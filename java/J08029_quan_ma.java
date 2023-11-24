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
class Pos{
    public int a, b;

    public Pos(String s) {
        a=8-Integer.parseInt(s.substring(1, 2));
        b=s.charAt(0)-'a';
    }

    public Pos(int a, int b) {
        this.a = a;
        this.b = b;
    }
    
    public boolean equal(Pos other){
        return a==other.a&&b==other.b;
    }
}

public class J08029_quan_ma {
    public static int[] dx={-1, -2, -2, -1, 1, 2, 2, 1}, 
            dy={-2, -1, 1, 2, 2, 1, -1, -2};
    
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t!=0){
            String s1=sc.next(), s2=sc.next();
            Pos p1=new Pos(s1), p2=new Pos(s2);
            
            Queue<Pos> q=new LinkedList();
            Pos p=new Pos(-1, -1);
            q.add(p1);
            q.add(p);
            int cnt=0;
            while(!q.peek().equal(p2)){
                Pos tmp=q.peek();
                if(tmp.equal(p)){
                    ++cnt;
                    q.add(q.remove());
                }else{
                    for(int i=0; i<8; i++){
                        if(tmp.a+dx[i]>=0&&tmp.a+dx[i]<8&&
                                tmp.b+dy[i]>=0&&tmp.b+dy[i]<8){
                            q.add(new Pos(tmp.a+dx[i], tmp.b+dy[i]));
                        }
                    }
                    q.remove();
                }
            }
            System.out.println(cnt);
            t--;
        }
    }
}