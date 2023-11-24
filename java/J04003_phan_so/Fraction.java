/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J04003_phan_so;

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
    
    public void normalize(){
        long tmp=gcd(this.x, this.y);
        x/=tmp;
        y/=tmp;
    }
    
    @Override
    public String toString(){
        return String.format("%d/%d", x, y);
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
