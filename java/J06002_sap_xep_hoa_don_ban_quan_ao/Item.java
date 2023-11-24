/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J06002_sap_xep_hoa_don_ban_quan_ao;

import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Item {
    private String code, name;
    private double perprice1, perprice2;
    
    public Item(Scanner sc) {
        code=sc.nextLine();
        name=sc.nextLine();
        perprice1=sc.nextDouble();
        perprice2=sc.nextDouble();
    }

    public String getName() {
        return name;
    }

    public double getPerprice1() {
        return perprice1;
    }

    public double getPerprice2() {
        return perprice2;
    }
    
    public static Item find(List<Item> l, String code){
        for(Item i: l){
            if(i.code.equals(code)) return i;
        }
        return null;
    }
    
}
