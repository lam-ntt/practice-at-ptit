/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05071_tinh_cuoc_dien_thoai_co_dinh_1;

import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Region {
    private String code, name;
    private int per_price;
    
    public Region(Scanner sc) {
        code=sc.nextLine();
        name=sc.nextLine();
        per_price=sc.nextInt();
    }

    public String getName() {
        return name;
    }

    public int getPer_price() {
        return per_price;
    }
    
    public static Region find(List<Region> l, String code){
        for(Region r: l){
            if(r.code.equals(code)) return r;
        }
        return null;
    }
    
}
