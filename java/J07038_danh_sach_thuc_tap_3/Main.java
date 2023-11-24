/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07038_danh_sach_thuc_tap_3;

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
        Scanner sc=new Scanner(new File("SINHVIEN.in"));
        List<Student> students=new ArrayList();
        int t=sc.nextInt();
        sc.nextLine();
        while(t!=0){
            Student s=new Student(sc);
            s.normalize();
            students.add(s);
            t--;
        }
        
        sc=new Scanner(new File("DN.in"));
        List<Company> companies=new ArrayList();
        t=sc.nextInt();
        while(t!=0){
            sc.nextLine();
            Company c=new Company(sc);
            companies.add(c);
            t--;
        }
        
        sc=new Scanner(new File("THUCTAP.in"));
        List<Link> link=new ArrayList();
        t=sc.nextInt();
        while(t!=0){
            String code1=sc.next(), code2=sc.next();
            link.add(new Link(Student.find(students, code1), Company.find(companies, code2)));
            t--;
        }
        
        t=sc.nextInt();
        sc.nextLine();
        while(t!=0){
            String code=sc.next();
            Company tmp=Company.find(companies, code);
            Link.list(link, tmp.getName(), tmp.getNum());
            t--;
        }
    }
}
