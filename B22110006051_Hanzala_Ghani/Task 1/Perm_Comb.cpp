#include <iostream>
using namespace std;

class Perm_Comb
{
public:
    void generateCombinations(char *arr, int n, int r)
    {
        cout << "Combinations of length(r) " << r << ":" << endl;
        char comb[r];                             // Temporary array to hold each combination
        combinationHelper(arr, comb, n, r, 0, 0); // passing orig arr, temp arr, n , r, index, start
        cout << endl;
    }

    void generatePermutations(char *arr, int n, int r)
    {
        cout << "Permutations of length(r) " << r << ":" << endl;
        permutationHelper(arr, n, 0, r);
        cout << endl;
    }

private:
    void combinationHelper(char *arr, char *comb, int n, int r, int index, int start)
    {
        // index use as the index of temporary array
        if (index == r)
        { // Base case: combination of length r is ready
            cout << "{ ";
            for (int i = 0; i < r; i++)
                cout << comb[i] << " ";
            // The original version is a single-line loop where ONLY ONE statement follows the loop condition, so {} brackets are optional. Normal one & this both same
            cout << "}" << endl;
            return;
        }
        for (int i = start; i < n; i++)
        {
            comb[index] = arr[i];                                 // Include arr[i] in the current combination
            combinationHelper(arr, comb, n, r, index + 1, i + 1); // Recurse with next element
        }
    }

    void permutationHelper(char *arr, int n, int start, int r)
    {
        if (start == r)
        { // Base case: permutation of length r is ready
            cout << "{ ";
            for (int i = 0; i < r; i++)
                cout << arr[i] << " ";
            cout << "}" << endl;
            return;
        }
        for (int i = start; i < n; i++)
        {
            swap(arr[start], arr[i]);                // Swap to place arr[i] at the start index
            permutationHelper(arr, n, start + 1, r); // Recurse with next position
            swap(arr[start], arr[i]);                // Swap back to restore original array, taakey new iteration jo shuru ho wo original pr hi ho
        }
    }
};

int main()
{
    char arr[] = {'A', 'B', 'C'};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Number of elements in the provided array are: " << n << endl;

    Perm_Comb pc;
    for (int r = 1; r <= n; r++)
    {
        pc.generateCombinations(arr, n, r); 
    }
    for (int r = 1; r <= n; r++)
    {
        pc.generatePermutations(arr, n, r); 
    }

    return 0;
}
