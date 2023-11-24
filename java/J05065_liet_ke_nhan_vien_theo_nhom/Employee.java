/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05065_liet_ke_nhan_vien_theo_nhom;

import static java.lang.String.format;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Employee {
    private static Map<String, Integer> mp=new HashMap();
    private String code, name, pos;
    private int base, num;
            
    public Employee(Scanner sc) {
        code=sc.next();
        name=sc.nextLine().trim();
    }
    
    public void cal(){
        pos=code.substring(0, 2);
        if(mp.containsKey(pos)){
            if(pos.equals("GD")){
                if(mp.get(pos)==1) pos="NV";
            }else if(pos.equals("TP")){
                if(mp.get(pos)==3) pos="NV";
            }else if(pos.equals("PP")){
                if(mp.get(pos)==3) pos="NV";
            }
            if(mp.containsKey(pos)) mp.replace(pos, mp.get(pos)+1);
            else mp.put(pos, 1);
        }else{
            mp.put(pos, 1);
        }
        
        base=Integer.parseInt(code.substring(2, 4));
        num=Integer.parseInt(code.substring(code.length()-3));
    }
    
    public static void find(List<Employee> l, String name){
        List<Employee> ll=new ArrayList();
        for(Employee e: l){
            if(e.pos.equals(name)) ll.add(e);
        }
        
        ll.sort((Employee a, Employee b)->{
            if(a.base==b.base){
                return Integer.compare(a.num, b.num);
            }else{
                return -Integer.compare(a.base, b.base);
            }
        });
        
        for(Employee e: ll){
            System.out.println(e);
        }
        System.out.println();
    }
    
    public String toString(){
        return name+" "+pos+" "+format("%03d", num)+" "+format("%02d", base);
    }
    
}
