// A simple C++ program that generates rows, columns, squares, diagonal and triangle.
// Given a positive number, it will generate the shape using asterisks.
// Written by TheiPhoneDev


#include <iostream>

using namespace std;

//prototipi
int Menu();
void inserimento(int &x);
void riga(int x);
void colonna(int x);
void diagonale(int x);
void quadrato(int x);
void triangolo(int x);

int main() {
    
    int N=0;
    int scelta;
    
     do{
      scelta=Menu();
      switch(scelta){
        case 1:
          inserimento(N);
          break;
        case 2:
          riga(N);
          break;
        case 3:
          colonna(N);
          break;
        case 4:
          diagonale(N);
          break;
         case 5:
          quadrato(N);
          break;
        case 6:
          triangolo(N);
          break;
        case 0:
          cout<<"Esci"<<endl;
          break;	
        default:
          cout<<"Attenzione, scelta sbagliata!"<<endl;
          break;
      } 
  }while (scelta!=0);
   

    return 0;
}


int Menu(){
  int scegli;
  cout<<"-------MENU'-------"<<endl;
  cout<<"1-Inserisci un numero (n)"<<endl;	
  cout<<"2-Visualizza una riga di N asterischi"<<endl;	
  cout<<"3-Visualizza una colonna di N asterischi"<<endl;
  cout<<"4-Visualizza una diagonale di N asterischi"<<endl;	
  cout<<"5-Visualizza un quadrato con il lato di N asterischi"<<endl;	
  cout<<"6-Visualizza un triangolo rettangolo con i due cateti di N asterischi"<<endl;	
  cout<<"0-Fine"<<endl;	

    cout<<"Scegli un operazione: "<<endl;
    cin>>scegli;

    return scegli;	
}



void inserimento(int &x) {
    do {
        cout<<"Inserisci un numero N: ";
        cin>>x;
        if(x<=0)
            cout<<"Errore. Inserire un numero positivo";
    }while(x<=0);
}

void riga(int x) {
    char asterisco = '*';
    
    string riga;
    for(int i=0;i<x;i++) {
        riga=riga+asterisco;
    }
    
    cout<<riga<<endl;
    cout<<endl;
}

void colonna(int x) {
    
    char asterisco = '*';
    
    cout<<endl;
    
    for(int i=0;i<x;i++) {
        cout<<asterisco<<endl;
    }
    
    cout<<endl;
}

void diagonale(int x) {
    
    
    char asterisco = '*';
    
    
    string diagonale;
    string spazio=" ";
    
    cout<<endl;
    
    for(int i=1;i<=x;i++) {
        diagonale=spazio+asterisco;
        spazio=spazio+" ";
        cout<<diagonale<<endl;
    }
    
    cout<<endl;
}

void quadrato(int x){
    char asterisco = '*';
    
    string riga;
    for(int i=0;i<x;i++) {
        riga=riga+asterisco+" ";
    }
    
    for(int n=0;n<x;n++) {
        cout<<riga<<endl;
    }
}

void triangolo(int x) {
    char asterisco = '*';
    string spazio = " ";
    string triangolo;
    for(int i=0;i<x;i++) {
        triangolo=triangolo+asterisco+spazio;
        cout<<triangolo<<endl;
    }
}
