#include <iostream>
#include <fstream>
#include <string>
#include "maxsolape.hpp"
#include <time.h>
#include <cstdlib>
#include <iomanip>

using namespace std;
const int DERECHA = 100;
const int IZQUIERDA = 4000;
const int DIFFINTER = 50;

void randomInter(double intervalos[N][2], const int numIntervalos){
	time_t semilla = time(nullptr);
	srand(semilla);
	for (int i = 0; i < numIntervalos;i++){
		intervalos[i][0] = minini+(maxfin-minini)*rand()/RAND_MAX;
		intervalos[i][1] =  minini+(maxfin-minini)*rand()/RAND_MAX;
		if(intervalos[i][0]>intervalos[i][1]){
			double aux = intervalos[i][0];
			intervalos[i][0] = intervalos[i][0];
			intervalos[i][1] = aux;
		}
	}
	

}
void fuerzaBruta(double intervalos[N][2], const int numIntervalos){
	clock_t start = clock();
	tpSolape sol = maxSolFBruta(intervalos,numIntervalos);
	clock_t end = clock();
	float tiempo = (float(end-start)*1000000)/CLOCKS_PER_SEC;
	cout<<tiempo<<" microsegundos ";
	cout<<end<<"--"<<start<<endl;


}

void DyV(tpInter indinters[N], int p, int f){
	maxSolDyV(indinters,p,f);




}

int main(){
	double intervalos[N][2];
	ofstream g;
	string nombre = "tfb.txt";
	for (int i = DERECHA; i < IZQUIERDA; i+=DIFFINTER){
		cout<<i<<": ";
		
		randomInter(intervalos, i);
		fuerzaBruta(intervalos,i);
	}
	
	
	tpInter inditerns[N];
	int p,f;
	DyV(inditerns,p,f);
	
	
	

	return 0;
}
