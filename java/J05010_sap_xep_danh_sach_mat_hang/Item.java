/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05010_sap_xep_danh_sach_mat_hang;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
class Item implements Comparable<Item>{
    private static int cnt=0;
    private int code;
    private String name, kind;
    private double profit;
    
    public Item(Scanner sc){
        code=++cnt;
        name=sc.nextLine();
        kind=sc.nextLine();
        profit=-sc.nextDouble()+sc.nextDouble();
    }
    
    @Override
    public int compareTo(Item other){
        if(profit<other.profit) return 1;
        return -1;
    }
    
    @Override
    public String toString(){
        return code+" "+name+" "+kind+" "+format("%.2f", profit);
    }
}
