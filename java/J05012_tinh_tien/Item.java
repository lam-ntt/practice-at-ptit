/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05012_tinh_tien;

import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Item {
    private String code, name;
    private long num, per_price, discount, price, sprice;
    
    public Item(Scanner sc) {
        this.code=sc.nextLine();
        this.name=sc.nextLine();
        this.num=sc.nextLong();
        this.per_price=sc.nextLong();
        this.discount=sc.nextLong();
    }

    public long getSprice() {
        return sprice;
    }
    
    public void cal(){
        this.price=this.num*this.per_price;
        this.sprice=this.price-this.discount;
    }
    
    public String toString(){
        return this.code+" "+this.name+" "+this.num+" "+this.per_price+" "+this.discount+" "+this.sprice;    }
    
}
