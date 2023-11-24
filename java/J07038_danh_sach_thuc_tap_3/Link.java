/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07038_danh_sach_thuc_tap_3;

import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author nguye
 */
class Link {
    private Student s;
    private Company c;
    
    public Link(Student s, Company c){
        this.s=s;
        this.c=c;
    }
    
    public static void list(List<Link> l, String key, int limit){
        System.out.println("DANH SACH THUC TAP TAI "+key+":");
        List<Link> ll=new ArrayList();
        for(Link li: l){
            if(li.c.getName().equals(key)) ll.add(li);
        }
        
        ll.sort((Link a, Link b)->{
            return a.s.getCode().compareTo(b.s.getCode());
        });
        
        for(Link li: ll){
            if(limit!=0){
                System.out.println(li.s);
                limit--;
            }
        }
    }
}
