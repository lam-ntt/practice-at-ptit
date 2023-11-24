/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07072_chuan_hoa_va_sap_xep;

/**
 *
 * @author nguye
 */
public class Name implements Comparable<Name>{
    private String name, fn, ln, mn;
    
    public Name(String name) {
        this.name=name;
    }
    
    public void split(){
        String[] ss=name.trim().toLowerCase().split("\\s+");
        fn=ss[0].substring(0, 1).toUpperCase()+ss[0].substring(1);
        mn="";
        for(int i=1; i<ss.length-1; i++){
            mn+=ss[i].substring(0, 1).toUpperCase()+ss[i].substring(1);
            mn+=" ";
        }
        ln=ss[ss.length-1].substring(0, 1).toUpperCase()+ss[ss.length-1].substring(1);
    }
    
    public int compareTo(Name other){
        if(ln.equals(other.ln)){
            if(fn.equals(other.fn)){
                return mn.compareTo(other.mn);
            }
            return fn.compareTo(other.fn);
        }
        return ln.compareTo(other.ln);
    }
    
    public String toString(){
        return fn+" "+mn+ln;
    }
    
}
