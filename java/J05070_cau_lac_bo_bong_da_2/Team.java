/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05070_cau_lac_bo_bong_da_2;

import java.util.List;
import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Team {
    private String code, name;
    private int ticket_price;
    
    public Team(Scanner sc){
        this.code=sc.nextLine();
        this.name=sc.nextLine();
        this.ticket_price=sc.nextInt();
    }

    public String getName() {
        return name;
    }
    
    public int getTicketprice(){
        return this.ticket_price;
    }
    
    public static Team find(List<Team> l, String code){
        for(Team t: l){
            if(t.code.equalsIgnoreCase(code)) return t;
        }
        return null;
    }
    
    public String toString(){
        return this.name;
    }
}
