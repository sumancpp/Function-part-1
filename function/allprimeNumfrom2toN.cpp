#include <iostream>
using namespace std;

void checkPrime(int num){
    int count = 0;
    for(int i=2; i<num; i++){ // i=1
        // int flag = i;          //i =1
        for(int j=1; j<=i; j++){ 
            if(i % j == 0 ){
                count++;//1
            }
            if(count == 2){
                cout<<i;
               
            }
        }
        // if(count == 2){
        //     cout<<i;
           
        // }
        break;
    }
      
    }
int main(){
    int num;
    cout<<"Enter a number ";
    cin>>num;
    checkPrime(num);

}

