/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05073_tinh_toan_gia_ban;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Item {
    private String code;
    private float per_price, num, price, tax, trans_fee;
    
    public Item(Scanner sc) {
        code=sc.next();
        per_price=sc.nextFloat();
        num=sc.nextFloat();
    }
    
    public void cal(){
        price=num*per_price;
        
        if(code.startsWith("T")){
            tax=(float) (price*0.29);
            trans_fee=(float) (price*0.04);
        }else if(code.startsWith("C")){
            tax=(float) (price*0.1);
            trans_fee=(float) (price*0.03);
        }else if(code.startsWith("D")){
            tax=(float) (price*0.08);
            trans_fee=(float) (price*0.025);
        }else{
            tax=(float) (price*0.02);
            trans_fee=(float) (price*0.005);
        }
        if(code.endsWith("C")) tax*=0.95;
        
        price=price+tax+trans_fee;
        per_price=(float) (price*1.2/num);
        
    }
    
    public String toString(){
        return code+" "+format("%.2f", per_price);
    }
    
}
