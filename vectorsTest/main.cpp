#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> power;
    power= {3,3,2,1};
    int sumDifference=0;
    int difference;


    for (int i=0; i<power.size();i++){
        if(power[i]>power[i+1] &&i+1<power.size()){
            difference = power [i]- power[i+1];

            for (int j=i+1; j<power.size();j++){
                power[j]=power[j]+difference;

            }
              sumDifference =sumDifference+difference;
        }
    }
    cout <<sumDifference<<endl;

    return 0;
}
