/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J04019_lop_triangle_1;


/**
 *
 * @author nguye
 */
class Triangle {
    private Point a, b, c;
    
    public Triangle(Point a, Point b, Point c){
        this.a=a;
        this.b=b;
        this.c=c;
    }
    
    public boolean valid(){
        return a.val(b, c);
    }
    
    public String getPerimeter(){
        return a.getPer(b, c);
    }
}
