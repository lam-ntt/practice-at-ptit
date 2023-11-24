/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07060_sap_xep_lich_thi;

import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

/**
 *
 * @author nguye
 */
public class Link {
    private static DateTimeFormatter dtf=DateTimeFormatter.ofPattern("dd/MM/yyyy HH:mm");
    private LocalDateTime dt;
    
    private Subject s;
    private Period p;
    private String group, num;
    
    public Link(Subject tmp1, Period tmp2, String gcode, String num) {
        s=tmp1;
        p=tmp2;
        group=gcode;
        this.num=num;
    }

    public LocalDateTime getDt() {
        return dt;
    }
    
    public String getPcode(){
        return p.getCode();
    }
    
    public void cal(){
        dt=LocalDateTime.parse(p.getDate()+" "+p.getTime(), dtf);
    }
    
    public String toString(){
        return p.getDate()+" "+p.getTime()+" "+p.getRoom()+" "+s.getName()+" "+group+" "+num;
    }
    
}
