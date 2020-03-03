#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(int);
void showVector(vector<int>);
int dotProduct(vector<int>,vector<int>);

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}

//Write Definition of randomVector() showVector() and dotProduct() here

vector<int> randomVector(int N)
{
	vector<int> vec1(N);
	vector<int> vec2(N);

	for (int i = 0; i < N; i++)
	{
		vec1[i] = rand()%10;
	}
	for (int j = 0; j < N; j++)
	{
		vec2[j] = rand()%10;
	}

	return vec1,vec2; 
}


void showVector(vector<int> q)
{
	cout << "[ ";
	for (int i = 0; i < q.size(); i++)
	{
		cout << q[i] << " ";
	}
	cout << "]";
}


int dotProduct(vector<int> x,vector<int> y)
{
	int sum = 0;
	for (int i = 0; i < x.size(); i++)
	{	
		sum += x[i]*y[i];	
	}
	return sum;
}

