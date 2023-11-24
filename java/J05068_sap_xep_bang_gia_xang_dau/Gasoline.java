/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05068_sap_xep_bang_gia_xang_dau;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Gasoline implements Comparable<Gasoline>{
    private String code, mnfr;
    private long num;
    private double price, tax, sprice, ratio;
    
    public Gasoline(Scanner sc) {
        code=sc.next();
        num=sc.nextLong();
    }
    
    public void cal(){
        if(code.startsWith("X")){
            price=128000;
            ratio=0.03;
        }else if(code.startsWith("D")){
            price=11200;
            ratio=0.035;
        }else{
            price=9700;
            ratio=0.02;
        }
        
        if(code.endsWith("BP")) mnfr="British Petro";
        else if(code.endsWith("ES")) mnfr="Esso";
        else if(code.endsWith("SH")) mnfr="Shell";
        else if(code.endsWith("CA")) mnfr="Castrol";
        else if(code.endsWith("MO")) mnfr="Mobil";
        else mnfr="Trong Nuoc";
        if(mnfr.equals("Trong Nuoc")) ratio=0;
        
        tax=num*price*ratio;
        sprice=num*price+tax;
    }
    
    @Override
    public int compareTo(Gasoline other){
        return -Double.compare(sprice, other.sprice);
    }
    
    @Override
    public String toString(){
        return code+" "+mnfr+" "+format("%.0f", price)+" "+format("%.0f", tax)+" "+format("%.0f", sprice);
    }
    
}
