#include <iostream>
#include <fstream>
using namespace std;

void Nhap(string, int[], int &);
void Xuat(int[], int);

int main()
{
    return 0;
}
void Nhap(string filename, int a[], int &n)
{
    ifstream fi(filename);
    fi >> n;
    for (int i = 0; i < n; i++)
        fi >> a[i];
}