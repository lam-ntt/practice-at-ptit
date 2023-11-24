/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07058_danh_sach_mon_thi;

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
        int t=sc.nextInt();
        sc.nextLine();
        List<Subject> l=new ArrayList();
        while(t!=0){
            Subject s=new Subject(sc.nextLine(), sc.nextLine(), sc.nextLine());
            l.add(s);
            t-=1;
        }
        
        LComparator comp=new LComparator();
        l.sort(comp);
        
        for(Subject s: l){
            System.out.println(s.toString());
        }
    }
}

