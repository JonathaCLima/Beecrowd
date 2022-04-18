#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float n1, n2, n3, n4;

    cin >> n1 >> n2 >> n3 >> n4;

    cout << fixed << setprecision(1);

    float average {((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10};
    cout << "Media: " << average << endl;

    if (average >= 7)
    {
        cout << "Aluno aprovado." << endl;
    }
    else if (average < 5)
    {
        cout << "Aluno reprovado." << endl;
    }
    else
    {
        float exam_score;

        cout << "Aluno em exame." << endl;
        cin >> exam_score;
        cout << "Nota do exame: " << exam_score << endl;

        float final_average {(exam_score + average) / 2};

        if (final_average >= 5)
        {
            cout << "Aluno aprovado." << endl;
        }
        else
        {
            cout << "Aluno reprovado." << endl;
        }

        cout << "Media final: " << final_average << endl;
    }

    return(0);
}