/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07051_tinh_tien_phong;

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
    private SimpleDateFormat sdf=new SimpleDateFormat("dd/MM/yyyy");
    
    private String code, name, room, in, out;
    private int num, fee, price;
    
    public Client(Scanner sc) {
        code=format("KH%02d", cnt++);
        name=sc.nextLine().trim();
        room=sc.nextLine().trim();
        in=sc.nextLine();
        out=sc.nextLine();
        fee=sc.nextInt();
    }

    public int getPrice() {
        return price;
    }
    
    public void normalize(){
        String[] ss=name.toLowerCase().split("\\s+");
        name="";
        for(int i=0; i<ss.length; i++){
            ss[i]=ss[i].substring(0, 1).toUpperCase()+ss[i].substring(1);
            name+=ss[i];
            if(i!=ss.length-1) name+=" ";
        }
    }
    
    public void cal() throws ParseException{
        Date din=sdf.parse(in), dout=sdf.parse(out);
        num=(int) ((dout.getTime()-din.getTime())/(24*60*60*1000))+1;
        if(room.startsWith("1")) price=num*25;
        else if(room.startsWith("2")) price=num*34;
        else if(room.startsWith("3")) price=num*50;
        else price=num*80;
        price+=fee;
    }
    
    public String toString(){
        return code+" "+name+" "+room+" "+num+" "+price;
    }
    
}
