/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05072_tinh_cuoc_dien_thoai_co_dinh_2;


/**
 *
 * @author nguye
 */
public class Call {
    private String num;
    private int time, price;
    private Region r;
    
    public Call(String num, int time, Region tmp) {
        this.num=num;
        this.time=time;
        this.r=tmp;
    }

    public int getPrice() {
        return price;
    }
    
    public void cal(){
        
        if(r!=null) price=time*r.getPer_price();
        else{
            time=(int) Math.ceil((float)time/3);
            price=time*800;
        } 
    }
    
    public String toString(){
        String tmp="";
        if(r!=null){
            return num+" "+r.getName()+" "+time+" "+price;
        }else{
            return num+" Noi mang "+time+" "+price;
        }
    }
}
