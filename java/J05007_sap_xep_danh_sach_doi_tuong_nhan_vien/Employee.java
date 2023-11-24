/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05007_sap_xep_danh_sach_doi_tuong_nhan_vien;

import static java.lang.String.format;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Employee implements Comparable<Employee>{
    private static int cnt=0;
    private String code, name, sex, birth, addr, tax, date;
    private SimpleDateFormat sdf=new SimpleDateFormat("dd/mm/yyyy");
    private Date d;

    public Employee(Scanner sc) throws ParseException {
        cnt++;
        code=format("%05d", cnt);
        name=sc.nextLine();
        sex=sc.nextLine();
        birth=sc.nextLine();
        addr=sc.nextLine();
        tax=sc.nextLine();
        date=sc.nextLine();
         
        d=sdf.parse(birth);
    }
    
    @Override
    public int compareTo(Employee other){
        if(d.after(other.d)) return 1;
        return -1;
    }
    
    @Override
    public String toString(){
        return code+" "+name+" "+sex+" "+birth+" "+addr+" "+tax+" "+date;
    }
    
}
