/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05051_sap_xep_bang_tinh_tien_dien;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Client implements Comparable<Client>{
    private static int cnt=0;
    private String code, kind;
    private int factor, old_num, new_num, price, bonus, last_price;
    public Client(Scanner sc) {
        code=format("KH%02d", ++cnt);
        kind=sc.nextLine();
        old_num=sc.nextInt();
        new_num=sc.nextInt();
    }
    
    public void cal(){
        if(kind.equals("KD")) factor=3;
        else if(kind.equals("NN")) factor=5;
        else if(kind.equals("TT")) factor=4;
        else if(kind.equals("CN")) factor=2;
        price=(new_num-old_num)*550*factor;
        if((new_num-old_num)>100) bonus=price;
        else if((new_num-old_num)>=50) bonus=(int)Math.ceil(price*0.35);
        else bonus=0;
        last_price=price+bonus;
    }
    
    public int compareTo(Client other){
        if(last_price<other.last_price) return 1;
        return -1;
    }
    
    @Override
    public String toString(){
        return code+" "+factor+" "+price+" "+bonus+" "+last_price;
    }
    
}
