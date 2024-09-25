#include <iostream>
using namespace std;

int main()
{
	
	int n, nilai_total = 0;
	
	cout << "Banyak nilai: ";
	cin >> n;
	
	int nilai[n];
	
	for (int i = 0; i<n; i++ )
	{
		cout << "Nilai ka-" << i + 1 << ": ";
		cin >> nilai[i];
	
		nilai_total+= nilai[i];
	}
	
	cout << "Jumlah semua nilai: " << nilai_total << endl;
	
	return 0;
	
	
	
}
