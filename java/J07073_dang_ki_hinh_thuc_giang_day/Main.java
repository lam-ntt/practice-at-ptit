/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07073_dang_ki_hinh_thuc_giang_day;

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
        Scanner sc=new Scanner(new File("MONHOC.in"));
        List<Subject> l=new ArrayList();
        int t=sc.nextInt();
        sc.nextLine();
        while(t!=0){
            Subject s=new Subject(sc);
            if(!s.getUform().equals("Truc tiep")) l.add(s);
            t--;
        }
        
        l.sort((Subject a, Subject b)->{
            return a.getCode().compareTo(b.getCode());
        });
        
        for(Subject s: l){
            System.out.println(s);
        }
    }
}
