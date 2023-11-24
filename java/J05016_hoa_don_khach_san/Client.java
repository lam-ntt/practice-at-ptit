/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05016_hoa_don_khach_san;

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
    
    private String code, name, room, in, out;
    private int num, price, other;
    
    SimpleDateFormat sfd=new SimpleDateFormat("dd/MM/yyyy");
    
    public Client(Scanner sc) {
        code=format("KH%02d", cnt++);
        name=sc.nextLine().trim();
        room=sc.nextLine().trim();
        in=sc.nextLine().trim();
        out=sc.nextLine().trim();
        other=sc.nextInt();
    }

    public int getPrice() {
        return price;
    }
    
    public void cal() throws ParseException{
         Date d1=sfd.parse(in), d2=sfd.parse(out);
         num=(int) (Math.abs(d2.getTime()-d1.getTime())/(1000*60*60*24))+1;
         
         price=other;
         if(room.startsWith("1")) price+=num*25;
         else if(room.startsWith("2")) price+=num*34;
         else if(room.startsWith("3")) price+=num*50;
         else price+=num*80;
    }
    
    public String toString(){
        return code+" "+name+" "+room+" "+num+" "+price;
    }
    
}
