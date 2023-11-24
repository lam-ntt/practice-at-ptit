/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07060_sap_xep_lich_thi;

import static java.lang.String.format;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Period {
    private static int cnt=1;
    
    private String code, date, time, room;
    
    public Period(Scanner sc) {
        code=format("C%03d", cnt++);
        date=sc.nextLine();
        time=sc.nextLine();
        room=sc.nextLine();
    }

    public String getCode() {
        return code;
    }

    public String getDate() {
        return date;
    }

    public String getTime() {
        return time;
    }

    public String getRoom() {
        return room;
    }
    
    public static Period find(List<Period> l, String code){
        for(Period p: l){
            if(p.code.equals(code)) return p;
        }
        return null;
    }
    
}
