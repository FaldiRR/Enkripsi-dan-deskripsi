#include <iostream>
#include <string.h>
#define maks 500
using namespace std;
 
int main(){
    char chiper[maks];
    char plain[maks];
    int key;
    int jumlah=0;
   
    cout<<"Masukkan kata : ";
    cin.getline(chiper, sizeof(chiper));
   
    cout<<"Masukkan key : ";
    cin>>key;
    //merubah plaintext menjadi chipper text
    for(int i=0; i<strlen(chiper); i++){
        cout<<chiper[i] <<"( "<<int(chiper[i])<< " )"; 
        jumlah=jumlah+int(chiper[i]);
        chiper[i] =(chiper[i]+key)%128;
       
    }
   
    cout<<endl;
    cout<<"total = "<<jumlah;
   
    cout<<"\nhasil enkripsi : "; 
    for(int i = 0; i<strlen(chiper); i++){
        if(chiper[i]>=90){

            chiper[i]=chiper[i]-26;
            cout<<chiper[i];
        }
        else{
        cout<<chiper[i];
        }
    }
   
    
    for(int i=0; i<strlen(chiper); i++){ 
        plain[i]=(chiper[i]-key)%128;
        chiper[i]=plain[i];
    }
   
    cout<<"\nhasil dekripsi : "; 
    for(int i=0; i<strlen(chiper); i++){
        if(chiper[i]<=64){
        	
            chiper[i]=chiper[i]+26;
            cout<<chiper[i];
        }
        else{
        cout<<chiper[i];
        }
    }
}
