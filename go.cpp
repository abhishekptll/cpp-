# include <iostream>
using namespace std;
int main()
{
// int number=2;
// int power=3;
// int ans=1;
// for(int i=1;i<=power;++i)
// {
//     ans=ans*number;
// }
// cout<<ans;


// ------------------sum---------------


// int sum=0;
// int n=5;

// for(int i=0;i<=n;++i){
//    sum+=i;
// }
// cout<<sum;  


// ---------------factorial-----------------


// int fact=1;
// int n=5;

// for(int i=1 ; i<=n ; ++i){
//     fact*=i;
// }
// cout<<fact;


// ---------------------------hcf--------------

// int sn=8,ln=16,hcf=1;


// for(int i=1 ; i<=sn ; ++i){
//      if(sn%i==0 && ln%2 ==0){
//         hcf=hcf+i;
//      }    
// cout<<hcf;

// }
// return 0;
// }


// int num=121;
// int rev;
// int ans =num;


// while(num!=0){
//    int digit = num%10;
   
//    rev= rev*10+digit;
//    num=num/10; 
// }
// if(rev==ans){
//    cout<<"pallendrom";
// }else{
//    cout<<"not a pallendrom";
// }
// return 0;
// }


// int num =153;
// int rev=num;
// int arm=0;


// while(num!=0){
//    int digit = num%10;
  
//    arm = arm+digit *digit*digit;
//    num=num/10;
// }
// if( rev==arm){
//    cout<<"armstrong";
// }else{
//    cout<<"not a armstrong";
// }

// return 0;
// }



int a=2587;
int ans;


while(a<0){
    int digit=a%10;
     a=a/10;
   if(digit<ans){
    ans=digit;
   }
  

}
cout<<ans;


}
