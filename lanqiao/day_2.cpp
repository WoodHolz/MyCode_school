#include <iostream>
#include <cmath>
using namespace std;


int main()
    {
        int n = 0;
        cin >> n;
        for(int i = 0; i <= n; i++){
            if(pow(i / 100, 3) + pow(i % 100 / 10, 3) + pow(i % 10, 3) == i){
                cout << i << endl;
                //cout << "XD" << endl;
            }
            //cout << "XD" << endl;
        }
        return EXIT_SUCCESS;
    }
