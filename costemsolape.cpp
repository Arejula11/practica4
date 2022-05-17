#include <iostream>
#include "maxsolape.hpp"
#include <time.h>
#include <cstdlib>

using namespace std;
const int DERECHA = 100;
const int IZQUIERDA = 4000;

int numRandInter(){
	time_t semilla = time(nullptr);
	srand(semilla);
	int numIntervalos;
	numIntervalos= DERECHA+rand()%(IZQUIERDA-DERECHA+1);

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


int main(){
		
	double intervalos[N][2];
	const int numIntervalos = numRandInter();
	randomInter(intervalos, numIntervalos);
	cout<<numIntervalos<<endl;
	for(int i = 0; i<numIntervalos;i++){

	cout <<i << ": " <<  intervalos[i][0] << " - " <<  intervalos[i][1]<< endl;
	} 
	

	
	return 0;
}
