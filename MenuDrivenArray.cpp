#include <iostream>
using namespace std;

int binary(int a[],int f,int l,int r){
  while(l<=r){
    int m=l+(r-l)/2;

    if(a[m]==f){
      return m;
    }
    if (a[m]<f){
      return binary(a,f,m+1,r);
    }
    if(a[m]>f){
      return binary(a,f,l,m-1);
    }
  }
  return 0;
}

int main(){
  cout<<"1 for Find minimum , maximum , average of array "<<endl;
  cout<<"2 for Linear Searching"<<endl;
  cout<<"3 for Binary Searching "<<endl;
  cout<<"4 for Address of every element of array "<<endl;
  int n;
  cin>>n;

    cout<<"Enter 10 Elements in ascending order "<<endl;
  int a[10];
  for(int i=0;i<10;i++){
    cin>>a[i];
  }
  switch(n){
    case 1:
      {
      int max=a[0],min=a[0];
      double avg=0;
      for(int i=0;i<10;i++){
        if(a[i]>max){
          max=a[i];
        }
        if(a[i]<min){
          min=a[i];
        }

        avg+=a[i];
      }
      avg=avg/10.0;

      cout<<"Maximum is "<<max<<endl;
      cout<<"Minimum is "<<min<<endl;
      cout<<"Average is "<<avg<<endl;
      break;
      }

    case 2:
      {
      int n;
      cout<<"Enter Element To Search ";
      cin>>n;
      for(int i=0;i<10;i++){
        if(a[i]==n){
          cout<<"Element Found at Index "<<i<<endl;
          break;
        }
      }
        break;
      }
    case 3:
      {
        int n;
        cout<<"Enter Element To Search ";
        cin>>n;
        int l=0,r=9;
        while(l<=r)
        {
          int mid=(l+r)/2;
          if(a[mid]==n){
            cout<<"Element Found at Index \nusing iteration method it found on "<<mid<<endl;
            break;
          }
          else if(a[mid]>n){
            r=mid-1;
          }
          else if(a[mid]<n){
            l=mid+1;
          }
        }

        cout<<"\nusing Recursion method it found on "<<binary(a, n,l,r);
        break;
      }

    case 4:
      {
        cout<<"Address of every element of array "<<endl;
        for(int i=0;i<10;i++)
          {
            cout<<"Address of a["<<i<<"] = "<<&a[i]<<endl;
          }
        break;
      }
    default:
      cout<<"Invalid Input"<<endl;
      break;
  }
}
