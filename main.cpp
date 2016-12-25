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
    
    
    int array[10][10],var,pilihan;
    string kordinat="x", result, angka[100][100],ulang;
    var=0;
    bool hasil[100],pemenang = false;
    
    
    
    // this condition is giving value to arry[][] and conver to string angka[][]
    
    
    for (int x = 0; x < 3; x ++) {
        
        for (int y = 0; y < 3; y ++) {
            
            
            var += 1; // this statment is giving value increment Var, from 1 to 9
            array[x][y]=var;
            
            // This statment for convert integer to string
            
            ostringstream convert;
            
            convert << array[x][y];
            
            angka[x][y] = convert.str();
            
            // value angka[x][y] is string
        
            
        }
    
        
    }

    
    
    //USER INTERFACE Game XOXO
    
    cout << "Game XOXO" << endl<<endl<<endl<<endl;
    
    
    for (int x = 0; x < 3; x ++) {
        
        for (int y = 0; y < 3; y ++) {
            
            //Perulangan Tampilan Board
            cout << "  " <<angka[x][y] << "  ";
            
            
        }
        
        cout << endl<< endl;
        
    }
    
    
    
    // Conditions Game Play Length

    for (int board=1; board<=4; board++) {
        
        
        //Input Value "X" to angka[x][y]
        
        cout << "PLAYER 1" << endl<<endl;
        cout << "1, 2, 3, 4, 5, 6, 7, 8, 9"<<endl;
        cout << "Pilih Angka = " ; cin>>pilihan;
        
        
        //Condition Value
        
        switch (pilihan) {
            case 1:
            
            angka[0][0]="X";
            
            break;
            
            case 2:
            
            angka[0][1]="X";
            
            break;
            
            case 3:
            
            angka[0][2]="X";
            
            break;
            
            case 4:
            
            angka[1][0]="X";
            
            break;
            
            case 5:
            
            angka[1][1]="X";
            
            break;
            
            case 6:
            
            angka[1][2]="X";
            
            break;
            
            case 7:
            
            angka[2][0]="X";
            
            break;
            
            case 8:
            
            angka[2][1]="X";
            
            break;
            
            
            case 9:
            
            angka[2][2]="X";
            
            break;
            
            default:
            
            cout << "Nomer Yang Kamu Masukkan Salah" << endl;
            
            
            break;
        }
        
        
        
        
        cout <<endl<<endl<< endl<< endl;
        
        
        //Update INTERFACE Board
        
        
        for (int x = 0; x < 3; x ++) {
            
            for (int y = 0; y < 3; y ++) {
                
                
                // var=var+1;
                // array[x][y]=var;
            
                
                cout << "  " <<angka[x][y] << "  ";

             
                
                
            }
            
            cout << endl<< endl;
            
        }
        
        // This is condition for decission who is the winner
        
        
        hasil[0]=(angka[0][0]=="X")&&(angka[0][1]=="X")&&(angka[0][2]=="X");
        hasil[1]=(angka[1][0]=="X")&&(angka[1][1]=="X")&&(angka[1][2]=="X");
        hasil[2]=(angka[2][0]=="X")&&(angka[2][1]=="X")&&(angka[2][2]=="X");
        hasil[3]=angka[0][0]=="X"&&angka[1][0]=="X"&&angka[2][0]=="X";
        hasil[4]=angka[0][1]=="X"&&angka[1][1]=="X"&&angka[2][1]=="X";
        hasil[5]=angka[0][2]=="X"&&angka[1][2]=="X"&&angka[2][2]=="X";
        hasil[6]=angka[0][0]=="X"&&angka[1][1]=="X"&&angka[2][2]=="X";
        hasil[7]=angka[0][2]=="X"&&angka[1][1]=="X"&&angka[2][1]=="X";
        
        //Boolean Value for the winner
        
        pemenang=hasil[0]||hasil[1]||hasil[2]||hasil[3]||hasil[4]||hasil[5]||hasil[6]||hasil[7];
        if (pemenang==1) {
        
            
            cout << "Player 1 win" << endl;
            
            break; // This condition for finish the game XOXO
            
        }
    
        
        
        
        
        
        //USER INTERFACE Player 2
        
        //Input Value "X" to angka[x][y]
        
        cout << "PLAYER 2" << endl<<endl;
        cout << "1, 2, 3, 4, 5, 6, 7, 8, 9"<<endl;
        cout << "Pilih Angka = " ; cin>>pilihan;
        
        
        //Condition Value
        
        switch (pilihan) {
            case 1:
            
            angka[0][0]="O";
            
            
            
            break;
            
            case 2:
            
            angka[0][1]="O";
            
            break;
            
            case 3:
            
            angka[0][2]="O";
            
            break;
            
            case 4:
            
            angka[1][0]="O";
            
            break;
            
            case 5:
            
            angka[1][1]="O";
            
            break;
            
            case 6:
            
            angka[1][2]="O";
            
            break;
            
            case 7:
            
            angka[2][0]="O";
            
            break;
            
            case 8:
            
            angka[2][1]="O";
            
            break;
            
            
            case 9:
            
            angka[2][2]="O";
            
            break;
            
            default:
            
            cout << "Nomer Yang Kamu Masukkan Salah" << endl;
            
            break;
        }
        
        
        
        
        cout <<endl<<endl<< endl<< endl<<endl;
        
       //Update INTERFACE Board
        
        for (int x = 0; x < 3; x ++) {
            
            for (int y = 0; y < 3; y ++) {
                
                
                // var=var+1;
                // array[x][y]=var;
                
                
                
                cout << "  " <<angka[x][y] << "  ";
        
           
                
                
            }
            
            cout << endl<< endl;
            
        }
        
        
         // This is condition for decission who is the winner
    
        
        hasil[8]=(angka[0][0]=="O")&&(angka[0][1]=="O")&&(angka[0][2]=="O");
        hasil[9]=(angka[1][0]=="O")&&(angka[1][1]=="O")&&(angka[1][2]=="O");
        hasil[10]=(angka[2][0]=="O")&&(angka[2][1]=="O")&&(angka[2][2]=="O");
        hasil[11]=angka[0][0]=="O"&&angka[1][0]=="O"&&angka[2][0]=="O";
        hasil[12]=angka[0][1]=="O"&&angka[1][1]=="O"&&angka[2][1]=="O";
        hasil[13]=angka[0][2]=="O"&&angka[1][2]=="O"&&angka[2][2]=="O";
        hasil[14]=angka[0][0]=="O"&&angka[1][1]=="O"&&angka[2][2]=="O";
        hasil[15]=angka[0][2]=="O"&&angka[1][1]=="O"&&angka[2][1]=="O";
        
        //Boolean Value for the winner
        
        pemenang=hasil[9]||hasil[10]||hasil[11]||hasil[12]||hasil[13]||hasil[14]||hasil[15]||hasil[8];
        
        if (pemenang==1) {
            
          //  int point=1;
            
          //  int total;
            
          //  total += point;
            
            cout << "Player 2 Wins" << endl;
            
            break; // This condition for finish the game XOXO
            
        }
      
      
    }
    
    
    //This Condtion for DRAW
    
    if (pemenang==0) {
        cout << " DRAW " << endl;
    }

    
    


    
}
