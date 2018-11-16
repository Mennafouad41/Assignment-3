#include <iostream>
using namespace std;
//return true if there is a subset of set[] with sum equal to sum
bool subset(int set1[],int n,int sum)
{
    //base case
    if(sum==0)
        return true;
    else if(n==0 && sum!=0)
        return false;
    //if the last element is greater than the sum:Excluding
    else if(set1[n-1]>sum)
        return subset(set1,n-1,sum);
    //else:
    //a-including the last element
    //b-excluding the last element
    else
        return subset(set1,n-1,sum) || subset(set1,n-1,sum-set1[n-1]);
}
 //program to test the above function
int main()
{
   int set1[]={3,2,8,6,4,1,10};
   int sum=8;
   int n=sizeof(set1)/sizeof(set1[0]);
   if(subset(set1,n,sum)==true)
   {
       cout<<"There is a subset with a given sum"<<endl;
   }
   else
   {
       cout<<"No subset with agiven sum"<<endl;
   }
   return 0;

}
