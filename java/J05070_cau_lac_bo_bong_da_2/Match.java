/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05070_cau_lac_bo_bong_da_2;

import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Match implements Comparable<Match>{
    private String code;
    private int num, revenue;
    private Team team;
    
    public Match(Scanner sc){
        this.code=sc.next();
        this.num=sc.nextInt();
    }

    public String getCode() {
        return code;
    }
    
    public int getNum(){
        return this.num;
    }
    
    public String getTeamCode(){
        return this.code.substring(1, 3);
    }

    public void setT(Team team) {
        this.team = team;
    }

    public void cal(){
        this.revenue=this.num*this.team.getTicketprice();
    }
    
    @Override
    public int compareTo(Match other){
        return -Integer.compare(this.revenue, other.revenue);
    }
    
    @Override
    public String toString(){
        return this.code+" "+this.team.getName()+" "+this.revenue;
    }
}
