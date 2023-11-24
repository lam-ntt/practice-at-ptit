/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07046_danh_sach_luu_tru;

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
    
    public Client(Scanner sc) {
        code=format("KH%02d", cnt++);
        name=sc.nextLine();
        room=sc.nextLine();
        in=sc.nextLine();
        out=sc.nextLine();
    }

    public int getNum() {
        return num;
    }
    
    public void cal() throws ParseException{
        Date din=sdf.parse(in), dout=sdf.parse(out);
        num=(int) ((dout.getTime()-din.getTime())/(24*60*60*1000));
    }
    
    public String toString(){
        return code+" "+name+" "+room+" "+num;
    }
    
}
