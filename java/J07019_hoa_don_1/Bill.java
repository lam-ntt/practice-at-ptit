/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07019_hoa_don_1;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Bill {
    private static int cnt=1;
    
    private String code;
    private int num;
    private Item i;
    private double discount, sprice;
    
    public Bill(Scanner sc) {
        code=sc.next()+format("-%03d", cnt++);
        num=sc.nextInt();
    }

    public String getCode() {
        return code;
    }

    public void setI(Item i) {
        this.i = i;
    }
    
    public void cal(){
        if(code.charAt(2)=='1') sprice=num*i.getPerprice1();
        else sprice=num*i.getPerprice2();
        
        if(num>=150) discount=sprice*0.5;
        else if(num>=100) discount=sprice*0.3;
        else if(num>=50) discount=sprice*0.15;
        
        sprice-=discount;
    }
    
    public String toString(){
        return code+" "+i.getName()+" "+format("%.0f", discount)+" "+format("%.0f", sprice);
    }
    
}
