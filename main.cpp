#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int row1,col1,row2,col2;
    cout << "========= Multiple Matrix ========="<<endl;
    cout << "input row of matrix 1 = ";cin >> row1;
    cout << "input column of matrix 1 = ";cin >> col1;
    cout << "input row of matrix 2 = ";cin >> row2;
    cout << "input column of matrix 2 = ";cin >> col2;
    float mat1[row1][col1],mat2[row2][col2];
    float result;
    cout << "========= Insert Matrix Value ===========\n";
    cout << "====> Matrix 1 \n";
    for(int r = 0;r<row1;r++){
        for(int c = 0;c<col1;c++){
            cout<< "Input Value of matrix 1 row"<<r+1<<" column"<< c+1<<" = ";cin>>mat1[r][c];
        }
    }
    cout << "====> Matrix 2 \n";
    for(int r = 0;r<row2;r++){
        for(int c = 0;c<col2;c++){
            cout<< "Input Value of matrix 2 row"<<r+1<<" column"<< c+1<<" = ";cin>>mat2[r][c];
        }
    }
    //Multiple Martrix
    cout << "============= Result ============="<<endl;
    for(int r1 = 0 ; r1 < row1;r1++){
		for(int c2 = 0; c2 <col2;c2++){
			result = 0;
			for(int c1 = 0 ; c1 < col1;c1++){
				result = result + (mat1[r1][c1] * mat2[c1][c2]);
			}
			cout << result << " ";
		}
		cout << endl;
	}
    return 0;
}
