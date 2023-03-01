#include <iostream>

using namespace std;

class DonThuc
{
public:
    double heSo;
    double soMu;
public:
    DonThuc(double heSo, double soMu) {
        this->heSo = heSo;
        this->soMu = soMu;
    }

    //Định nghĩa toán tử *
    DonThuc operator*(const DonThuc &other) {
        return DonThuc(this->heSo * other.heSo, this->soMu + other.soMu);
    }

    DonThuc tinhDaoHam() {
        return DonThuc(this->heSo * this->soMu, this->soMu - 1);
    }

    DonThuc tinhDaoHamCapK(int k) {
        DonThuc temp = DonThuc(heSo, soMu);

        for(int i = 1; i <= k; i++) temp = temp.tinhDaoHam();

        return temp;
    }

    //định nghĩa toán tử /
    DonThuc operator/(const DonThuc &other) {
        return DonThuc(this->heSo / other.heSo, this->soMu - other.soMu);
    }
};


int main() {
    //Thực hiện phép nhân đa thức
    DonThuc res = DonThuc(1, 3) * DonThuc(3, 2);
    cout << res.heSo << "x^" << res.soMu << endl;
    
    //Tính đạo hàm cấp 1 đơn thức
    DonThuc res1 = DonThuc(3, 6);
    res1 = res1.tinhDaoHam();
    cout << res1.heSo << "x^" << res1.soMu << endl;

    //Tính đạo hàm cấp k đơn thức
    DonThuc res2 = DonThuc(2, 6);
    res2 = res2.tinhDaoHamCapK(3);
    cout << res2.heSo << "x^" << res2.soMu << endl;

    return 0;
}