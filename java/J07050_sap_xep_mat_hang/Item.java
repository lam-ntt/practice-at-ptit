/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07050_sap_xep_mat_hang;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Item {
    private static int cnt=1;
    
    private String code, name, kind;
    private float iprice, eprice, profit;
    
    public Item(Scanner sc) {
        code=format("MH%02d", cnt++);
        name=sc.nextLine();
        kind=sc.nextLine();
        iprice=sc.nextFloat();
        eprice=sc.nextFloat();
    }

    public float getProfit() {
        return profit;
    }
    
    public void cal(){
        profit=eprice-iprice;
    }
    
    public String toString(){
        return code+" "+name+" "+kind+" "+format("%.2f", profit);
    }
    
}
