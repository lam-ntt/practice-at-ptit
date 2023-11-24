/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05069_cau_lac_bo_bong_da_1;

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
        List<Team> l=new ArrayList();
        int t=sc.nextInt();
        while(t!=0){
            sc.nextLine();
            Team te=new Team(sc);
            l.add(te);
            t--;
        }
        
        t=sc.nextInt();
        while(t!=0){
            Match m=new Match(sc);
            Team te=Team.find(l, m.getTeamCode());
            System.out.println(m.getCode()+" "+te.getName()+" "+m.getNum()*te.getTicketprice());
            t--;
        }
    }
}
