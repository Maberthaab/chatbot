#include "otak.h" 
#include <iostream> 
#include <fstream> 
using namespace std; 

void otak::respon(string kalimat){ 
fstream ingatan; 
ingatan.open("penyimpanan.txt", ios::in);
while(!ingatan.eof()){ 
string ingatanOtak; 
getline(ingatan, ingatanOtak); 
if(ingatanOtak == kalimat){ 
string pesanDisampaikan; 
getline(ingatan, pesanDisampaikan); 
Suara.bicara(pesanDisampaikan); 
return;
} 
} 

ingatan.close(); 
ingatan.open("penyimpanan.txt", ios::out | ios::app ); 
ingatan<<kalimat<<endl; 

Suara.bicara(kalimat);  
string yangAkanDisimpan; 
cout<<"You : "; 
getline(cin, yangAkanDisimpan); 
ingatan<<yangAkanDisimpan<<endl; 
ingatan.close();
} 

void otak::bicara(string kalimat){ 
this->Suara.bicara(kalimat); 
} 
