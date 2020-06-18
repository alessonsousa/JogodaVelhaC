#include <iostream>

using namespace std;

int main(){
const int valor = 3;
 int matriz[valor][2];

int j;
 for(int i = 0; i < valor; i++){
      cout << "Digite o ano:";
      cin >> matriz[i][0];
      cout << "Digite a população:";
      cin >> matriz[i][1];
      
 }

for(int i = 0; i < valor; i++){
    cout << matriz[i][0] << " ";
 for(j=0;j<matriz[i][1]; j++){
     cout << "-";
 }
 cout << endl;
 }




}