/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05019_luong_mua_trung_binh;

import static java.lang.String.format;
import java.util.List;

/**
 *
 * @author nguye
 */
class Location {
    private static int cnt=1;
    
    private String code, name;
    private int time, qty;
    private float avg;
    
    public Location(String name, int time, int qty){
        code=format("T%02d", cnt++);
        this.name=name;
        this.time=time;
        this.qty=qty;
    }

    public int getTime() {
        return time;
    }

    public int getQty() {
        return qty;
    }

    public void setTime(int time) {
        this.time = time;
    }

    public void setQty(int qty) {
        this.qty = qty;
    }
    
    public void cal(){
        avg=(float)qty*60/time;
    }
    
    public static Location find(List<Location> l, String name){
        for(Location lc: l){
            if(lc.name.equals(name)) return lc;
        }
        return null;
    }
    
    public String toString(){
        return code+" "+name+" "+format("%.2f", avg);
    }
}
