#include <iostream>
using namespace std;

int adder(int eka, int toka){
 return eka+toka;
}


double** prepareTraces(const char tracesFile[], int traceAmount, int sampleAmount){
 double** traces = new double*[traceAmount];

 cout << tracesFile << endl;
 
 for(int i=0; i<traceAmount;i++){
  traces[i] = new double[sampleAmount];
  for(int j=0; j<sampleAmount;j++){
   traces[i][j] = i;
  }
 }

return traces;
}

void freeTraces(double** traces, int traceAmount){
 for(int i=0;i<traceAmount;i++){
  delete [] traces[i];
 }
 delete [] traces;
}

