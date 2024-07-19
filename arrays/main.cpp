#include <iostream>

using namespace std;

int main()
{

    int N=5;
    int Arr[N]= {-1,-2,-3,-2,-5};
    int highSum= Arr[0];
    int tempSum =0;
    int sum;

    for(int m=0;m<N;m++){
      sum= tempSum + Arr[m];
      tempSum=sum;
      if(sum>highSum){
        highSum=tempSum;      }
    }
    cout <<highSum<<endl;

    return 0;
}
