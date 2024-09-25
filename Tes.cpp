#include <iostream>
using namespace std;

int main()
{
	
	int i, n, jumlah;
	
	cout << "Batas Awal: ";
	cin >> i;	
	cout << "Batas akhir: ";
	cin >> n;
	
	for (i; i<=n; i++)
	
	if (i%2 == 0)
	{
		cout << i << " ";
		jumlah += i;
	}
	i+=2;
	cout << endl;
	cout << "Jumlah: " << jumlah;
}
