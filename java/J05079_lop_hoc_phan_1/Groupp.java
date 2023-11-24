/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05079_lop_hoc_phan_1;

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
    private static Map<String, String> mp=new HashMap();
    private String code, name, cluster, lecturer;
    
    public Groupp(Scanner sc){
        this.code=sc.nextLine();
        this.name=sc.nextLine();
        if(!mp.containsValue(code)) mp.put(code, name);
        this.cluster=sc.nextLine();
        this.lecturer=sc.nextLine();
    }
    
    public static void find(List<Groupp> l, String code){
        List<Groupp> ll=new ArrayList();
        System.out.println("Danh sach nhom lop mon "+mp.get(code)+":");
        for(Groupp g: l){
            if(g.code.equals(code)) ll.add(g);
        }
        
        ll.sort((Groupp a, Groupp b)->{
            return a.cluster.compareTo(b.cluster);
        });
        
        for(Groupp g: ll){
            System.out.println(g);
        }
    }
    
    public String toString(){
        return this.cluster+" "+this.lecturer;
    }
}
