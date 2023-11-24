/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07037_danh_sach_doanh_nghiep;

import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Company {
    private String code, name;
    private int num;
    
    public Company(Scanner sc) {
        code=sc.nextLine();
        name=sc.nextLine();
        num=sc.nextInt();
    }

    public String getCode() {
        return code;
    }
    
    public String toString(){
        return code+" "+name+" "+num;
    }
    
}
