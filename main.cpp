#include <stdio.h>
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int l1;
    int l2;
	
	cout<<"liczba 1:";
    cin>>l1;
    	cout<<"liczba 2:";
   		 cin>>l2;

    	cout<<l1<<" "<<endl<<bitset<8>(l1).to_string()<<endl<<(l1)<<endl<<endl;

   		 	cout<<l2<<" "<<bitset<8>(l2).to_string()<<endl<<(l2)<<endl<<endl;

   				 cout<<l1<<"|"<<l2<<" "<<bitset<8>(l1|l2).to_string()<<endl<<(l1|l2)<<endl<<endl;

    				cout<<l1<<"&"<<l2<<" "<<bitset<8>(l1&l2).to_string()<<endl<<(l1&l2)<<endl<<endl;

    					cout<<l1<<"^"<<l2<<" "<<bitset<8>(l1^l2).to_string()<<endl<<(l1^l2)<<endl<<endl;

    						cout<<"~"<<l1<<" "<<bitset<8>(~l1).to_string()<<endl<<(~l1)<<endl<<endl;

    							cout<<"~"<<l2<<" "<<bitset<8>(~l2).to_string()<<endl<<(~l1)<<endl<<endl;

    								cout<<l1<<"<<=4 "<<" "<<bitset<8>(l1<<=4).to_string()<<endl<<(l1<<=4)<<endl<<endl;

    									cout<<l2<<">>=1 "<<" "<<bitset<8>(l2>>=1).to_string()<<endl<<(l1>>=1);
    
    //by Karol Ptak
    return 0;
}
