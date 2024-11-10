#include <iostream>
using namespace std;

class RC_Major
{
public:
    // Row-Major Approach in N-Dimensional Array
    void n_dimension_row_approach(int total_dim, int I[], int S[])
    {
        cout << "\nRow-Major Approach in N-Dimensional Array:\n";
        int slot = 0;

        for (int i = 0; i < total_dim; i++)
        {
            int prod = 1;

            for (int j = i + 1; j < total_dim; j++)
            {
                prod *= S[j];
            }

            slot += I[i] * prod;
        }

        cout << "Calculated Slot: " << slot << endl;
    }

    // Column-Major Approach in N-Dimensional Array
    void n_dimension_col_approach(int total_dim, int I[], int S[])
    {
        cout << "\nColumn-Major Approach in N-Dimensional Array:\n";
        int slot = 0;

        for (int i = 0; i < total_dim; i++)
        {
            int prod = 1;

            for (int j = 0; j < i; j++)
            {
                prod *= S[j];
            }

            slot += I[i] * prod;
        }

        cout << "Calculated Slot: " << slot << endl;
    }
};

int main()
{
    RC_Major obj;
    int total_dim = 3;   // Creating 3D array
    int I[] = {1, 2, 0}; // Want to access index 1 of D1, index2 of D2 & index 0 of D3
    int S[] = {3, 3, 3}; // Providing size of each dimension

    cout << "N-Dimensional-Array:\n";
    obj.n_dimension_row_approach(total_dim, I, S);
    obj.n_dimension_col_approach(total_dim, I, S);

    return 0;
}

// Row-Major Approach in N-Dimensional Array:
// From Left Hand Side(D3,D2,D1)
// D3 ki 1 val mein 9 variation, D2 ki 1 value key liye D1 ki 3 variation, or D1 key liye sirf 1 var:
//  1*9 + 2*3 + 0*1 => 15        Slot = Io * (S1 * S2) + I1 * S2 + I2
// Col-Major Approach in N-Dimensional Array:
// From Left Hand Side(D3,D2,D1)
// D3 ki 1 val mein 1 variation, D2 ki 1 value key liye D1 ki 3 variation, or D1 key liye sirf 9 var:
//  1*1 + 2*3 + 0*9 => 7          Slot = I2 + l1*S2 + Io * (S1*S2)
