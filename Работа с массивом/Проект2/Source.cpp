#include <iostream>
using namespace std;

int main()
{
	int  m[100][100], sum1 = 0, sum = 0, sum2 = 0, sumGD = 0, sumPD = 0, sum3 = 0, f, t, asd, dsa, qwer[100], rewq[100], ma[100][100];
	bool exit = false;
	cout << "Vvedite razmer massiva:\n";
	cin >> t;
	const int n = t;
	cout << "Massiv:\n";
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			m[i][j] = rand() % 10;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			ma[i][j] = m[i][j];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << " " << m[i][j];
		}
		cout << endl;
	}

	do {
		cout << "Vibirete case : 1 - SUMMA MASSIVA; 2 - SUMMA GLAV DIAG; 3 - SUMMA Pobo4 DIAG; 4 - SUMMA PERIMITRA; 5 - zamena diaganaley; 0 - Exit:";
		cout << endl;
		cin >> f;
		switch (f)
		{
		case 1:
		{
			sum1 = 0;
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					cout << " " << m[i][j];
				}
				cout << endl;
			}
			for (int i = 0; i < n; i++)
				for (int j = 0; j < n; j++)
					sum1 = sum1 + m[i][j];
			cout << "Summa massiva:\n" << sum1 << endl;
			break;
		}
		case 2:
		{
			sumGD = 0;
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					cout << " " << m[i][j];
				}
				cout << endl;
			}
			for (int i = 0; i < n; i++)
				sumGD = sumGD + m[i][i];
			cout << "Summa glavnoy diagonali:\n" << sumGD << endl;
			break;
		}
		case 3:
		{
			sumPD = 0;
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					cout << " " << m[i][j];
				}
				cout << endl;
			}
			for (int i = 0, j = n - 1; i < n; i++, j--)
				sumPD = sumPD + m[j][i];
			cout << "Summa pobochnoy diagonali:\n" << sumPD << endl;
			break;
		}
		case 4:
		{

			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					cout << " " << m[i][j];
				}
				cout << endl;
			}
			sum1 = 0; sum2 = 0;
			for (int i = 0; i < n; i++)
				for (int j = 0; j < n; j++)
					sum1 = sum1 + m[i][j];
			for (int i = 1; i < n - 1; i++)
				for (int j = 1; j < n - 1; j++)
					sum2 = sum2 + m[i][j];
			sum3 = sum1 - sum2;
			cout << "Summa perimetra:\n" << sum3 << endl;
			break;
		}
		case 5:
		{
			sum1 = 0;
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					m[i][j] = m[i][j];
					cout << " " << m[i][j];
				}
				cout << endl;
			}
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++) {
					if (i == j) {
						qwer[i] = ma[i][j];
					}
				}
			}
			for (int i = 0, j = n - 1; i < n; i++, j--) {
				rewq[i] = m[i][j];
			}
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					if (i == j) {
						asd = ma[i][j];
						ma[i][j] = rewq[i];
						rewq[i] = asd;
					}
				}
			}
			cout << "massiv s zamenen diag" << endl;
			for (int i = 0, j = n - 1; i < n; i++, j--) {
				dsa = ma[i][j];
				ma[i][j] = qwer[i];
				qwer[i] = dsa;
			}
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n; j++) {
					cout << " " << ma[i][j];
				}
				cout << endl;
			}
			break;

		}
		case 0:
		{
			exit = true;
			break;
		}
		default:
			cout << "net deistvia" << endl;
		}
	} while (!exit);

	system("pause");
	return 0;
}