#include <iostream>
using namespace std;
int main(){
    char str[100];
    cout<<"Enter a string:";
    cin.getline(str,100);
    int n=0;
    while(str[n]!='\0'){
        n++;
    }
    

    // display
    cout<<"\nEntered string: ";
    for(int i=0;i<n;i++){
        cout<<str[i]<<" ";
    }

    //search
    cout<<"\nSearching for character 'a' in the string..."<<endl;
    for(int i=0;i<n;i++){
        if(str[i]=='a'){
            cout<<"\nFound at index: "<<i<<endl;
        }
        else{
            cout<<"\nCharacter 'a' not found."<<endl;
        }
    }

    // update
    cout<<"\nUpdating first character of the string to 'T'..."<<endl;
    str[0]='T';
    cout<<"\nUpdated string: ";
    for(int i=0;i<n;i++){
        cout<<str[i]<<" ";
    }
    return 0;
}
