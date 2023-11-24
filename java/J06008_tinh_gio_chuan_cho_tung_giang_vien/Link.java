/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J06008_tinh_gio_chuan_cho_tung_giang_vien;


/**
 *
 * @author nguye
 */
class Link {
    private Lecturer l;
    private Subject s;
    private double num;
    
    public Link(Lecturer tmp, Subject tmpp, double num) {
        l=tmp;
        s=tmpp;
        this.num=num;
    }

    public String getL() {
        return l.getCode();
    }

    public String getS() {
        return s.getName()+" "+num;
    }

    public double getNum() {
        return num;
    }
        
    
}
