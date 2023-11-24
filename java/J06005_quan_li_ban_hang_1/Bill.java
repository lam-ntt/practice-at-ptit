/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J06005_quan_li_ban_hang_1;

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
    private long price;

    public Bill(Client c, Item i, int num) {
        code=format("HD%03d", cnt++);
        this.c=c;
        this.i=i;
        this.num=num;
    }
    
    public void cal(){
        price=num*i.getPrice2();
    }
    
    public String toString(){
        return code+" "+c.getName()+" "+c.getAddr()+" "+i.getName()+" "+i.getUnit()+" "+i.getPrice1()+" "+i.getPrice2()+" "+num+" "+price;
    }
    
}
