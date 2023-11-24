/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05056_xep_hang_van_dong_vien_2;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Athlete implements Comparable<Athlete>{
    private static int cnt=0;
    
    private String code, name, birth, fi, se, real, bonus, sreal;
    private int rank;
    
    public Athlete(Scanner sc) {
        code=format("VDV%02d", ++cnt);
        name=sc.nextLine();
        birth=sc.nextLine();
        fi=sc.nextLine();
        se=sc.nextLine();
    }

    public String getSreal() {
        return sreal;
    }

    public int getRank() {
        return rank;
    }

    public void setRank(int rank) {
        this.rank = rank;
    }
    
    public static int convertToNum(String time){
        int hour=Integer.parseInt(time.substring(0, 2));
        int minute=Integer.parseInt(time.substring(3, 5));
        int second=Integer.parseInt(time.substring(6));
        int res=hour*3600+minute*60+second;
        return res;
    }
    
    public static String convertToDate(int time){
        String res="";
        res+=format("%02d:", time/3600);
        time%=3600;
        res+=format("%02d:", time/60);
        time%=60;
        res+=format("%02d", time);
        return res;
    }
    
    public void cal() {
        real=convertToDate(convertToNum(se)-convertToNum(fi));
        int age=2021-Integer.parseInt(birth.substring(6));
        if(age>=32) bonus="00:00:03";
        else if(age>=25) bonus="00:00:02";
        else if(age>=18) bonus="00:00:01";
        else bonus="00:00:00";
        sreal=convertToDate(convertToNum(real)-convertToNum(bonus));
        
    }
    
    @Override
    public int compareTo(Athlete other){
        return Integer.compare(convertToNum(getSreal()), convertToNum(other.getSreal()));
    }
    
    @Override
    public String toString(){
        return code+" "+name+" "+real+" "+bonus+" "+sreal+" "+rank;
    }
}
