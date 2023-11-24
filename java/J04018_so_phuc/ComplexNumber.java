/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J04018_so_phuc;

import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class ComplexNumber {
    private long x, y;
    
    public ComplexNumber() {
    }

    public ComplexNumber(Scanner sc) {
        x=sc.nextInt();
        y=sc.nextInt();
    }
    
    @Override
    public String toString(){
        String tmp="";
        if(y<0) tmp=tmp+" - "+(-y);
        else tmp=tmp+" + "+y;
        return x+tmp+"i";
    }
    
    public static ComplexNumber sum(ComplexNumber a, ComplexNumber b){
        ComplexNumber tmp=new ComplexNumber();
        tmp.x=a.x+b.x;
        tmp.y=a.y+b.y;
        return tmp;
    }
    
    public static ComplexNumber multi(ComplexNumber a, ComplexNumber b){
        ComplexNumber tmp=new ComplexNumber();
        tmp.x=a.x*b.x-a.y*b.y;
        tmp.y=a.x*b.y+a.y*b.x;
        return tmp;
    }
    
    public static String cal(ComplexNumber a, ComplexNumber b){
        ComplexNumber tmp=sum(a, b);
        ComplexNumber c=multi(tmp, a);
        ComplexNumber d=multi(tmp, tmp);
        return c.toString()+", "+d.toString();
    }
    
}
