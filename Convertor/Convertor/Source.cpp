#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;
typedef std::numeric_limits<double> dbl;
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
	x = x*39.37007874015748;
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
long double ArToM2(long double x)
{
	x = x * 100;
	return x;
}
long double AcToM2(long double x)
{
	x = x*4046.856119;
	return x;
}
long double Cm2ToM2(long double x)
{
	x = x*0.0001;
	return x;
}
long double Ft2ToM2(long double x)
{
	x = x*0.0929;
	return x;
}
long double HaToM2(long double x)
{
	x = x * 10000;
	return x;
}
long double In2ToM2(long double x)
{
	x = x*0.0006452;
	return x;
}
long double Km2ToM2(long double x)
{
	x = x * 1000000;
	return x;
}
long double Mm2ToM2(long double x)
{
	x = x*0.000001;
	return x;
}
long double Yd2ToM2(long double x)
{
	x = x*0.836127816;
	return x;
}
int main()
{
	int option,ok=1,option1,option2,option3;
	long double x;
	cout.precision(dbl::max_digits10);
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
			cout << "Alege unitatea de masura:\n";
			cout << "1.Metri\n";
			cout << "2.Centimetri\n";
			cout << "3.Kilometri\n";
			cout << "4.Milimetri\n";
			cout << "5.Mile\n";
			cout << "6.Picioare(Feet)\n";
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
				cout << "5.Picioare(Feet)\n";
				cout << "6.Inch\n";
				cout << "7.Yard\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii = " << MToCm(x) << " centimetrii\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii = " << MToKm(x) << " kilometrii\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii = " << MToMm(x) << " milimetrii\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii = " << MToMi(x) << " mile\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii = " << MToFt(x) << " picioare\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii = " << MToIn(x) << " inch\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii = " << MToYd(x) << " yard\n";
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
				cout << "5.Picioare(Feet)\n";
				cout << "6.Inch\n";
				cout << "7.Yard\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " centimetrii = " << CmToM(x) << " metrii\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " centimetrii = " << CmToM(MToKm(x)) << " kilometrii\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " centimetrii = " << CmToM(MToMm(x)) << " milimetrii\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " centimetrii = " << CmToM(MToMi(x)) << " mile\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " centimetrii = " << CmToM(MToFt(x)) << " picioare\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " centimetrii = " << CmToM(MToIn(x)) << " inch\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " centimetrii = " << CmToM(MToYd(x)) << " yard\n";
					break;
				default:
					system("cls");
					cout << "alegere incorecta" << endl;
					break;
				}
				break;
			case 3:
				system("cls");
				cout << "Alege unitatea de masura in care vrei sa transformi:\n";
				cout << "1.Metri\n";
				cout << "2.Centimetri\n";
				cout << "3.Milimetri\n";
				cout << "4.Mile\n";
				cout << "5.Picioare(Feet)\n";
				cout << "6.Inch\n";
				cout << "7.Yard\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilometrii = " << KmToM(x) << " metrii\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilometrii = " << KmToM(MToCm(x)) << " centimetrii\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilometrii = " << KmToM(MToMm(x)) << " milimetrii\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilometrii = " << KmToM(MToMi(x)) << " mile\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilometrii = " << KmToM(MToFt(x)) << " picioare\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilometrii = " << KmToM(MToIn(x)) << " inch\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilometrii = " << KmToM(MToYd(x)) << " yard\n";
					break;
				default:
					system("cls");
					cout << "alegere incorecta" << endl;
					break;
				}
				break;
			case 4:
				system("cls");
				cout << "Alege unitatea de masura in care vrei sa transformi:\n";
				cout << "1.Metri\n";
				cout << "2.Centimetri\n";
				cout << "3.Kilometri\n";
				cout << "4.Mile\n";
				cout << "5.Picioare(Feet)\n";
				cout << "6.Inch\n";
				cout << "7.Yard\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " milimetrii = " << MmToM(x) << " metrii\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " milimetrii = " << MmToM(MToCm(x)) << " centimetrii\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " milimetrii = " << MmToM(MToKm(x)) << " kilometrii\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " milimetrii = " << MmToM(MToMi(x)) << " mile\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " milimetrii = " << MmToM(MToFt(x)) << " picioare\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " milimetrii = " << MmToM(MToIn(x)) << " inch\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " milimetrii = " << MmToM(MToYd(x)) << " yard\n";
					break;
				default:
					system("cls");
					cout << "alegere incorecta" << endl;
					break;
				}
				break;
			case 5:
				system("cls");
				cout << "Alege unitatea de masura in care vrei sa transformi:\n";
				cout << "1.Metri\n";
				cout << "2.Centimetri\n";
				cout << "3.Kilometri\n";
				cout << "4.Milimetri\n";
				cout << "5.Picioare(Feet)\n";
				cout << "6.Inch\n";
				cout << "7.Yard\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " mile = " << MiToM(x) << " metrii\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " mile = " << MiToM((x)) << " centimetrii\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " mile = " << MiToM(MToKm(x)) << " kilometrii\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " mile = " << MiToM(MToMm(x)) << " milimetrii\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " mile = " << MiToM(MToFt(x)) << " picioare\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " mile = " << MiToM(MToIn(x)) << " inch\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " mile = " << MiToM(MToYd(x)) << " yard\n";
					break;
				default:
					system("cls");
					cout << "alegere incorecta" << endl;
					break;
				}
				break;
			case 6:
				system("cls");
				cout << "Alege unitatea de masura in care vrei sa transformi:\n";
				cout << "1.Metri\n";
				cout << "2.Centimetri\n";
				cout << "3.Kilometri\n";
				cout << "4.Milimetri\n";
				cout << "5.Mile\n";
				cout << "6.Inch\n";
				cout << "7.Yard\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " picioare = " << FtToM(x) << " metrii\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " picioare = " << FtToM(MToCm(x)) << " centimetrii\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " picioare = " << FtToM(MToKm(x)) << " kilometrii\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " picioare = " << FtToM(MToMm(x)) << " milimetrii\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " picioare = " << FtToM(MToMi(x)) << " mile\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " picioare = " << FtToM(MToIn(x)) << " inch\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " picioare = " << FtToM(MToYd(x)) << " yard\n";
					break;
				default:
					system("cls");
					cout << "alegere incorecta" << endl;
					break;
				}
				break;
			case 7:
				system("cls");
				cout << "Alege unitatea de masura in care vrei sa transformi:\n";
				cout << "1.Metri\n";
				cout << "2.Centimetri\n";
				cout << "3.Kilometri\n";
				cout << "4.Milimetri\n";
				cout << "5.Mile\n";
				cout << "6.Picioare(Feet)\n";
				cout << "7.Yard\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " inch = " << InToM(x) << " metrii\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " inch = " << InToM(MToCm(x)) << " centimetrii\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " inch = " << InToM(MToKm(x)) << " kilometrii\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " inch = " << InToM(MToMm(x)) << " milimetrii\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " inch = " << InToM(MToMi(x)) << " mile\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " inch = " << InToM(MToFt(x)) << " picioare\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " inch = " << InToM(MToYd(x)) << " yard\n";
					break;
				default:
					system("cls");
					cout << "alegere incorecta" << endl;
					break;
				}
				break;
			case 8:
				system("cls");
				cout << "Alege unitatea de masura in care vrei sa transformi:\n";
				cout << "1.Metri\n";
				cout << "2.Centimetri\n";
				cout << "3.Kilometri\n";
				cout << "4.Milimetri\n";
				cout << "5.Mile\n";
				cout << "6.Picioare(Feet)\n";
				cout << "7.Inch\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " yard = " << YdToM(x) << " metrii\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " yard = " << YdToM(MToCm(x)) << " centimetrii\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " yard = " << YdToM(MToKm(x)) << " kilometrii\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " yard = " << YdToM(MToMm(x)) << " milimetrii\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " yard = " << YdToM(MToMi(x)) << " mile\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " yard = " << YdToM(MToFt(x)) << " picioare\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " yard = " << YdToM(MToIn(x)) << " inch\n";
					break;
				default:
					system("cls");
					cout << "alegere incorecta" << endl;
					break;
				}
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
			cout << "Alege unitatea de masura:\n";
			break;
		case 3:
			system("cls");
			cout << "Volum" << endl;
			cout << "Alege unitatea de masura:\n";
			break;
		case 4:
			system("cls");
			cout << "Timp" << endl;
			cout << "Alege unitatea de masura:\n";
			break;
		case 5:
			system("cls");
			cout << "Viteza" << endl;
			cout << "Alege unitatea de masura:\n";
			break;
		case 6:
			system("cls");
			cout << "Temperatura" << endl;
			cout << "Alege unitatea de masura:\n";
			break;
		case 7:
			system("cls");
			cout << "Masa" << endl;
			cout << "Alege unitatea de masura:\n";
			break;
		case 8:
			system("cls");
			cout << "Energie" << endl;
			cout << "Alege unitatea de masura:\n";
			break;
		case 9:
			system("cls");
			cout << "Presiune" << endl;
			cout << "Alege unitatea de masura:\n";
			break;
		case 10:
			system("cls");
			cout << "Densitate" << endl;
			cout << "Alege unitatea de masura:\n";
			break;
		case 11:
			system("cls");
			cout << "Consum combustibil" << endl;
			cout << "Alege unitatea de masura:\n";
			break;
		default:
			system("cls");
			cout << "alegere incorecta" << endl;
			break;
		}
		cout << "Iesiti?\n";
		cout << "1.Da         2.Nu\n";
		cin >> option3;
		if (option3 == 1)
			ok = 0;
		else
			system("cls");
	}
	system("pause");
	return 0;
}

