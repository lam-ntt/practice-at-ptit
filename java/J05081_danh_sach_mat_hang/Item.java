/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05081_danh_sach_mat_hang;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Item implements Comparable<Item>{
    static long n=0;
    private String code, name, unit;
    private long fi_price, se_price, profit;

    public Item(Scanner sc) {
        code=gen();
        name=sc.nextLine();
        unit=sc.nextLine();
        fi_price=sc.nextLong();
        se_price=sc.nextLong();
        profit=se_price-fi_price;
    }
    
    @Override
    public int compareTo(Item other){
        if(profit!=other.profit) 
            if(profit<other.profit) return 1;
            else return -1;
        else 
            return code.compareTo(other.code);
    }
    
    
    @Override
    public String toString(){
        return code+" "+name+" "+unit+" "+fi_price+" "+se_price+" "+profit;
    }
    
    public static String gen(){
        n+=1;
        return format("MH%03d", n);
    }
    
}
