/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J04014_tinh_toan_phan_so;

import java.util.Scanner;

/**
 *
 * @author nguye
 */
class Fraction {
    private long x, y;
    
    public Fraction(Scanner sc){
        x=sc.nextLong();
        y=sc.nextLong();
    }
    
    public Fraction(long x, long y){
        this.x=x;
        this.y=y;
    }
    
    public Fraction simplize(){
        long tmp=gcd(x, y);
        x/=tmp;
        y/=tmp;
        return this;
    }
    
    public static Fraction cal1(Fraction a, Fraction b){
        long new_x=(long)Math.pow(a.x*b.y+a.y*b.x, 2);
        long new_y=(long)Math.pow(a.y*b.y, 2);
        return (new Fraction(new_x, new_y)).simplize();
    }
    
    public static Fraction cal2(Fraction a, Fraction b, Fraction c){
        long new_x=a.x*b.x*c.x;
        long new_y=a.y*b.y*c.y;
        return (new Fraction(new_x, new_y)).simplize();
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
