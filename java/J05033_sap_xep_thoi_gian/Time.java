/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05033_sap_xep_thoi_gian;

import java.util.Scanner;

/**
 *
 * @author nguye
 */
class Time implements Comparable<Time>{
    private int h, m, s;
    
    public Time(Scanner sc){
        h=sc.nextInt();
        m=sc.nextInt();
        s=sc.nextInt();
    }
    
    @Override
    public int compareTo(Time other){
        int ss=(h*60+m)*60+s;
        int sso=(other.h*60+other.m)*60+other.s;
        if(ss>sso) return 1;
        else return -1;
    }
    
    @Override
    public String toString(){
        return h+" "+m+" "+s;
    }
}
