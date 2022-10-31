/// plaindrom word
/*#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char str[10];
    cout<< "Enter something : ";
    cin>>str;
    bool chak = true;

    int n = 0;
    while(str[n] != '\0')
        n++;


    for(int i = 0; i < n; i++){
        if(str[i] != str[n-1-i])
            chak = false;
        break;
    }
    if(chak == true){
        cout<<"This is plaindrom "<<endl;
    }
    else
        cout<<"This is not a plaindrom number "<<endl;


    return 0;
}*/

/// Largest word in a line ///
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char arr[n+1];
    cout<< "Enter the number of char : ";
    cin>>n;
    fflush(stdin);

    cout<< "Enter a sentanse : ";
    cin.getline(arr,n);
    cin.ignore();

   int i = 0;
   int curlen = 0, maxlen = 0;
   int st = 0, maxst = 0;

   while(arr[i] != '\0')
   {
       if(arr[i] == ' ' || arr[i] == '\0'){
            if(curlen > maxlen){
                maxlen = curlen;
              maxst = st;
            }
          curlen = 0;
       }
       st = i+1;
       curlen++;
       if(arr[i] == '0')
         break;
       i++;
   }
   cout<<"The max Lenth is "<<maxlen<<endl;
   for(i = 0; i < maxlen; i++){
    cout<<arr[i+maxst];
   }
}
