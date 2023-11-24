/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05042_bang_xep_hang;

import java.util.Scanner;

/**
 *
 * @author nguye
 */
class Student implements Comparable<Student>{
    private String name;
    private int num_of_ex, num_of_sub;
    
    public Student(Scanner sc){
        name=sc.nextLine();
        num_of_ex=sc.nextInt();
        num_of_sub=sc.nextInt();
    }
    
    @Override
    public int compareTo(Student other){
        if(num_of_ex!=other.num_of_ex){
            if(num_of_ex<other.num_of_ex) return 1;
            return -1;
        }else if(num_of_sub!=other.num_of_sub){
            if(num_of_sub>other.num_of_sub) return 1;
            return -1;
        }else return name.compareTo(other.name);
    }
    
    @Override
    public String toString(){
        return name+" "+num_of_ex+" "+num_of_sub;
    }
}
