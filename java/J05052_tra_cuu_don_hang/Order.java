/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05052_tra_cuu_don_hang;

import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Order {
    private String name, code;
    private int per_price, num, discount, price;
    
    public Order(Scanner sc) {
        name=sc.nextLine();
        code=sc.nextLine();
        per_price=sc.nextInt();
        num=sc.nextInt();
    }
    
    public void cal(){
        if(code.endsWith("1")) discount=(int) Math.ceil(num*per_price*0.5);
        else discount=(int) Math.ceil(num*per_price*0.3);
        price=num*per_price-discount;
    }
    
    public String toString(){
        return name+" "+code+" "+code.substring(1, 4)+" "+discount+" "+price;
    }
    
}
