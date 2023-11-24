/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07049_tinh_ngay_hat_han_bao_hanh;

import static java.lang.String.format;
import java.text.ParseException;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Client {
    private static int cnt=1;
    
    private static DateTimeFormatter dtf=DateTimeFormatter.ofPattern("dd/MM/yyyy");
    private LocalDate d;
    
    private String code, name, addr, Icode, date, exday;
    private int num, price;
    private Item i;
    

    
    public Client(Scanner sc) {
        code=format("KH%02d", cnt++);
        name=sc.nextLine();
        addr=sc.nextLine();
        Icode=sc.nextLine();
        num=Integer.parseInt(sc.nextLine());
        date=sc.nextLine();
    }

    public String getCode() {
        return code;
    }

    public String getIcode() {
        return Icode;
    }

    public LocalDate getD() {
        return d;
    }

    public void setI(Item i) {
        this.i = i;
    }
    
    public void cal() throws ParseException{
        price=num*i.getPerprice();
        
        d=LocalDate.parse(date, dtf);
        d=d.plusMonths(i.getExnum());
        exday=d.format(dtf);
    }
    
    public String toString(){
        return code+" "+name+" "+addr+" "+Icode+" "+price+" "+exday;
    }
    
}
