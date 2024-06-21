#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of kids"<<endl;
    cin>>n;
    int arr[n];
    int maxcan= INT_MIN;
    int maxindex=0;
    for(int i=1; i<=n;i++){
        cout<<"enter the number of candles";
        cin>>arr[i];
        if(arr[i]>maxcan){
            maxcan= arr[i];
            maxindex= i;
        }
    }
    cout<<"the maximum number of candles is owned by kid number"<<maxindex;
}