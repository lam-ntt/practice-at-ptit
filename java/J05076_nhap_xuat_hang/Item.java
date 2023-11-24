/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05076_nhap_xuat_hang;

import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Item {
    private String code, name, ratio;
    
    public Item(Scanner sc) {
        this.code=sc.nextLine();
        this.name=sc.nextLine();
        this.ratio=sc.nextLine();
    }

    public String getName() {
        return name;
    }

    public String getRatio() {
        return ratio;
    }
    
    public static Item find(List<Item> l, String code){
        for(Item i: l){
            if(i.code.equalsIgnoreCase(code)) return i;
        }
        return null;
    }
    
}
