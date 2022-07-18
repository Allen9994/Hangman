#include <iostream>  
#include <string.h>  
#include <fstream>
#include<time.h>
#include<cstring>
#include<ctime>
#include<stdlib.h>
using namespace std; 

static void getSix (int *dst,int k) {
    int sz, pos, i, src[50];
    for (i = 0; i < sizeof(src)/sizeof(*src); i++)
        src[i] = i + 1;
    sz = k;
    for (i = 0; i < 6; i++) {
        pos = rand() % sz;
        dst[i] = src[pos];
        src[pos] = src[sz-1];
        sz--;
    }
}
int main()  
{  
    int f;
    srand((unsigned) time(0));
    f = rand()%89;
    
    int i=0,a,b=0,g=0,j,e,k,z,u,bla=0;char choice;
    bool fl = false,flag = false;
    char d[50]={0};
    
    char n;string line;
    fstream file("untitled.txt");
    string str[1000];
    if(file.is_open()) 
    {
        while(!file.eof())
        {
            getline(file, line);
            str[i]=line;
            i++;
        }
        file.close();
    }
    else
    {
        cout<<"Couldn't open the file\n";
    }
    
    cout << str[f] << "\n";
    string s = str[f];

    a=s.size()-1;
    for(i=0;i<a;i++)
    {
        if(s[i]==(int)32)
        {
            d[i]=' ';
            b++;
        }
    }
    z=(a-b)/4;k=a-b;cout<<k;
    
    srand (time (NULL));
    int numbers[6];
    getSix (numbers,k);
    do{
        flag=false;
        if(bla>=3)
        {
            cout <<"Length of the word = " << s.size()<<endl;
            cout<<"Enter letter:  ";
            cin>>n;
            for(i=0;i<a;i++)
            {
                if(s[i]==n)
                {
                    d[i]=s[i];flag=true;
                }
            } 
        }
        else
        {
            i=numbers[bla];
            d[i]=s[i];flag=true;
        }
        for(i=0;i<a;i++)
        {
            if(flag==false)
            {
                g++;
            }
        }
        e=g/a;
        if(strlen(d) == s.size()-1)
        {
            break;
        }            
system("CLS");
        for(i=0;i<a;i++)
        {
            if(d[i]==' ')
            {
                cout<<" ";
            }
            if(d[i]==0)
            {
                cout<<"- ";
            }else
        cout<<d[i]<<" " ;
        } 

        cout<<endl<<e<<endl;
        switch(e)
        {
            case 7:cout<<" _________\n";
            case 6:cout<<"|        |\n";
            case 5:cout<<"|	 ☹\n";
            case 4:cout<<"|	/||\\\n";
            case 3:cout<<"|	 ||\n";
            case 2:cout<<"|	/  \\\n";
            case 1:cout<<"|__________\n";
            case 0:cout<<" ";break;
            default:fl = true;
        }
        bla++;
        
    }while(fl == false);
    if(fl == false)
    {
        cout<<"YOU WIN!\n";
        cout<<s<<endl;
    }
    else
    {
        cout<<"YOU LOOSE!";
        cout<<"\nCORRECT ANSWER IS: "<<s<<endl;
    }system("pause");
    return 0;
}  
