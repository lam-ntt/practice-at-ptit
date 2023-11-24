/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05032_tre_nhat_gia_nhat;

import java.util.Scanner;

/**
 *
 * @author nguye
 */
class Person implements Comparable<Person>{
    private String name, birth;
    private String modify_birth;
    
    public Person(Scanner sc){
        name=sc.next();
        birth=sc.next();
        modify_birth=birth.substring(6)+birth.substring(3, 5)+birth.substring(0, 2);
    }
    
    @Override
    public int compareTo(Person other) {
        return -modify_birth.compareTo(other.modify_birth);
    }
    
    @Override
    public String toString(){
        return name;
    }
}
