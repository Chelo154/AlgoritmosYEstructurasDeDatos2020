#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

main()
{
	vector<int> vector_numeros;
	int cantidad_elementos;
	int x;
	cout<<"Indique la cantidad de elementos del vector: ";
	cin>>cantidad_elementos;
	
	for(int i = 0; i < cantidad_elementos; i++)
	{
		cout<<"Ingrese el elemento: ";
		cin>>x;
		vector_numeros.push_back(x);
	}
	
	cout<<endl<<"[";
	for(int i =0 ; i < cantidad_elementos ; i++){
		cout<<vector_numeros[i]<<",";
	}
	cout<<"]";
	
	sort(vector_numeros.begin(),vector_numeros.end());
	
	cout<<endl<<"[";
	for(int i =0 ; i < cantidad_elementos ; i++){
		cout<<vector_numeros[i]<<",";
	}
	cout<<"]";
	
	
}
