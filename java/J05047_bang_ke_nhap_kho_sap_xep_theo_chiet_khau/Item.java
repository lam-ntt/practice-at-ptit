/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05047_bang_ke_nhap_kho_sap_xep_theo_chiet_khau;

import static java.lang.String.format;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Item implements Comparable<Item>{
    private static Map<String, Integer> mp=new HashMap();
    private String code, name;
    private long num, per_price, discount, price;
    
    public Item(Scanner sc) {
        name=sc.nextLine();
        num=sc.nextLong();
        per_price=sc.nextLong();
        
        String[] ss=name.toUpperCase().split("\\s+");
        code=""+ss[0].charAt(0)+ss[1].charAt(0);
        if(mp.containsKey(code)) mp.put(code, mp.get(code)+1);
        else  mp.put(code, 1);
        code=code+format("%02d", mp.get(code));
    }
    
    public void cal(){
        if(num>10) discount=(long)(num*per_price*0.05);
        else if(num>=8) discount=(long)(num*per_price*0.02);
        else if(num>=5) discount=(long)(num*per_price*0.01);
        else discount=0;
        price=num*per_price-discount;
    }
    
    public int compareTo(Item other){
        if(discount<other.discount) return 1;
        return -1;
    }
    
    @Override
    public String toString(){
        return code+" "+name+" "+discount+" "+price;
    }
}
