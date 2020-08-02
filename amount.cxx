#include <iostream>
#include <random>

using namespace std;

double generateAmount()
{
	random_device rd;
	mt19937 rng(rd());
	uniform_real_distribution<double> dist(0.0, 2.0);
	
	double amount = dist(rng);
	return amount;
}
