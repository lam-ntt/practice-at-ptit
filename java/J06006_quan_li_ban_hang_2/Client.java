/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J06006_quan_li_ban_hang_2;

import static java.lang.String.format;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Client {
    private static int cnt=1;
    private String code, name, sex, birth, addr;
    
    public Client(Scanner sc) {
        code=format("KH%03d", cnt++);
        name=sc.nextLine();
        sex=sc.nextLine();
        birth=sc.nextLine();
        addr=sc.nextLine();
    }

    public String getCode() {
        return code;
    }

    public String getName() {
        return name;
    }

    public String getSex() {
        return sex;
    }

    public String getBirth() {
        return birth;
    }

    public String getAddr() {
        return addr;
    }
    
    public static Client find(List<Client> l, String code){
        for(Client c: l){
            if(c.code.equals(code)) return c;
        }
        return null;
    }
    
}
