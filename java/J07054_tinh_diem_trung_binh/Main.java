/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07054_tinh_diem_trung_binh;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Main {
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc=new Scanner(new File("BANGDIEM.in"));
        List<Student> l=new ArrayList();
        int t=sc.nextInt(), tt=t;
        while(t!=0){
            sc.nextLine();
            Student s=new Student(sc);
            s.normalize();
            l.add(s);
            t--;
        }
        
        l.sort((Student a, Student b)->{
            if(a.getScore()==b.getScore()){
                return a.getCode().compareTo(b.getCode());
            }
            return -Float.compare(a.getScore(), b.getScore());
        });
        
        float cur=-1;
        for(int i=0; i<tt; i++){
            if(cur!=-1&&l.get(i).getScore()==cur) l.get(i).setRank(l.get(i-1).getRank());
            else l.get(i).setRank(i+1);
            cur=l.get(i).getScore();
        }
        
        for(Student s: l){
            System.out.println(s);
        }
    }
}
