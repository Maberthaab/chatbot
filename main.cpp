#include <iostream> 
#include <stdio.h> 
#include "otak.h" 


using namespace std; 
main(){ 
	system("color 3f"); //4:untuk mengatur warna background, f:untuk mengatur warna font
	cout<<"\n\n";
    cout<<" *               *   ******   *        *******   *******    *       *          ****** "<<endl;
	cout<<"	 *      *      *    *        *        *         *     *    * *   * *   *       "<<endl; 
 	cout<<"   *   *   *   *     ******   *        *         *     *    *   *   *          ******  "<<endl;
	cout<<"	   * *     * *      *        *        *         *     *    *       *   *        "<<endl;
	cout<<" 	*       *       ******   *******  *******   *******    *       *        ******    "<<endl;
				     
	char a[]={ "\t\t\t\t\t\t CHATBOT"};
	int i;
	double j;
	for(i=0;a[i]!='\0';i++){
		printf("%c",a[i]);
		for(j=0;j<=9990000;j++){
		}
	}
	
	
otak BOT; 
for(;;){ 
cout<<"\nYou : "; 
string kalimat; 
getline(cin, kalimat); 
cout<<"BOT : "; 
BOT.respon(kalimat); 
}
} 


