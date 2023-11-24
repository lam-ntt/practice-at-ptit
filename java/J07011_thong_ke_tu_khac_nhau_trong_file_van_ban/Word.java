/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07011_thong_ke_tu_khac_nhau_trong_file_van_ban;

/**
 *
 * @author nguye
 */
public class Word {
    private String word;
    private int fre;
    
    public Word(String word, Integer fre) {
        this.word=word;
        this.fre=fre;
    }

    public String getWord() {
        return word;
    }

    public int getFre() {
        return fre;
    }
    
    public String toString(){
        return word+" "+fre;
    }
}
