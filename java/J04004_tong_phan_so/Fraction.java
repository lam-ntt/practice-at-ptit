/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J04004_tong_phan_so;

import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Fraction {
    private long x, y;
    
    public Fraction(Scanner sc){
        x=sc.nextLong();
        y=sc.nextLong();
    }
    
    public void sum(Fraction other){
        long new_x=x*other.y+y*other.x;
        long new_y=y*other.y;
        x=new_x;
        y=new_y;
    }
    public void minimize(){
        long uc=gcd(x,y);
        x/=uc;
        y/=uc;
    }
    
    @Override
    public String toString(){
        return x+"/"+y;
    }
    
    public static long gcd(long a, long b){
        long tmp;
        if(a<b){
            tmp=a;
            a=b;
            b=tmp;
        }
        while(b!=0){
            tmp=a;
            a=b;
            b=tmp%b;
        }
        return a;
    }
}
