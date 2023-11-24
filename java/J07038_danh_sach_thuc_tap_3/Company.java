/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07038_danh_sach_thuc_tap_3;

import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Company {
    private String code, name;
    private int num;
    
    public Company(Scanner sc) {
        this.code=sc.nextLine();
        this.name=sc.nextLine();
        this.num=sc.nextInt();
    }

    public String getName() {
        return name;
    }

    public int getNum() {
        return num;
    }
    
    public static Company find(List<Company> l, String code){
        for(Company c: l){
            if(c.code.equals(code)) return c;
        }
        return null;
    }
    
    public String toString(){
        return this.code+" "+this.name+" "+this.num;
    }
    
}
