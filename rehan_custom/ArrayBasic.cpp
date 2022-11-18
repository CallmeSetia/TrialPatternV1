// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
   int Data[20];
   int counter = 0, batas = 0;
   char tanya;
   
   int Buff_Input;
   while (1) {
       cout << "Input Masukan Ke-" << counter+1 << ": ";
       cin >> Buff_Input;
       
       // Fx : Insert Array
       // -- start
       Data[counter] = (int) Buff_Input;
       if (Data[counter] > 0) {
           cout << "Apakah Valid? <y/n> : ";
           cin >> tanya;
           if (tanya == 'n') {
               Data[counter] = 0;
               counter = counter - 1;
               if (counter < 0) counter = 0;
           }
       }
       // -- end


       cout << "\n";
       counter++;
   }

}
