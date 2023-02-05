#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
using namespace std;

bool isPrime(int number){

    if(number < 2) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    for(int i=3; (i*i)<=number; i+=2){
        if(number % i == 0 ) return false;
    }
    return true;

}

vector<int> primeFactors(int number)
{
    vector<int> factors;
    int i = 1, j, count;
	
	while (i <= number)
   	{
   		count = 0;
    	if(number % i == 0)
      	{
      		j = 1;
      		while(j <= i)
      		{
      			if(i % j == 0)
      			{
      				count++;
				}
				j++;
			}
			if(count == 2)
			{
				factors.push_back(i);
			} 
      	}
    	i++;
   	}
    return factors;
}

bool isValid(int p, int q, int e, int phi)
{
    if(!isPrime(p) || !isPrime(q))
    {
        return false;
    }
    if(p == q)
    {
        return false;
    }
    if(gcd(e,phi) != 1)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int e = 0;
    int n = 0;
    int m = 0;
    int num = 0;
    vector<int> v;
    cin >> e >> n >> m; // input e,n,m

    for(int i=0; i<m; i++) // input encoded message
    {
        cin >> num;
        v.push_back(num);
    }

    vector<int> factors;
    factors = primeFactors(e);
    int p = factors.at(0);
    int q = factors.at(1);
    int phi = (p-1) * (q-1);
    if(!isValid)
    {
        cout << "Public key is not valid!";
        return 0;
    }


    return 0;
}