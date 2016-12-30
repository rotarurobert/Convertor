#include <iostream>
using namespace std;
float CmToM(float x)
{
	x = x*0.01;
	return x;
}
float KmToM(float x)
{
	x = x * 1000;
	return x;
}
float MiToM(float x)
{
	x = x * 1609.344;
	return x;
}
float FtToM(float x)
{
	x = x * 0.3048;
	return x;
}
float InToM(float x)
{
	x = x*0.0254;
	return x;
}
float MmToM(float x)
{
	x = x*0.001;
	return x;
}
float YdToM(float x)
{
	x = x*0.9144002494;
	return x;
}
float MToCm(float x)
{
	x = x * 100;
	return x;
}
float MToKm(float x)
{
	x = x*0.001;
	return x;
}
float MtoMi(float x)
{
	x = x*0.00062;
	return x;
}
float MToFt(float x)
{
	x = x*3.280839;
	return x;
}
float MToIn(float x)
{
	x = x*39.370078;
	return x;
}
float MToMm(float x)
{
	x = x * 1000;
	return x;
}
float MToYd(float x)
{
	x = x*1.093613;
	return x;
}
int main()
{
	int option,ok=1;
	while (ok)
	{
		cout << "1.Lungime" << endl;
		cout << "2.Arie" << endl;
		cout << "3.Volum" << endl;
		cout << "4.Timp" << endl;
		cout << "5.Viteza" << endl;
		cout << "6.Temperatura" << endl;
		cout << "7.Masa" << endl;
		cout << "8.Energie" << endl;
		cout << "9.Presiune" << endl;
		cout << "10.Densitate" << endl;
		cout << "11.Consum combustibil" << endl;
		cin >> option;
		switch (option)
		{
		case 1:
			system("cls");
			cout << "Lungime" << endl;
			cout << "Alege unitatea de masura:" << endl;
			break;
		case 2:
			system("cls");
			cout << "Arie" << endl;
			break;
		case 3:
			system("cls");
			cout << "Volum" << endl;
			break;
		case 4:
			system("cls");
			cout << "Timp" << endl;
			break;
		case 5:
			system("cls");
			cout << "Viteza" << endl;
			break;
		case 6:
			system("cls");
			cout << "Temperatura" << endl;
			break;
		case 7:
			system("cls");
			cout << "Masa" << endl;
			break;
		case 8:
			system("cls");
			cout << "Energie" << endl;
			break;
		case 9:
			system("cls");
			cout << "Presiune" << endl;
			break;
		case 10:
			system("cls");
			cout << "Densitate" << endl;
			break;
		case 11:
			system("cls");
			cout << "Consum combustibil" << endl;
			break;
		default:
			system("cls");
			cout << "alegere incorecta" << endl;
			break;
		}
		ok = 0;
	}
	system("pause");
	return 0;
}

