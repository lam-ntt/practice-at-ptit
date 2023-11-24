/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05017_hoa_don_tien_nuoc;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Main {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        List<Candidate> l=new ArrayList();
        int t=sc.nextInt();
        while(t!=0){
            sc.nextLine();
            Candidate c=new Candidate(sc);
            c.cal();
            l.add(c);
            t--;
        }
        
        l.sort((Candidate a, Candidate b)->{
            return -Float.compare(a.getPrice(), b.getPrice());
        });
        
        for(Candidate c: l){
            System.out.println(c);
        }
        
    }
}