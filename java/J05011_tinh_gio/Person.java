/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05011_tinh_gio;

import java.util.Scanner;

/**
 *
 * @author nguye
 */
class Person implements Comparable<Person>{
    private String code, name;
    private int time;
    
    public Person(Scanner sc){
        code=sc.nextLine();
        name=sc.nextLine();
        String a=sc.nextLine();
        String b=sc.nextLine();
        time=Integer.parseInt(b.substring(0, 2))*60+Integer.parseInt(b.substring(3));
        time-=Integer.parseInt(a.substring(0, 2))*60+Integer.parseInt(a.substring(3));
    }
    
    @Override
    public int compareTo(Person other){
        if(time<other.time) return 1;
        return -1;
    }
    
    @Override
    public String toString(){
        return code+" "+name+" "+time/60+" gio "+time%60+" phut ";
    }
}
