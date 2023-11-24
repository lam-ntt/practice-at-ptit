/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07047_quan_li_khach_san;

import static java.lang.String.format;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Client {
    private static int cnt=1;
    private static SimpleDateFormat sdf=new SimpleDateFormat("dd/MM/yyyy");
    
    private String code, name, room, in, out;
    private int num;
    private double price;
    private Room r;
    
    public Client(Scanner sc) {
        code=format("KH%02d", cnt++);
        name=sc.nextLine();
        room=sc.nextLine();
        in=sc.nextLine();
        out=sc.nextLine();
    }

    public String getRoom() {
        return room;
    }

    public int getNum() {
        return num;
    }

    public void setR(Room r) {
        this.r = r;
    }
    
    public void cal() throws ParseException{
        Date din=sdf.parse(in), dout=sdf.parse(out);
        num=(int) ((dout.getTime()-din.getTime())/(24*60*60*1000));
        
        price=num*r.getPerprice();
        if(num==0) price=r.getPerprice();
        if(num>30) price*=0.94;
        else if(num>=20) price*=0.96;
        else if(num>=10) price*=0.98;
        price*=(1+r.getFee());
    }
    
    public String toString(){
        return code+" "+name+" "+room+" "+num+" "+format("%.2f", price);
    }
    
}
