/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07020_hoa_don_2;

import static java.lang.String.format;

/**
 *
 * @author nguye
 */
public class Bill {
    private static int cnt=1;
    
    private String code;
    private Client c;
    private Item i;
    private int num;
    private long price, profit;

    public Bill(Client c, Item i, int num) {
        code=format("HD%03d", cnt++);
        this.c=c;
        this.i=i;
        this.num=num;
    }
    
    public void cal(){
        price=num*i.getPrice2();
        profit=num*(i.getPrice2()-i.getPrice1());
    }
    
    public String toString(){
        return code+" "+c.getName()+" "+c.getAddr()+" "+i.getName()+" "+i.getUnit()+" "+i.getPrice1()+" "+i.getPrice2()+" "+num+" "+price;
    }
    
}
