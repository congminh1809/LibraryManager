// LibraryManager.cpp 
//

#include <iostream>
//#include"CDocGia.h"
#include"CDocGiaTreEM.h"
#include"CDocGiaNguoiLon.h"
using namespace std;

int main()
{
    CDocGiaNguoiLon* x = new CDocGiaNguoiLon;
    cout << endl << "Nhap thong tin: ";
    x->Input();
    cout << endl << "Xuat: ";
    x->Output();
    cout << endl;
    cout << (size_t) x->TinhTienLamThe();
    cout << endl;
    cout << endl;
    system("pause");
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


