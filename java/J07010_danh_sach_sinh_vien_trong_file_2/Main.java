/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07010_danh_sach_sinh_vien_trong_file_2;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Main {
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc=new Scanner(new File("SV.in"));
        int t=sc.nextInt();
        while(t!=0){
            sc.nextLine();
            Student s=new Student(sc);
            s.normalize();
            System.out.println(s);
            t--;
        }
    }
}
