/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05037_tinh_gia_ban_2;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
class Item implements Comparable<Item>{
    private static int cnt=0;
    private String code, name, unit;
    private double first_price, trans_fee, retail_price, price, num;
    
    public Item(Scanner sc){
        code=format("MH%02d", ++cnt);
        name=sc.next();
        unit=sc.next();
        first_price=sc.nextLong();
        num=sc.nextLong();
        
        trans_fee=first_price*num*0.05;
        price=first_price*num*1.05;
        retail_price=Math.ceil(price*1.02/num/100)*100;
    }
    
    @Override
    public int compareTo(Item other){
        if(retail_price<other.retail_price) return 1;
        return -1;
    }
    
    @Override
    public String toString(){
        return code+" "+name+" "+unit+" "+format("%.0f", trans_fee)+" "+format("%.0f", price)+" "+format("%.0f", retail_price);
    }
}
