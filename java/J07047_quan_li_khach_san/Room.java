/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07047_quan_li_khach_san;

import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Room {
    private String code;
    private double perprice, fee;
    
    public Room(Scanner sc) {
        String[] tmp=sc.nextLine().split("\\s+");
        code=tmp[0];
        perprice=Double.parseDouble(tmp[tmp.length-2]);
        fee=Double.parseDouble(tmp[tmp.length-1]);
    }

    public double getPerprice() {
        return perprice;
    }

    public double getFee() {
        return fee;
    }
    
    public static Room find(List<Room> l, String code){
        for(Room r: l){
            if(r.code.equals(code)) return r;
        }
        return null;
    }
}
