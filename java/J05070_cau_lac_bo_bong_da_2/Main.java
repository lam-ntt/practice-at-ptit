/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05070_cau_lac_bo_bong_da_2;

import java.util.ArrayList;
import java.util.Collections;
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
        
        List<Match> ll=new ArrayList();
        t=sc.nextInt();
        while(t!=0){
            Match m=new Match(sc);
            m.setT(Team.find(l, m.getTeamCode()));
            m.cal();
            ll.add(m);
            t--;
        }
        
        Collections.sort(ll);
        
        for(Match m: ll){
            System.out.println(m);
        }
    }
}
