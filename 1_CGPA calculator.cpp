// to calculate CGPI 
#include <iostream>
using namespace std;

int main()
{
    string sub[30];
    int marks[30];
    int credit[30];
    int n;
    cout << "Enter number of subjects in your course : ";
    cin >> n;

    cout << endl;
    cout << "Enter name of all subjects " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> sub[i];
    }

    cout << "Enter marks(out of 100) for each subjects " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (marks[i] > 100)
        {
            cout << "marks for " << i + 1 << " term is invalid , check it";
        }
    }

    cout << "Enter credit for each subjects " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> credit[i];
    }

    int totalc = 0;
    for (int i = 0; i < n; i++)
    {
        totalc += credit[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (marks[i] > 85 && marks[i] < 100)
            marks[i] = 10;
        else if (marks[i] > 70)
            marks[i] = 9;
        else if (marks[i] > 60)
            marks[i] = 8;
        else if (marks[i] > 50)
            marks[i] = 7;
        else if (marks[i] > 45)
            marks[i] = 6;
        else if (marks[i] > 40)
            marks[i] = 5;
        else if (marks[i] > 30)
            marks[i] = 4;
        else
            marks[i] = 0;
    }

    int subgp = 0;
    for (int i = 0; i < n; i++)
    {
        subgp += marks[i] * credit[i];
    }

    cout << "CGPI Total :" << subgp << endl;

    float cgpi = (float)(subgp) / (float)(totalc);

    cout << "Your CGPI is : " << cgpi;

    return 0;
}
