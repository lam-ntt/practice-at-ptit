/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07059_danh_sach_ca_thi;

import static java.lang.String.format;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;
import java.util.Date;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Student{
    private static int cnt=1;
    private static DateTimeFormatter dtf = DateTimeFormatter.ofPattern("dd/MM/yyyy HH:mm");
    
    private String code, date, time, room;
    private LocalDateTime ldt;
    
    public Student(Scanner sc) {
        code=format("C%03d", cnt++);
        date=sc.nextLine();
        time=sc.nextLine();
        room=sc.nextLine();
    }

    public String getCode() {
        return code;
    }

    public LocalDateTime getLdt() {
        return ldt;
    }
    
    public void cal(){
        ldt=LocalDateTime.parse(date+" "+time, dtf);
    }
    
    public void normalize(){
        if(date.charAt(1)=='/') date="0"+date;
        if(date.charAt(4)=='/') date=date.substring(0, 3)+"0"+date.substring(3);
        
        if(date.charAt(1)=='/') time="0"+time;
        if(date.length()==4) time=time.substring(0, 3)+"0"+time.substring(3);
    }
    
    public String toString(){
        return code+" "+date+" "+time+" "+room;
    }
    
}
