/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J04020_lop_pair;

/**
 *
 * @author nguye
 */
class Pair<T, U>{
    private T fi;
    private U se;
    
    public Pair(T fi, U se){
        this.fi=fi;
        this.se=se;
    }
    
    public boolean isPrime(){
        return check((Integer)fi)&&check((Integer)se);
    }
    
    @Override
    public String toString(){
        return fi+" "+se;
    }
    
    public static boolean check(Integer n){
        if(n<2) return false;
        for(int i=2; i<=Math.sqrt(n); i++){
            if(n%i==0) return false;
        }
        return true;
    }
}
