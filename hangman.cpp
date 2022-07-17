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
    
    int i,a,b=0,g=0,j,flag,e,k,z,u,bla=0;char choice;
    bool fl = false;
    char d[20]={0};
    
    char n;
    fstream file("untitled.txt");
    string str[1000];
    while (getline(file, str[u])) 
    {
       u++;
    }
    
    
    std::cout << str[f] << "\n";
    std::string s = str[f];

	char ary[s.size()];
	s.copy(ary, s.size() + 1);
	ary[s.size()] = '\0';

	std::cout << ary ;
    ary[strlen(ary)-1] = '\0';    
    
    
    
    a=strlen(ary);
        for(i=0;i<a;i++)
        {
            if(ary[i]==(int)32)
            {
                d[i]=9;ary[i]=9;
                b++;
            }
        }z=(a-b)/4;k=a-b;cout<<k;
    
    srand (time (NULL));
    int numbers[6];
    getSix (numbers,k);
        
    for(i=0;i<a;i++)
    {
        if(ary[i]==9)
        {
            cout<<" ";
        }else
        cout<<"- ";
        
    }
    do{
        flag=0;
    if(bla>=3)
    {
        cout << "Length of String = " << strlen(ary)<<endl;
        cout<<"Enter letter:  ";
        cin>>n;
    
    for(i=0;i<a;i++)
    {
        if(ary[i]==n)
        {
            d[i]=ary[i];flag=1;
        }
    } }
    else
    {
        i=numbers[bla];
        d[i]=ary[i];flag=1;
    }
    for(i=0;i<a;i++)
    {
        if(flag==0)
        {
            g++;
        }
    }e=g/a;
    if(strcmp(ary,d)==0)
    {
        break;
    }
    for(i=0;i<a;i++)
    {
        if(d[i]==9)
        {
            cout<<" ";
        }
        if(d[i]==0)
        {
            cout<<"- ";
        }else
            cout<<d[i]<<" " ;
    } system("clear");
    cout<<endl<<e<<endl;
    switch(e)
    {
    case 6:cout<<" _________\n";
    case 5:cout<<"|        |\n";
    case 4:cout<<"|	(.)\n";
    case 3:cout<<"|	/|\\\n";
    case 2:cout<<"|	 |\n";
    case 1:cout<<"|	/ \\\n";
    case 0:cout<<" ";break;
    default:fl = true;
    }
    
    bla++;
    }while(fl == false);
    if(fl == false)
    {
        cout<<"YOU WIN!";
        cout<<ary;
    }
    else
    {
    cout<<"YOU LOOSE!";
    cout<<"\nCORRECT ANSWER IS: ";cout<<ary;
    }
    return 0;
}  
