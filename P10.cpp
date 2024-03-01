// Program 10	

#include <iostream>
using namespace std;

int main(){
	float price, discount, discountRate, total;
	cout << "Buying Price: ";
	cin >> price;
	cout << "Discount rate in percent: ";
	cin >> discount;
	discountRate = discount / 100;
	total = price - (price*discountRate);
	cout << "for buying price php "<< price << " and discount rate " << discountRate <<"\n";
}
