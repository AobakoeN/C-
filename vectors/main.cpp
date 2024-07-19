#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <string> repository;
    repository = {"mobile","mouse","moneypot","monitor","mousepad"};
    string temp;
    for(int i=0; i<repository.size(); i++){
        for(int j=i+1; j<repository.size(); j++){
           if(repository[i]>repository[j]){
                temp = repository[i];
                repository[i] = repository[j];
                repository[j] = temp;

           }
        }
    }

    string customerQuery = "mouse";
    string temp2;
    vector <string> tempStringVector;
    for (int p=2; p<=customerQuery.size();p++){
    for(int n=0; n<repository.size();n++){
        temp2=repository[n];

           if (customerQuery.substr(0,p)==temp2.substr(0,p)&& tempStringVector.size()<3){
            tempStringVector.push_back(temp2);
            cout<<temp2<<" ";

        }
    }
    tempStringVector.clear();
    cout<<endl;
    }




    return 0;
}
