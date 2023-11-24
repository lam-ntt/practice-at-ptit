/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J04015_tinh_thu_nhap_giao_vien;

/**
 *
 * @author nguye
 */
class Lecture {
    private String code, name;
    private long base, level, bonus, salary;
    
    public Lecture(String code, String name, long base){
        this.code=code;
        this.name=name;
        this.base=base;
    }
    
    public void cal(){
        level=Integer.parseInt(code.substring(2, 4));
        String tmp=code.substring(0, 2);
        if(tmp.equals("HT")) bonus=2000000;
        else if(tmp.equals("HP")) bonus=900000;
        else if(tmp.equals("GV")) bonus=500000;
        salary=base*level+bonus;
    }
    
    @Override
    public String toString(){
        return code+" "+name+" "+level+" "+bonus+" "+salary;
    }
}
