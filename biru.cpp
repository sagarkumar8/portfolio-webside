#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter number of elements:";
    cin>>n;
    int arr[100];
    cout <<"enter"<<n<<"elements:\n";
    for (int i 0; i<n;i++){
        cin>>arr[i];

    }
    for(i=0; i<n-1;i++)
{
    for(intj=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            int tem = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    } 
}
cout<<"sorted array:";
for(int i=0;i<n;i++){
    cout<<arr[i]<<"";


}
return 0;
}