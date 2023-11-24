/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05049_liet_ke_nhap_xuat_hang_theo_nhom;

import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Item implements Comparable<Item>{
    private String name;
    private int in_num, out_num, per_price, price, tax;
    
    public Item(Scanner sc) {
        name=sc.nextLine();
        in_num=sc.nextInt();
    }
    
    public void cal(){
        if(name.startsWith("A")) out_num=(int) Math.round(in_num*0.6);
        else out_num=(int) Math.round(in_num*0.7);
        if(name.endsWith("Y")) per_price=110000;
        else per_price=135000;
        price=out_num*per_price;
        if(name.startsWith("A")){
            if(name.endsWith("Y")) tax=(int)(price*0.08);
            else tax=(int)(price*0.11);
        }else{
            if(name.endsWith("Y")) tax=(int)(price*0.17);
            else tax=(int)(price*0.22);
        }
    }
    
    public String getName(){
        return name;
    }
    
    @Override
    public int compareTo(Item other){
        if(tax<other.tax) return 1;
        return -1;
    }
    
    @Override
    public String toString(){
        return name+" "+in_num+" "+out_num+" "+per_price+" "+price+" "+tax;
    }
    
}
