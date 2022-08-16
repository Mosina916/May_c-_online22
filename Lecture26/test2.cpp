#include<iostream>
using namespace std;



int stair(int n , int ma ,int i){
      int sum = 0;
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    if(i>ma){
        return sum;
    }
    else{

         sum = sum + stair(n-i,ma,i+1);

    }
 
 



// for(int l = 1 ; l<=max ; l++){
    
   
// }


// return sum;

}

int main(){
    int n;
    cin>>n;
    int ma;
    cin>>ma;
    cout<<stair(n,ma,1)<<endl;
    return 0;
}