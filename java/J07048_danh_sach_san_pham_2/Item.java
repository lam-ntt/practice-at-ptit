/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07048_danh_sach_san_pham_2;

import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Item {
    private String code, name;
    private int price, month;
    
    public Item(Scanner sc) {
        code=sc.nextLine();
        name=sc.nextLine();
        price=sc.nextInt();
        month=sc.nextInt();
    }

    public String getCode() {
        return code;
    }

    public int getPrice() {
        return price;
    }
    
    public String toString(){
        return code+" "+name+" "+price+" "+month;
    }
    
}
