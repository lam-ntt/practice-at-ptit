/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07072_chuan_hoa_va_sap_xep;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Main {
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc=new Scanner(new File("DANHSACH.in"));
        List<Name> l=new ArrayList();
        while(sc.hasNext()){
            Name n=new Name(sc.nextLine());
            n.split();
            l.add(n);
        }
        
        Collections.sort(l);
        
        for(Name n: l){
            System.out.println(n);
        }
    }
}
