#include <iostream>
#include "maxsolape.hpp"
#include <time.h>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;
const int DERECHA = 100;
const int IZQUIERDA = 4000;

int numRandInter(){
	time_t semilla = time(nullptr);
	srand(semilla);
	int numIntervalos;
	numIntervalos= DERECHA+rand()%(IZQUIERDA-DERECHA+1);
	return numIntervalos;

}

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
	double tiempo = (end-start);
	cout<<fixed<<setw(1)<<tiempo<<" microsegundos"<<endl;


}

void DyV(tpInter indinters[N], int p, int f){
	maxSolDyV(indinters,p,f);




}

int main(){

	double intervalos[N][2];
	const int numIntervalos = numRandInter();
	randomInter(intervalos, numIntervalos);
	fuerzaBruta(intervalos,numIntervalos);
	tpInter inditerns[N];
	int p,f;
	DyV(inditerns,p,f);
	
	
	

	return 0;
}
