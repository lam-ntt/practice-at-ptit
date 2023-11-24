/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05036_tinh_gia_ban_1;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
class Item {
    private static int cnt=0;
    private String code, name, unit;
    private long price, num;
    
    public Item(Scanner sc){
        code=format("MH%02d", ++cnt);
        name=sc.next();
        unit=sc.next();
        price=sc.nextLong();
        num=sc.nextLong();
    }
    
    @Override
    public String toString(){
        return code+" "+name+" "+unit+" "+format("%.0f", price*num*0.05)+" "+format("%.0f", price*num*1.05)+" "+format("%.0f", price*num*1.05*1.02);
    }
}
