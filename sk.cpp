#include <iostream>

using namespace std;

int main()
{
    int size;
    cout<<"Enter size of array:";
    cin>>size;
    int arr[100];
    cout<<"Enter values:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"Maximum value is:"<<max<<endl;
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<"Maximum value is:"<<min<<endl;
    return 0;
}
