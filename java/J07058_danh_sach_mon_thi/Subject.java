/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07058_danh_sach_mon_thi;

/**
 *
 * @author nguye
 */
class Subject {
    private String code, name, kind;
    
    public Subject(String code, String name, String kind){
        this.code=code;
        this.name=name;
        this.kind=kind;
    }
    
    public String getCode(){
        return code;
    }
    
    @Override
    public String toString(){
        return code+" "+name+" "+kind;
    }
}
