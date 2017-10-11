#include <iostream>
using namespace std;
int main(){
	int vector[10],aux1,aux2;
	for (int i=0; i<30; i++){
		cout<<"Dame el "<<i+1<<" n"<<char(163)<<"mero\n";
		cin>>vector[i];
	}
	for(int i=0; i<30; i++){
		aux1=i;
		for(int j= i+1; j<30; j++)
		if(vector[aux1]< vector[j])
		aux1=j;
		aux2=vector[aux1];
		vector[aux1]=vector[i];
		vector[i]=aux2;
	}
	cout<<"Mayor a Menor\n";
	for(int i=0; i=30; i++){
		cout<<"["<<vector[i]<<"]\n";
	}
		for(int i=0; i<30; i++){
		aux1=i;
		for(int j= i+1; j<30; j++)
		if(vector[aux1]> vector[j])
		aux1=j;
		aux2=vector[aux1];
		vector[aux1]=vector[i];
		vector[i]=aux2;
	}
		cout<<"Menor a Mayor\n";
		for(int i=0; i<30; i++){
		cout<<"["<<vector[i]<<"]\n";
	}
}
