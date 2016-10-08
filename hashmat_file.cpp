#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;
int main(){
    ifstream f("sample.txt");
    int hashmat, opponent;
    while (f >> hashmat >> opponent){
          cout << abs(hashmat-opponent)<<endl;      
    }
    system("pause");
    return 0;
}

