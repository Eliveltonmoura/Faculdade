#include <iostream>
#include <string>
#include <vector>
using namespace std;

void show(vector<string> mat)
{
    for (auto linha : mat)
        cout << linha << "\n";
}

void tocar_fogo(vector<string> &mat, int lp, int cp)
{
    int nl = mat.size();
    int nc = mat[0].size();

    if ((lp < 0) || (lp >= nl) || (cp < 0) || (cp >= nc))

        return;
    if (mat[lp][cp] != '#')

        return;

    mat[lp][cp] = 'o';
    // show(mat);

    tocar_fogo(mat, lp, cp - 1);
    tocar_fogo(mat, lp - 1, cp);
    tocar_fogo(mat, lp, cp + 1);
    tocar_fogo(mat, lp + 1, cp);
}

int main()
{
    int nl = 0, nc = 0, lfire = 0, cfire = 0;
    cin >> nl >> nc >> lfire >> cfire;
    // string *mat = new string[nl];
    vector<string> mat;
    for (int l = 0; l < nl; l++)
    {
        string line;
        cin >> line;
        mat.push_back(line);
        // mat[l] = line;
    }
    tocar_fogo(mat, lfire, cfire);
    show(mat);
    //  delete[] mat;
}