/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package HELLOJAR_hoc_phi;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import vn.edu.ptit.Invoice;
import vn.edu.ptit.Rule;
import vn.edu.ptit.Student;
import vn.edu.ptit.Subject;

/**
 *
 * @author nguye
 */
class PaymentController {
    public static Invoice getInvoice(){
        Scanner sc=new Scanner(System.in);
        
        Student s=new Student(sc.nextLine(), sc.nextLine());
        
        List<Subject> l=new ArrayList();
        int t=sc.nextInt(), cnt=0;
        String name, code;
        while(t!=0){
            sc.nextLine();
            code=sc.nextLine();
            name=sc.nextLine();
            Subject su=new Subject(name, code, sc.nextInt());
            cnt+=su.getCredit();
            l.add(su);
            t--;
        }
        
        sc.nextLine();
        Rule r=new Rule(sc.nextLine(), sc.nextLine(), sc.nextDouble());
        double price=r.getCreditPrice();
        
        Invoice i=new Invoice(r);
        i.setSt(s);
        i.setAlSubject((ArrayList<Subject>) l);
        i.setAmount(cnt*price);
        return i;
    }
}
