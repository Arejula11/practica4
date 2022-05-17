#include <iostream>
#include "maxsolape.hpp"

using namespace std;
void probarMax(double  inters[N][2], double inters2[N][2]){

	tpSolape sol= maxSolFBruta(inters,5);
	tpSolape sol2= maxSolFBruta(inters2,5);
	
	cout<<"Solape = "<<sol.solape<<" A = "<<sol.interA<<" B = "<<sol.interB<<endl;
	cout<<"Solape = "<<sol2.solape<<" A = "<<sol2.interA<<" B = "<<sol2.interB<<endl;
}
int main(){

	double inters[N][2] = {
        	{1.5, 8.0},
        	{0.0, 4.5},
        	{2.0, 4.0},
      		{1.0, 6.0},
	        {3.5, 7.0},
}

	cout<<"PROBAR MAX:"<<endl;
	probarMax(inters,inters2);
}
