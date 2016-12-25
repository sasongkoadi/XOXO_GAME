//
//  main.cpp
//  Nested Loop
//
//  Created by Sasongko Adi on 12/19/16.
//  Copyright © 2016 Sasongko Adi. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
#include <unistd.h>
#include <term.h>
#include <iomanip>
#include <sstream>
#include <string>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    int array[10][10],var,kordinat_x,kordinat_y;
    string kordinat="x", result, angka[100][100],ulang;
    var=0;
    bool hasil[100],pemenang = false;
    
    
    /*
     cout << result;
     
     
     cout << endl << endl;
     
     
     string Text = "120";
     
     int Number;
     
     if ( ! (istringstream(Text) >> Number) ) Number = 0;
     
     cout << Number;
     
     cout << endl << endl;
     
     */
    
    
    for (int x = 0; x < 3; x ++) {
        
        for (int y = 0; y < 3; y ++) {
            
            
            var += 1;
            array[x][y]=var;
            
            ostringstream convert;
            
            convert << array[x][y];
            
            angka[x][y] = convert.str();
            
            //cout << "  " <<angka[x][y] << "  ";
            
            
            
            
        }
        
       // cout << endl<< endl;
        
    }
    
    
    /*
    cout << "Masukkan Kordinat x dan y " << endl;
    cout << "Kordinat X = "; cin >> kordinat_x;
    cout << "Kordinat Y = "; cin >> kordinat_y;
    
    
    cout << " Kordinat (" << kordinat_x << "," << kordinat_y <<") bernilai " << array[kordinat_y-1][kordinat_x-1]<< " pada Array["<<kordinat_y-1<<"]"<<"["<<kordinat_x-1<<"]"<< endl;
    
    cout << endl;
    
    cout << "---------------------------------------------" << endl << endl;
    
    
    cout << endl;
     
     */
    
    
    
    
    
    cout << "Game XOXO" << endl<<endl<<endl<<endl;
    
    
    for (int x = 0; x < 3; x ++) {
        
        for (int y = 0; y < 3; y ++) {
            
            
            cout << "  " <<angka[x][y] << "  ";
            
            
        }
        
        cout << endl<< endl;
        
    }
    

    for (int board=1; board<=4; board++) {
        
        
        
    
        
        
        cout << "PLAYER 1" << endl;
        cout << "Kordinat X = "; cin >> kordinat_x;
        cout << "Kordinat Y = "; cin >> kordinat_y;
        
        angka[kordinat_y-1][kordinat_x-1]="X";
        
        cout << endl;
        
        
        for (int x = 0; x < 3; x ++) {
            
            for (int y = 0; y < 3; y ++) {
                
                
                // var=var+1;
                // array[x][y]=var;
                
                
                
                
                cout << "  " <<angka[x][y] << "  ";

             
                
                
            }
            
            cout << endl<< endl;
            
        }
        
        
        hasil[0]=(angka[0][0]=="X")&&(angka[0][1]=="X")&&(angka[0][2]=="X");
        hasil[1]=(angka[1][0]=="X")&&(angka[1][1]=="X")&&(angka[1][2]=="X");
        hasil[2]=(angka[2][0]=="X")&&(angka[2][1]=="X")&&(angka[2][2]=="X");
        hasil[3]=angka[0][0]=="X"&&angka[1][0]=="X"&&angka[2][0]=="X";
        hasil[4]=angka[0][1]=="X"&&angka[1][1]=="X"&&angka[2][1]=="X";
        hasil[5]=angka[0][2]=="X"&&angka[1][2]=="X"&&angka[2][2]=="X";
        hasil[6]=angka[0][0]=="X"&&angka[1][1]=="X"&&angka[2][2]=="X";
        hasil[7]=angka[0][2]=="X"&&angka[1][1]=="X"&&angka[2][1]=="X";
        
        pemenang=hasil[0]||hasil[1]||hasil[2]||hasil[3]||hasil[4]||hasil[5]||hasil[6]||hasil[7];
        if (pemenang==1) {
            
            //int point=1;
            
            //int total;
            
            //total += point;
            
            cout << "Player 1 win" << endl;
            
            break;
            
        }
    
        
        cout << "PLAYER 2" << endl;
        cout << "Kordinat X = "; cin >> kordinat_x;
        cout << "Kordinat Y = "; cin >> kordinat_y;
        
        angka[kordinat_y-1][kordinat_x-1]="O";
        
        
        cout << endl;
        
       
        for (int x = 0; x < 3; x ++) {
            
            for (int y = 0; y < 3; y ++) {
                
                
                // var=var+1;
                // array[x][y]=var;
                
                
                
                
                cout << "  " <<angka[x][y] << "  ";
        
           
                
                
            }
            
            cout << endl<< endl;
            
        }
        
        
        hasil[8]=(angka[0][0]=="O")&&(angka[0][1]=="O")&&(angka[0][2]=="O");
        hasil[9]=(angka[1][0]=="O")&&(angka[1][1]=="O")&&(angka[1][2]=="O");
        hasil[10]=(angka[2][0]=="O")&&(angka[2][1]=="O")&&(angka[2][2]=="O");
        hasil[11]=angka[0][0]=="O"&&angka[1][0]=="O"&&angka[2][0]=="O";
        hasil[12]=angka[0][1]=="O"&&angka[1][1]=="O"&&angka[2][1]=="O";
        hasil[13]=angka[0][2]=="O"&&angka[1][2]=="O"&&angka[2][2]=="O";
        hasil[14]=angka[0][0]=="O"&&angka[1][1]=="O"&&angka[2][2]=="O";
        hasil[15]=angka[0][2]=="O"&&angka[1][1]=="O"&&angka[2][1]=="O";
        
        pemenang=hasil[9]||hasil[10]||hasil[11]||hasil[12]||hasil[13]||hasil[14]||hasil[15]||hasil[8];
        
        if (pemenang==1) {
            
          //  int point=1;
            
          //  int total;
            
          //  total += point;
            
            cout << "Player 2 Wins" << endl;
            
        }
      
      
    }
    
    
    if (pemenang==0) {
        cout << " DRAW " << endl;
    }

    
    


    
}
