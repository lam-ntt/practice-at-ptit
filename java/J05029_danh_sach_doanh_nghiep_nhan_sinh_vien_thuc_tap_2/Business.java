/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05029_danh_sach_doanh_nghiep_nhan_sinh_vien_thuc_tap_2;

import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
class Business implements Comparable<Business>{
    private String code, name;
    private int num;
    
    public Business(Scanner sc){
        code=sc.nextLine();
        name=sc.nextLine();
        num=sc.nextInt();
    }
    
    @Override
    public int compareTo(Business other){
        if(num!=other.num){
            if(num<other.num) return 1;
            return -1;
        }
        return code.compareTo(other.code);
    }
    
    public static void find(List<Business> l, int fi, int se){
        System.out.println("DANH SACH DOANH NGHIEP NHAN TU "+fi+" DEN "+se+" SINH VIEN:");
        for(Business b: l){
            if(b.num>=fi&&b.num<=se) System.out.println(b);
        }
    }
    
    @Override
    public String toString(){
        return code+" "+name+" "+num;
    }
}
