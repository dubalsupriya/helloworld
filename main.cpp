#include <QCoreApplication>
#include<iostream>
using namespace std;

int gcd(int m,int n){
if(n == 0)
    return m;
return gcd(n,m%n);
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//sum of natural numbers
    //    int sum=0,n;
//    cout<<"enter n:";
//    cin>>n;
//    for(int i=1;i<=n;i++)
//    {
//        sum=sum+i;
//    }
//    cout<<sum;

    //swap two variables without using temp
//    int x=10;
//    int y=20;
//    x=x+y;
//    y=x-y;
//    x=x-y;
//    cout<<"x="<<x;
//    cout<<"y="<<y;

    //prime number
//    int b;
//    cout<<"enter num:";
//    cin>>b;
//    int c=2;
//    bool prime=true;
//    while(b!=c)
//    {
//        if(b%c==0)
//        {
//            prime=false;
//            break;
//        }
//        c++;
//    }
//    if(prime)
//        cout<<"prime";
//    else
//        cout<<"not prime    ";

    //power of a given number

//    int base,power,result=1;
//    cout<<"enter base and power:";
//    cin>>base>>power;

//    while(power!=0)
//    {
//        result=result*base;

//        power--;
//    }
//    cout<<result;

//reverse a string

//    string s="Hello world";
//    int count=0;
//    for(int j=0;j<s[j];j++)
//    {
//        count++;
//    }
//    cout<<"Length of string:"<<count;

//    cout<<"\nReverse of string:";
//    for(int i=s.length();i>=0;i--)
//    {
//        cout<<s[i];
//    }


    //gcd of 2 numbers
//    int m ,n ;
//    cin>>m>>n;
//    cout<<gcd(m,n);

//factorial
//    int num;
//    cin>>num;
//    int fact=1;

//    for(int i=num;i>=1;i--)
//    {
//        fact=fact*i;
//    }

//    cout<<"factorial"<<fact;

//fabinacci series

//    int num1=0,num2=1;
//    int limit,result=0;
//    cin >>limit;

//    for(int i=1;i<=limit;i++)
//    {
//        if(i==1)
//        {
//            cout<<num1<<",";
//            continue;
//        }
//        if(i==2)
//        {
//            cout<<num2<<",";
//            continue;
//        }
//        result=num1+num2;
//        num1=num2;
//        num2=result;

//        cout<<result<<",";
//    }

//reverse the number
//    int n,rem;
//    char s;
//    cin>>s;
//    cout<<"ASCII Value of "<<s<<" is:"<<int(s);// gives ASCII value A=65 Z=90 a=97 z=122
//    cin>>n;
//    while(n!=0)
//    {
//    rem=n%10;
//    cout<<rem;
//    n /= 10;
//    }


    //palindrome

//    int n,rem,num,rev=0;
//    cin>>n;
//    num=n;

//    while(n!=0)
//    {
//        rem=n%10;
//        rev=(rev*10)+rem;
//        n/=10;
//    }
//        cout<<rev;

//        if(num == rev)
//        cout<<"palindrome";
//        else
//        cout<<"not";

    //armstrong number

//    int n,digit,res,num;
//    cin>>n;
//    num=n;
//    while(n!=0)
//    {
//        digit=n%10;
//      res +=  digit*digit*digit;
//      n=n/10;
//    }
//    cout<<res;
//    if(num==res)
//        cout<<"armstrong";
//    else
//        cout<<"not";

    //pyramid
   int   n=65;
   //int n=1

    for(int i=0;i<=5;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<char(n)<<" ";
            n +=1;
        }
        cout<<"\n";
    }
    for(int i=5;i>=0;i--)
    {
        for(int j=i+1;j>0;j--)
        {
            cout<<"*"<<" ";
           // n +=1;
        }
        cout<<"\n";
    }

    for(int i=10;i>=0;i--)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"*"<<" ";
            //n +=1;
        }
        cout<<"\n";
    }

    //    const int dogYears=23;
//    const int catYears=35;
//    const int fishYears=17;

//    int myAge=34;

//    int dogAge=dogYears * myAge;
//    int catAge=catYears * myAge;
//    int fishAge=fishYears * myAge;

//    qInfo()<<"HumanAge:"<<myAge;
//    qInfo()<<"DogAge:"<<dogAge;
//    qInfo()<<"CatAge:"<<catAge;
//    qInfo()<<"FishAge:"<<fishAge;

    return a.exec();
}
