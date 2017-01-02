#include <iostream>
#include <iomanip>
using namespace std;
long double CmToM(long double x)
{
	x = x*0.01;
	return x;
}
long double KmToM(long double x)
{
	x = x * 1000;
	return x;
}
long double MiToM(long double x)
{
	x = x * 1609.344;
	return x;
}
long double FtToM(long double x)
{
	x = x * 0.3048;
	return x;
}
long double InToM(long double x)
{
	x = x*0.0254;
	return x;
}
long double MmToM(long double x)
{
	x = x*0.001;
	return x;
}
long double YdToM(long double x)
{
	x = x*0.9144002494;
	return x;
}
long double MToCm(long double x)
{
	x = x * 100;
	return x;
}
long double MToKm(long double x)
{
	x = x*0.001;
	return x;
}
long double MToMi(long double x)
{
	x = x*0.00062;
	return x;
}
long double MToFt(long double x)
{
	x = x*3.280839;
	return x;
}
long double MToIn(long double x)
{
	x = x*39.370078;
	return x;
}
long double MToMm(long double x)
{
	x = x * 1000;
	return x;
}
long double MToYd(long double x)
{
	x = x*1.093613;
	return x;
}
int main()
{
	int option,ok=1,option1,option2;
	long double x;
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
			cout << "1.Metri\n";
			cout << "2.Centimetri\n";
			cout << "3.Kilometri\n";
			cout << "4.Milimetri\n";
			cout << "5.Mile\n";
			cout << "6.Picioare(Feets)\n";
			cout << "7.Inch\n";
			cout << "8.Yard\n";
			cin >> option1;
			switch (option1)
			{
			case 1:
				system("cls");
				cout << "Alege unitatea de masura in care vrei sa transformi:\n";
				cout << "1.Centimetri\n";
				cout << "2.Kilometri\n";
				cout << "3.Milimetri\n";
				cout << "4.Mile\n";
				cout << "5.Picioare(Feets)\n";
				cout << "6.Inch\n";
				cout << "7.Yard\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii = " << fixed << setprecision(6) << MToCm(x) << " centimetrii\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii = " << fixed << setprecision(6) << MToKm(x) << " kilometrii\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii = " << fixed << setprecision(6) << MToMm(x) << " milimetrii\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii = " << fixed << setprecision(6) << MToMi(x) << " mile\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii = " << fixed << setprecision(6) << MToFt(x) << " picioare\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii = " <<fixed<<setprecision(6)<< MToIn(x) << " inch\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii = " << fixed << setprecision(6) << MToYd(x) << " yard\n";
					break;
				default:
					system("cls");
					cout << "alegere incorecta" << endl;
					break;
				}
				break;
			case 2:
				system("cls");
				cout << "Alege unitatea de masura in care vrei sa transformi:\n";
				cout << "1.Metri\n";
				cout << "2.Kilometri\n";
				cout << "3.Milimetri\n";
				cout << "4.Mile\n";
				cout << "5.Picioare(Feets)\n";
				cout << "6.Inch\n";
				cout << "7.Yard\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " centimetrii = " << fixed << setprecision(6) << CmToM(x) << " metrii\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " centimetrii = " << fixed << setprecision(6) << CmToM(MToKm(x)) << " kilometrii\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " centimetrii = " << fixed << setprecision(6) << CmToM(MToMm(x)) << " milimetrii\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " centimetrii = " << fixed << setprecision(6) << CmToM(MToMi(x)) << " mile\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " centimetrii = " << fixed << setprecision(6) << CmToM(MToFt(x)) << " picioare\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " centimetrii = " << fixed << setprecision(6) << CmToM(MToIn(x)) << " inch\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " centimetrii = " << fixed << setprecision(6) << CmToM(MToYd(x)) << " yard\n";
					break;
				default:
					system("cls");
					cout << "alegere incorecta" << endl;
					break;
				}
				break;
			case 3:
				cout << "Alege unitatea de masura in care vrei sa transformi:\n";
				cout << "1.Metri\n";
				cout << "2.Centimetri\n";
				cout << "3.Milimetri\n";
				cout << "4.Mile\n";
				cout << "5.Picioare(Feets)\n";
				cout << "6.Inch\n";
				cout << "7.Yard\n";
				break;
			case 4:
				cout << "Alege unitatea de masura in care vrei sa transformi:\n";
				cout << "1.Metri\n";
				cout << "2.Centimetri\n";
				cout << "3.Kilometri\n";
				cout << "4.Mile\n";
				cout << "5.Picioare(Feets)\n";
				cout << "6.Inch\n";
				cout << "7.Yard\n";
				break;
			case 5:
				cout << "Alege unitatea de masura in care vrei sa transformi:\n";
				cout << "1.Metri\n";
				cout << "2.Centimetri\n";
				cout << "3.Kilometri\n";
				cout << "4.Milimetri\n";
				cout << "5.Picioare(Feets)\n";
				cout << "6.Inch\n";
				cout << "7.Yard\n";
				break;
			case 6:
				cout << "Alege unitatea de masura in care vrei sa transformi:\n";
				cout << "1.Metri\n";
				cout << "2.Centimetri\n";
				cout << "3.Kilometri\n";
				cout << "4.Milimetri\n";
				cout << "5.Mile\n";
				cout << "6.Inch\n";
				cout << "7.Yard\n";
				break;
			case 7:
				cout << "Alege unitatea de masura in care vrei sa transformi:\n";
				cout << "1.Metri\n";
				cout << "2.Centimetri\n";
				cout << "3.Kilometri\n";
				cout << "4.Milimetri\n";
				cout << "5.Mile\n";
				cout << "6.Picioare(Feets)\n";
				cout << "7.Yard\n";
				break;
			case 8:
				cout << "Alege unitatea de masura in care vrei sa transformi:\n";
				cout << "1.Metri\n";
				cout << "2.Centimetri\n";
				cout << "3.Kilometri\n";
				cout << "4.Milimetri\n";
				cout << "5.Mile\n";
				cout << "6.Picioare(Feets)\n";
				cout << "7.Inch\n";
				break;
			default:
				system("cls");
				cout << "alegere incorecta" << endl;
				break;
			}
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

