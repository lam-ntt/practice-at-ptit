/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05082_danh_sach_khach_hang;

import static java.lang.String.format;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Client implements Comparable<Client>{
    private static int cnt=1;
    private String code, name, sex, birth, addr;
    
    public Client(Scanner sc) {
        this.code=format("KH%03d", cnt++);
        this.name=sc.nextLine();
        this.sex=sc.nextLine();
        this.birth=sc.nextLine();
        this.addr=sc.nextLine(); 
    }
    
    public void normalize(){
        String[] tmp=this.name.toLowerCase().trim().split("\\s+");
        this.name="";
        for(int i=0; i<tmp.length; i++){
            tmp[i]=tmp[i].substring(0, 1).toUpperCase()+tmp[i].substring(1);
            this.name+=tmp[i];
            if(i!=tmp.length-1) this.name+=' ';
        }
        
        if(this.birth.charAt(2)!='/') this.birth="0"+this.birth;
        if(this.birth.charAt(5)!='/') this.birth=this.birth.substring(0, 3)+"0"+this.birth.substring(3);
    }
    
    public String getBirth(){
        String tmp=this.birth.substring(this.birth.length()-4);
        tmp+=this.birth.substring(3, 5);
        tmp+=this.birth.substring(0, 2);
        return tmp;
    }
    
    public int compareTo(Client other){
        return this.getBirth().compareTo(other.getBirth());
    }
    
    public String toString(){
        return this.code+" "+this.name+" "+this.sex+" "+this.addr+" "+this.birth;
    }
    
}
