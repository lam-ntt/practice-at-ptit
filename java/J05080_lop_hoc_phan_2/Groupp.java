/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05080_lop_hoc_phan_2;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Groupp {
    private String code, name, cluster, lecturer;
    
    public Groupp(Scanner sc){
        this.code=sc.nextLine();
        this.name=sc.nextLine();
        this.cluster=sc.nextLine();
        this.lecturer=sc.nextLine();
    }
    
    public static void find(List<Groupp> l, String code){
        List<Groupp> ll=new ArrayList();
        System.out.println("Danh sach cho giang vien "+code+":");
        
        for(Groupp g: l){
            if(g.lecturer.equals(code)) ll.add(g);
        }
        
        ll.sort((Groupp a, Groupp b)->{
            if(a.code.compareTo(b.code)!=0){
                return a.code.compareTo(b.code);
            }else{
                return a.cluster.compareTo(b.cluster); 
            }
        });
        
        for(Groupp g: ll){
            System.out.println(g);
        }
    }
    
    public String toString(){
        return this.code+" "+this.name+" "+this.cluster;
    }
}
