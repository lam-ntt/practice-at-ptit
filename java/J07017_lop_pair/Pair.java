/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07017_lop_pair;

/**
 *
 * @author nguye
 */
class Pair<T, R> {
    private T a;
    private R b;
    
    public Pair(T a, R b) {
        this.a=a;
        this.b=b;
    }
    
    public boolean isPrime(){
        return checkPrime((Integer) a)&&checkPrime((Integer) b);
    }
    
    public static boolean checkPrime(Integer n){
        if(n<2) return false;
        for(int i=2; i<=Math.sqrt(n); i++){
            if(n%i==0) return false;
        }
        return true;
    }
    
    public String toString(){
        return a+" "+b;
    }
}
