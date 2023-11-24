/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J06005_quan_li_ban_hang_1;

import static java.lang.String.format;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Item {
    private static int cnt=1;
    
    private String code, name, unit;
    private long price1, price2;
    
    public Item(Scanner sc) {
        code=format("MH%03d", cnt++);
        name=sc.nextLine();
        unit=sc.nextLine();
        price1=sc.nextLong();
        price2=sc.nextLong();
    }

    public String getCode() {
        return code;
    }

    public String getName() {
        return name;
    }

    public String getUnit() {
        return unit;
    }

    public long getPrice1() {
        return price1;
    }

    public long getPrice2() {
        return price2;
    }
    
    public static Item find(List<Item> l, String code){
        for(Item i: l){
            if(i.code.equals(code)) return i;
        }
        return null;
    }
    
}
