/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05053_sap_xep_don_hang;

import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Order implements Comparable<Order>{
    private String name, code, sub_code;
    private int per_price, num, discount, price;
    
    public Order(Scanner sc) {
        name=sc.nextLine();
        code=sc.nextLine();
        sub_code=code.substring(1, 4);
        per_price=sc.nextInt();
        num=sc.nextInt();
    }
    
    public void cal(){
        if(code.endsWith("1")) discount=(int) Math.round(num*per_price*0.5);
        else discount=(int) Math.round(num*per_price*0.3);
        price=num*per_price-discount;
    }
    
    @Override
    public int compareTo(Order other){
        return sub_code.compareTo(other.sub_code);
    }
    
    @Override
    public String toString(){
        return name+" "+code+" "+code.substring(1, 4)+" "+discount+" "+price;
    }
    
}
