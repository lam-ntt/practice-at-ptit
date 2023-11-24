/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05006_danh_sach_doi_tuong_nhan_vien;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Employee {
    private static int cnt=0;
    private String code, name, sex, birth, addr, tax, date;

    public Employee(Scanner sc) {
        cnt++;
        code=format("%05d", cnt);
        name=sc.nextLine();
        sex=sc.nextLine();
        birth=sc.nextLine();
        addr=sc.nextLine();
        tax=sc.nextLine();
        date=sc.nextLine();
                
    }
    
    @Override
    public String toString(){
        return code+" "+name+" "+sex+" "+birth+" "+addr+" "+tax+" "+date;
    }
    
}
