/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07025_danh_sach_khach_hang_trong_file;

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
    
    private String code, name, sex, birth, addr;
    private Date d;
    
    public Client(Scanner sc) {
        code=format("KH%03d", cnt++);
        name=sc.nextLine();
        sex=sc.nextLine();
        birth=sc.nextLine();
        addr=sc.nextLine();
    }

    public Date getD() {
        return d;
    }
    
    public void normalize(){
        String[] ss=name.trim().toLowerCase().split("\\s+");
        name="";
        for(int i=0; i<ss.length; i++){
            name+=ss[i].substring(0, 1).toUpperCase()+ss[i].substring(1);
            if(i!=ss.length-1) name+=" ";
        }
        
        if(birth.charAt(1)=='/') birth="0"+birth;
        if(birth.charAt(4)=='/') birth=birth.substring(0, 3)+"0"+birth.substring(3);
    }
    
    public void cal() throws ParseException{
        d=sdf.parse(birth);
    }
    
    public String toString(){
        return code+" "+name+" "+sex+" "+addr+" "+birth;
    }
    
}
