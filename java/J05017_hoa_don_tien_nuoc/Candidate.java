/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05017_hoa_don_tien_nuoc;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Candidate {
    private static int cnt=1;
    
    private String code, name;
    private int num;
    private float price;
    
    public Candidate(Scanner sc) {
        code=format("KH%02d", cnt++);
        name=sc.nextLine();
        num=-sc.nextInt()+sc.nextInt();
    }

    public float getPrice() {
        return price;
    }
    
    public void cal(){
        if(num>100){
            price=(num-100)*200+50*150+50*100;
            price*=1.05;
        }else if(num>50){
            price=(num-50)*150+50*100;
            price*=1.03;
        }else{
            price=(float) (num*100*1.02);
        }
    }
    
    public String toString(){
        return code+" "+name+" "+format("%.0f", price);
    }
    
}
