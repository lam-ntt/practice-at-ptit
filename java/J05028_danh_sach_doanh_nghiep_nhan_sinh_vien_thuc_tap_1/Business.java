/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05028_danh_sach_doanh_nghiep_nhan_sinh_vien_thuc_tap_1;

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
    
    public int compareTo(Business other){
        if(num!=other.num){
            if(num<other.num) return 1;
            return -1;
        }
        return code.compareTo(other.code);
    }
    
    @Override
    public String toString(){
        return code+" "+name+" "+num;
    }
}
