/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07049_tinh_ngay_hat_han_bao_hanh;

import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Item {
    private String code, name;
    private int perprice, exnum;
    
    public Item(Scanner sc) {
        code=sc.nextLine();
        name=sc.nextLine();
        perprice=sc.nextInt();
        exnum=sc.nextInt();
    }

    public String getCode() {
        return code;
    }

    public String getName() {
        return name;
    }

    public int getPerprice() {
        return perprice;
    }

    public int getExnum() {
        return exnum;
    }
    
    public static Item find(List<Item> l, String code){
        for(Item i: l){
            if(i.code.equals(code)) return i;
        }
        return null;
    }
    
}
