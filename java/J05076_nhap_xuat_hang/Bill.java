/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05076_nhap_xuat_hang;

import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Bill {
    private String code;
    private Item item;
    private int exnum, imnum, exprice, im_per_price, imprice;
    
    public Bill(Scanner sc) {
        this.code=sc.next();
        this.imnum=sc.nextInt();
        this.im_per_price=sc.nextInt();
        this.exnum=sc.nextInt();
    }

    public String getCode() {
        return code;
    }

    public void setItem(Item item) {
        this.item = item;
    }
    
    public void cal(){
        this.imprice=this.imnum*this.im_per_price;
        this.exprice=this.exnum*this.im_per_price;
        if(this.item.getRatio().equals("A")) this.exprice*=1.08;
        else if(this.item.getRatio().equals("B")) this.exprice*=1.05;
        else this.exprice*=1.02;
    }
    
    @Override
    public String toString(){
        return this.code+" "+this.item.getName()+" "+this.imprice+" "+this.exprice;
    }
}
