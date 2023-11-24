/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07045_loai_phong;


/**
 *
 * @author nguye
 */
public class LoaiPhong implements Comparable<LoaiPhong>{
    private String kind, name;
    private int perprice;
    private float fee;
    
    public LoaiPhong(String s) {
        String[] ss=s.split("\\s");
        kind=ss[0];
        name="";
        for(int i=1; i<ss.length-2; i++){
            name+=ss[i];
            if(i!=ss.length-3){
                name+=" ";
            }
        }
        perprice=Integer.parseInt(ss[ss.length-2]);
        fee=Float.parseFloat(ss[ss.length-1]);
    }

    public int compareTo(LoaiPhong other){
        return name.compareTo(other.name);
    }
    
    public String toString(){
        return kind+" "+name+" "+perprice+" "+fee;
    }
    
}
