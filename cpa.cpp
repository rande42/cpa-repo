#include <string>
#include <iostream>
#include "cpafunctions.h"

using namespace std;

int main(void){

int res = adder(1,2);
char traceFile[] = "files/traces.txt";
double **trace = prepareTraces(traceFile, 2, 4);
cout << "Start Antti's great program!" << endl;
cout << res << endl;

return 0;
}
