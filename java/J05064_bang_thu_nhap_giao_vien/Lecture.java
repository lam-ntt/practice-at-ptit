/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05064_bang_thu_nhap_giao_vien;

import java.util.HashMap;
import java.util.Map;

/**
 *
 * @author nguye
 */
class Lecture {
    private static Map<String, Integer> mp=new HashMap();
    
    private String code, name;
    private long base, level, bonus, salary;
    private boolean ok=true;
    
    public Lecture(String code, String name, long base){
        this.code=code;
        this.name=name;
        this.base=base;
    }

    public boolean isOk() {
        return ok;
    }
    
    public void cal(){
        level=Integer.parseInt(code.substring(2, 4));
        String tmp=code.substring(0, 2);
        if(tmp.equals("HT")) bonus=2000000;
        else if(tmp.equals("HP")) bonus=900000;
        else if(tmp.equals("GV")) bonus=500000;
        salary=base*level+bonus;
        
        tmp=code.substring(0, 2);
        if(mp.containsKey(tmp)){
            if(tmp.equals("HT")&&mp.get(tmp)==1) ok=false;
            else if(tmp.equals("HP")&&mp.get(tmp)==2) ok=false;
            else mp.put(tmp, mp.get(tmp)+1);
        }else{
            mp.put(tmp, 1);
        }
    }
    
    @Override
    public String toString(){
        return code+" "+name+" "+level+" "+bonus+" "+salary;
    }
}
