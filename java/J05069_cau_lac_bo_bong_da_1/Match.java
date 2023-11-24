/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J05069_cau_lac_bo_bong_da_1;

import java.util.Scanner;

/**
 *
 * @author nguye
 */
public class Match {
    private String code;
    private int num;
    
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
    
    public String toString(){
        return this.code;
    }
}
