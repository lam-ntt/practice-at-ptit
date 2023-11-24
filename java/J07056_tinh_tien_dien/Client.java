/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07056_tinh_tien_dien;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Client {
    private static int cnt=1;
    
    private String code, name, type;
    private int base, num;
    private float inprice, outprice, tax, price;
    
    public Client(Scanner sc) {
        code=format("KH%02d", cnt++);
        name=sc.nextLine();
        type=sc.next();
        num=-sc.nextInt()+sc.nextInt();
    }

    public float getPrice() {
        return price;
    }
    
    public void normalize(){
        String[] ss=name.trim().toLowerCase().split("\\s+");
        name="";
        for(int i=0; i<ss.length; i++){
            ss[i]=ss[i].substring(0, 1).toUpperCase()+ss[i].substring(1);
            name+=ss[i];
            if(i!=ss.length-1) name+=" ";
        }
    }
    
    public void cal(){
        if(type.equals("A")) base=100;
        else if(type.equals("B")) base=500;
        else base=200;
        
        if(num<base) inprice=num*450;
        else inprice=base*450;
        
        if(num>base) outprice=(num-base)*1000;
        else outprice=0;
        
        tax=(float) (outprice*0.05);
        price=inprice+outprice+tax;
    }
    
    public String toString(){
        return code+" "+name+" "+format("%.0f", inprice)+" "+format("%.0f", outprice)+" "+format("%.0f", tax)+" "+format("%.0f", price);
    }
    
}
