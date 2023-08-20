
// programe to show student  name with depaartment
#include <iostream>
using namespace std;

int main()
{
    int max_std, len1, i, j, k;
    cout << "\nEnter number of students: ";
    cin >> max_std;
    bool is_std_name = true;

    char arr[max_std][2][100];

    for (i = 0; i < max_std; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (is_std_name)
            {
                cout << "\nEnter length of student[" << i + 1 << "] name: ";
                cin >> len1;
                cout << "Enter student[" << i + 1 << "] name: ";
                for (k = 0; k < len1; k++)
                {
                    cin >> arr[i][j][k];
                }
                arr[i][j][k] = '\0';
                is_std_name = false;
            }
            else
            {
                cout << "Enter student[" << i + 1 << "] dept code(3 char only): ";
                for (k = 0; k < 3; k++)
                {
                    cin >> arr[i][j][k];
                }
                arr[i][j][k] = '\0';

                is_std_name = true;
            }
        }
    }
    cout << "\n\nDisplaying Student's Details :" << endl
         << endl;
    for (int i = 0; i < max_std; i++)
    {
        cout << "student[" << i + 1 << "] name and department is: ";
        for (int j = 0; j < 2; j++)
        {
            if (is_std_name)
            {

                cout << arr[i][j] << " and ";
                is_std_name = false;
            }
            else
            {
                cout << arr[i][j];
                is_std_name = true;
            }
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
