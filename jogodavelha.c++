#include<iostream>
#include<stdlib.h>

using namespace std;


int teste1 = 1;
int i;
int x;
int y;
int j;
int velha = 0;


char tela[3][3];

void inicial(); 
void teste();
void tela1();
void tela2();
void func();

int main(){
  inicial();
  
}

void inicial(){
    
    int dig;
    cout << "\t____OPÇÕES:____" << endl;
    cout << "\t|             |" << endl;
    cout << "\t| Iniciar - 1 |" << endl;
    cout << "\t| Sair    - 2 |" << endl;
    cout << "\t|_____________|" << endl;
    
    
    cin >> dig;
     
    switch(dig){
        case 1: 
        tela1();
         break;
        case 2:
        break;
    }
    
}
void tela1(){
  cout << "1  2  3" << endl;
  cout << "1" << tela[0][0] << "|" << tela[0][1] << "|" << tela[0][2] << endl;
  cout << "2" << tela[1][0] << "|" << tela[1][1] << "|" << tela[1][2] << endl;
  cout << "3" << tela[2][0] << "|" << tela[2][1] << "|" << tela[2][2] << endl;
  cout << "x" << endl;
  
  int valor;
  cin >> valor;


}

void teste(int pl){
if(x == 0)
if((tela[0][0] == tela[0][1]) && (tela[0][1] == tela[0][2])){

  cout << "parabens voce ganhou!!!"
  cout << pl;
  teste = 0;
}
if(x == 1)
if((tela[1][0] == tela[1][1]) && (tela[1][1] == tela[1][2])){

  cout << "parabens voce ganhou!!!"
  cout << pl;
  teste = 0;
}
if(x == 2)
if((tela[2][0] == tela[2][1]) && (tela[2][1] == tela[2][2])){

  cout << "parabens voce ganhou!!!"
  cout << pl;
  teste = 0;
}
if(y == 0)
if((tela[0][0] == tela[0][1]) && (tela[0][1] == tela[0][2])){

  cout << "parabens voce ganhou!!!"
  cout << pl;
  teste = 0;
}
if(y == 1)
if((tela[1][0] == tela[1][1]) && (tela[1][1] == tela[1][2])){

  cout << "parabens voce ganhou!!!"
  cout << pl;
  teste = 0;
}
if(y == 1)
if((tela[2][0] == tela[2][1]) && (tela[2][1] == tela[2][2])){

  cout << "parabens voce ganhou!!!"
  cout << pl;
  teste = 0;
}


}

void func(){

 for(i = 0;i < 3; i++){
   for(j = 0; j < 3; j++ ){
     tela[i][j]='';
   }
 }




}