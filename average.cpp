#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc,char *argv[]){
    double sum = 0, a;
    if(argc > 1){
        for(int i = 1; i < argc; i++){
            a = atoi(argv[i]);
            sum += a;
        }
            double aver = sum / (argc-1);
        cout << "---------------------------------\n";
        cout << "Average of " << argc-1 << " numbers = " << aver;
        cout << "\n---------------------------------";
    }else{cout << "Please input numbers to find average.";}
}