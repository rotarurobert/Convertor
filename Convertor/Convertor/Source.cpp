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
long double M2ToAr(long double x)
{
	x = x*0.01;
	return x;
}
long double M2ToAc(long double x)
{
	x = x*0.00024710539999309525;
	return x;
}
long double M2ToCm2(long double x)
{
	x = x * 10000;
	return x;
}
long double M2ToFt2(long double x)
{
	x = x*10.764262648008613;
	return x;
}
long double M2ToHa(long double x)
{
	x = x*0.0001;
	return x;
}
long double M2ToIn2(long double x)
{
	x = x*1549.9070055796653;
	return x;
}
long double M2ToKm2(long double x)
{
	x = x*0.000001;
	return x;
}
long double M2ToMm2(long double x)
{
	x = x * 1000000;
	return x;
}
long double M2ToYd2(long double x)
{
	x = x*1.195989394042597;
	return x;
}
long double ClToM3(long double x)
{
	x = x*0.00001;
	return x;
}
long double Cm3ToM3(long double x)
{
	x = x*0.000001;
	return x;
}
long double Dm3ToM3(long double x)
{
	x = x*0.001;
	return x;
}
long double Ft3ToM3(long double x)
{
	x = x*0.02832;
	return x;
}
long double GToM3(long double x)
{
	x = x*0.003785;
	return x;
}
long double In3ToM3(long double x)
{
	x = x*0.000016387064;
	return x;
}
long double Yd3ToM3(long double x)
{
	x = x*0.76456;
	return x;
}
long double DlToM3(long double x)
{
	x = x*0.0001;
	return x;
}
long double M3ToCl(long double x)
{
	x = x * 100000;
	return x;
}
long double M3ToCm3(long double x)
{
	x = x * 1000000;
	return x;
}
long double M3ToDl(long double x)
{
	x = x * 10000;
	return x;
}
long double M3ToDm3(long double x)
{
	x = x * 1000;
	return x;
}
long double M3ToFt3(long double x)
{
	x = x*35.31073446327684;
	return x;
}
long double M3ToG(long double x)
{
	x = x*264.2007926023778;
	return x;
}
long double M3ToIn3(long double x)
{
	x = x*61023.74409473229;
	return x;
}
long double M3ToYd3(long double x)
{
	x = x*1.3079418227477242;
	return x;
}
long double SToMin(long double x)
{
	x = x*0.016666666666666666;
	return x;
}
long double SToH(long double x)
{
	x = x*0.0002777777777777778;
	return x;
}
long double SToD(long double x)
{
	x = x*0.000011574074074074073;
	return x;
}
long double SToW(long double x)
{
	x = x*0.0000016534391534391535;
	return x;
}
long double SToM(long double x)
{
	x = x*0.000000380517503805175;
	return x;
}
long double SToY(long double x)
{
	x = x*0.000000031709791983764586;
	return x;
}
long double SToMs(long double x)
{
	x = x * 1000;
	return x;
}
long double YToS(long double x)
{
	x = x * 31536000;
	return x;
}
long double MToS(long double x)
{
	x = x * 2628000;
	return x;
}
long double WToS(long double x)
{
	x = x * 604800;
	return x;
}
long double DToS(long double x)
{
	x = x * 86400;
	return x;
}
long double HToS(long double x)
{
	x = x * 3600;
	return x;
}
long double MinToS(long double x)
{
	x = x * 60;
	return x;
}
long double MsToS(long double x)
{
	x = x*0.001;
	return x;
}
long double FthToMs(long double x)
{
	x = x*0.000084667;
	return x;
}
long double KmhToMs(long double x)
{
	x = x*0.27777778;
	return x;
}
long double MhToMs(long double x)
{
	x = x*0.000277778;
	return x;
}
long double MphToMs(long double x)
{
	x = x*0.44704;
	return x;
}
long double YdhToMs(long double x)
{
	x = x*0.000254;
	return x;
}
long double MsToFth(long double x)
{
	x = x*11810.977122137316;
	return x;
}
long double MsToKmh(long double x)
{
	x = x*3.5999999712000004;
	return x;
}
long double MsToMh(long double x)
{
	x = x*3599.9971200023037;
	return x;
}
long double MsToMph(long double x)
{
	x = x*2.2369362920544025;
	return x;
}
long double MsToYdh(long double x)
{
	x = x*3937.0078740157483;
	return x;
}
long double GToKg(long double x)
{
	x = x*0.001;
	return x;
}
long double LbToKg(long double x)
{
	x = x*0.453592;
	return x;
}
long double MgToKg(long double x)
{
	x = x*0.000001;
	return x;
}
long double OzToKg(long double x)
{
	x = x*0.0283495;
	return x;
}
long double SToKg(long double x)
{
	x = x*14.593903;
	return x;
}
long double TToKg(long double x)
{
	x = x * 1000;
	return x;
}
long double KgToG(long double x)
{
	x = x * 1000;
	return x;
}
long double KgToLb(long double x)
{
	x = x*2.2046244201837775;
	return x;
}
long double KgToMg(long double x)
{
	x = x * 1000000;
	return x;
}
long double KgToOz(long double x)
{
	x = x*35.27399072294044;
	return x;
}
long double KgToS(long double x)
{
	x = x*0.06852176556196105;
	return x;
}
long double KgToT(long double x)
{
	x = x*0.001;
	return x;
}
long double JToKj(long double x)
{
	x = x*0.001;
	return x;
}
long double JToCal(long double x)
{
	x = x*0.23884589662749595;
	return x;
}
long double JToKcal(long double x)
{
	x = x*0.00023884589662749592;
	return x;
}
long double JToWh(long double x)
{
	x = x*0.0002777777777777778;
	return x;
}
long double JToKwh(long double x)
{
	x = x/ 3600000;
	return x;
}
long double JToFlb(long double x)
{
	x = x*0.7375621492772656;
	return x;
}
long double KjToJ(long double x)
{
	x = x * 1000;
	return x;
}
long double CalToJ(long double x)
{
	x = x*4.1868;
	return x;
}
long double KcalToJ(long double x)
{
	x = x*4186.8;
	return x;
}
long double WhToJ(long double x)
{
	x = x * 3600;
	return x;
}
long double KwhToJ(long double x)
{
	x = x * 3600000;
	return x;
}
long double FlbToJ(long double x)
{
	x = x*1.3558179483314;
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
			cout << "1.Metru patrat\n";
			cout << "2.Ar\n";
			cout << "3.Acru\n";
			cout << "4.Centimetru patrat\n";
			cout << "5.Picior patrat\n";
			cout << "6.Hectari\n";
			cout << "7.Tol patrat(square inch)\n";
			cout << "8.Kilometru patrat\n";
			cout << "9.Milimetru patrat\n";
			cout << "10.Yard patrat\n";
			cin >> option1;
			switch (option1)
			{
			case 1:
				system("cls");
				cout << "Alege unitatea de masura in care vrei sa transformi:\n";
				cout << "1.Ar\n";
				cout << "2.Acru\n";
				cout << "3.Centimetru patrat\n";
				cout << "4.Picior patrat\n";
				cout << "5.Hectari\n";
				cout << "6.Tol patrat(square inch)\n";
				cout << "7.Kilometru patrat\n";
				cout << "8.Milimetru patrat\n";
				cout << "9.Yard patrat\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii patrati =" << M2ToAr(x) << " ari\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii patrati =" << M2ToAc(x) << " acri\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii patrati =" << M2ToCm2(x) << " centimetrii patrati\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii patrati =" << M2ToFt2(x) << " picioare patrate\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii patrati =" << M2ToHa(x) << " hectare\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii patrati =" << M2ToIn2(x) << " toli patrati\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii patrati =" << M2ToKm2(x) << " kilometrii patrati\n";
					break;
				case 8:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii patrati =" << M2ToMm2(x) << " milimetrii patrati\n";
					break;
				case 9:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii patrati =" << M2ToYd2(x) << " yarzi patrati\n";
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
				cout << "1.Metru patrat\n";
				cout << "2.Acru\n";
				cout << "3.Centimetru patrat\n";
				cout << "4.Picior patrat\n";
				cout << "5.Hectari\n";
				cout << "6.Tol patrat(square inch)\n";
				cout << "7.Kilometru patrat\n";
				cout << "8.Milimetru patrat\n";
				cout << "9.Yard patrat\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " ari =" << ArToM2(x) << " metrii patrati\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " ari" << ArToM2(M2ToAc(x)) << " acri\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " ari" << ArToM2(M2ToCm2(x)) << " centimetrii patrati\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " ari" << ArToM2(M2ToFt2(x)) << " picioare patrate\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " ari" << ArToM2(M2ToHa(x)) << " hectare\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " ari" << ArToM2(M2ToIn2(x)) << " toli patrati\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " ari" << ArToM2(M2ToKm2(x)) << " kilometrii patrati\n";
					break;
				case 8:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " ari" << ArToM2(M2ToMm2(x)) << " milimetrii patrati\n";
					break;
				case 9:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " ari" << ArToM2(M2ToYd2(x)) << " yarzi patrati\n";
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
				cout << "1.Metru patrat\n";
				cout << "2.Ar\n";
				cout << "3.Centimetru patrat\n";
				cout << "4.Picior patrat\n";
				cout << "5.Hectari\n";
				cout << "6.Tol patrat(square inch)\n";
				cout << "7.Kilometru patrat\n";
				cout << "8.Milimetru patrat\n";
				cout << "9.Yard patrat\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " acri =" << AcToM2(x) << " metrii patrati\n"; 
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " acri =" << AcToM2(M2ToAr(x)) << " ari\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " acri =" << AcToM2(M2ToCm2(x)) << " centimetrii patrati\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " acri =" << AcToM2(M2ToFt2(x)) << " picioare patrate\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " acri =" << AcToM2(M2ToHa(x)) << " hectare\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " acri =" << AcToM2(M2ToIn2(x)) << " toli patrati\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " acri =" << AcToM2(M2ToKm2(x)) << " kilometrii patrati\n";
					break;
				case 8:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " acri =" << AcToM2(M2ToMm2(x))<< " milimetrii patrati\n";
					break;
				case 9:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " acri =" << AcToM2(M2ToYd2(x)) << " yarzi patrati\n";
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
				cout << "1.Metru patrat\n";
				cout << "2.Ar\n";
				cout << "3.Acru\n";
				cout << "4.Picior patrat\n";
				cout << "5.Hectari\n";
				cout << "6.Tol patrat(square inch)\n";
				cout << "7.Kilometru patrat\n";
				cout << "8.Milimetru patrat\n";
				cout << "9.Yard patrat\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " centimetrii patrati =" << Cm2ToM2(x) << " metrii patrati\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " centimetrii patrati =" << Cm2ToM2(M2ToAr(x)) << " ari\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " centimetrii patrati =" << Cm2ToM2(M2ToAc(x)) << " acri\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " centimetrii patrati =" << Cm2ToM2(M2ToFt2(x)) << " picioare patrate\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " centimetrii patrati =" << Cm2ToM2(M2ToHa(x)) << " hectare\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " centimetrii patrati =" << Cm2ToM2(M2ToIn2(x)) << " toli patrati\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " centimetrii patrati =" << Cm2ToM2(M2ToKm2(x)) << " kilometrii patrati\n";
					break;
				case 8:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " centimetrii patrati =" << Cm2ToM2(M2ToMm2(x)) << " milimetrii patrati\n";
					break;
				case 9:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " centimetrii patrati =" << Cm2ToM2(M2ToYd2(x)) << " yarzi patrati\n";
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
				cout << "1.Metru patrat\n";
				cout << "2.Ar\n";
				cout << "3.Acru\n";
				cout << "4.Centimetru patrat\n";
				cout << "5.Hectari\n";
				cout << "6.Tol patrat(square inch)\n";
				cout << "7.Kilometru patrat\n";
				cout << "8.Milimetru patrat\n";
				cout << "9.Yard patrat\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " picioare patrate =" << Ft2ToM2(x) << " metrii patrati\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " picioare patrate =" << Ft2ToM2(M2ToAc(x)) << " ari\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " picioare patrate =" << Ft2ToM2(M2ToAc(x)) << " acri\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " picioare patrate =" << Ft2ToM2(M2ToCm2(x)) << " centimetrii patrati\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " picioare patrate =" << Ft2ToM2(M2ToHa(x)) << " hectare\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " picioare patrate =" << Ft2ToM2(M2ToIn2(x)) << " toli patrati\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " picioare patrate =" << Ft2ToM2(M2ToKm2(x)) << " kilometrii patrati\n";
					break;
				case 8:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " picioare patrate =" << Ft2ToM2(M2ToMm2(x)) << " milimetrii patrati\n";
					break;
				case 9:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " picioare patrate =" << Ft2ToM2(M2ToYd2(x)) << " yarzi patrati\n";
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
				cout << "1.Metru patrat\n";
				cout << "2.Ar\n";
				cout << "3.Acru\n";
				cout << "4.Centimetru patrat\n";
				cout << "5.Picior patrat\n";
				cout << "6.Tol patrat(square inch)\n";
				cout << "7.Kilometru patrat\n";
				cout << "8.Milimetru patrat\n";
				cout << "9.Yard patrat\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " hectare =" << HaToM2(x) << " metrii patrati\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " hectare =" << HaToM2(M2ToAr(x)) << " ari\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " hectare =" << HaToM2(M2ToAc(x)) << " acri\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " hectare =" << HaToM2(M2ToCm2(x)) << " centimetrii patrati\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " hectare =" << HaToM2(M2ToFt2(x)) << " picioare patrate\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " hectare =" << HaToM2(M2ToIn2(x)) << " toli patrati\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " hectare =" << HaToM2(M2ToKm2(x)) << " kilometrii patrati\n";
					break;
				case 8:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " hectare =" << HaToM2(M2ToMm2(x)) << " milimetrii patrati\n";
					break;
				case 9:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " hectare =" << HaToM2(M2ToYd2(x)) << " yarzi patrati\n";
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
				cout << "1.Metru patrat\n";
				cout << "2.Ar\n";
				cout << "3.Acru\n";
				cout << "4.Centimetru patrat\n";
				cout << "5.Picior patrat\n";
				cout << "6.Hectari\n";
				cout << "7.Kilometru patrat\n";
				cout << "8.Milimetru patrat\n";
				cout << "9.Yard patrat\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " toli patrati =" << In2ToM2(x) << " metrii patrati\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " toli patrati =" << In2ToM2(M2ToAr(x)) << " ari\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " toli patrati =" << In2ToM2(M2ToAc(x)) << " acri\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " toli patrati =" << In2ToM2(M2ToCm2(x)) << " centimetrii patrati\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " toli patrati =" << In2ToM2(M2ToFt2(x)) << " picioare patrate\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " toli patrati =" << In2ToM2(M2ToHa(x)) << " hectare\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " toli patrati =" << In2ToM2(M2ToKm2(x)) << " kilometrii patrati\n";
					break;
				case 8:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " toli patrati =" << In2ToM2(M2ToMm2(x)) << " milimetrii patrati\n";
					break;
				case 9:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " toli patrati =" << In2ToM2(M2ToYd2(x)) << " yarzi patrati\n";
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
				cout << "1.Metru patrat\n";
				cout << "2.Ar\n";
				cout << "3.Acru\n";
				cout << "4.Centimetru patrat\n";
				cout << "5.Picior patrat\n";
				cout << "6.Hectari\n";
				cout << "7.Tol patrat(square inch)\n";
				cout << "8.Milimetru patrat\n";
				cout << "9.Yard patrat\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilometrii patrati =" << Km2ToM2(x) << " metrii patrati\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilometrii patrati =" << Km2ToM2(M2ToAr(x)) << " ari\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilometrii patrati =" << Km2ToM2(M2ToAc(x)) << " acri\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilometrii patrati =" << Km2ToM2(M2ToCm2(x)) << " centimetrii patrati\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilometrii patrati =" << Km2ToM2(M2ToFt2(x)) << " picioare patrate\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilometrii patrati =" << Km2ToM2(M2ToHa(x)) << " hectare\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilometrii patrati =" << Km2ToM2(M2ToIn2(x)) << " toli patrati\n";
					break;
				case 8:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilometrii patrati =" << Km2ToM2(M2ToMm2(x)) << " milimetrii patrati\n";
					break;
				case 9:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilometrii patrati =" << Km2ToM2(M2ToYd2(x)) << " yarzi patrati\n";
					break;
				default:
					system("cls");
					cout << "alegere incorecta" << endl;
					break;
				}
				break;
			case 9:
				system("cls");
				cout << "Alege unitatea de masura in care vrei sa transformi:\n";
				cout << "1.Metru patrat\n";
				cout << "2.Ar\n";
				cout << "3.Acru\n";
				cout << "4.Centimetru patrat\n";
				cout << "5.Picior patrat\n";
				cout << "6.Hectari\n";
				cout << "7.Tol patrat(square inch)\n";
				cout << "8.Kilometru patrat\n";
				cout << "9.Yard patrat\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " milimetrii patrati =" << Mm2ToM2(x) << " metrii patrati\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " milimetrii patrati =" << Mm2ToM2(M2ToAr(x)) << " ari\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " milimetrii patrati =" << Mm2ToM2(M2ToAc(x)) << " acri\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " milimetrii patrati =" << Mm2ToM2(M2ToCm2(x)) << " centimetrii patrati\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " milimetrii patrati =" << Mm2ToM2(M2ToFt2(x)) << " picioare patrate\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " milimetrii patrati =" << Mm2ToM2(M2ToHa(x)) << " hectare\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " milimetrii patrati =" << Mm2ToM2(M2ToIn2(x)) << " toli patrati\n";
					break;
				case 8:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " milimetrii patrati =" << Mm2ToM2(M2ToKm2(x)) << " kilometrii patrati\n";
					break;
				case 9:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " milimetrii patrati =" << Mm2ToM2(M2ToYd2(x)) << " yarzi patrati\n";
					break;
				default:
					system("cls");
					cout << "alegere incorecta" << endl;
					break;
				}
				break;
			case 10:
				system("cls");
				cout << "Alege unitatea de masura in care vrei sa transformi:\n";
				cout << "1.Metru patrat\n";
				cout << "2.Ar\n";
				cout << "3.Acru\n";
				cout << "4.Centimetru patrat\n";
				cout << "5.Picior patrat\n";
				cout << "6.Hectari\n";
				cout << "7.Tol patrat(square inch)\n";
				cout << "8.Kilometru patrat\n";
				cout << "9.Milimetru patrat\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " yarzi patrati =" << Yd2ToM2(x) << " metrii patrati\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " yarzi patrati =" << Yd2ToM2(M2ToAr(x)) << " ari\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " yarzi patrati =" << Yd2ToM2(M2ToAc(x)) << " acri\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " yarzi patrati =" << Yd2ToM2(M2ToCm2(x)) << " centimetrii patrati\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " yarzi patrati =" << Yd2ToM2(M2ToFt2(x)) << " picioare patrate\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " yarzi patrati =" << Yd2ToM2(M2ToHa(x)) << " hectare\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " yarzi patrati =" << Yd2ToM2(M2ToIn2(x)) << " toli patrati\n";
					break;
				case 8:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " yarzi patrati =" << Yd2ToM2(M2ToKm2(x)) << " kilometrii patrati\n";
					break;
				case 9:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " yarzi patrati =" << Yd2ToM2(M2ToMm2(x)) << " milimetrii patrati\n";
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
		case 3:
			system("cls");
			cout << "Volum" << endl;
			cout << "Alege unitatea de masura:\n";
			cout << "1.Metru cub\n";
			cout << "2.Litru(Decimetru cub)\n";
			cout << "3.Mililitru(centimetru cub)\n";
			cout << "4.Decilitru\n";
			cout << "5.Picior cub\n";
			cout << "6.Galon\n";
			cout << "7.Tol cub\n";
			cout << "8.Yard cub\n";
			cin >> option1;
			switch (option1)
			{
			case 1:
				system("cls");
				cout << "Alege unitatea de masura in care vrei sa transformi:\n";
				cout << "1.Litru(Decimetru cub)\n";
				cout << "2.Mililitru(centimetru cub)\n";
				cout << "3.Decilitru\n";
				cout << "4.Picior cub\n";
				cout << "5.Galon\n";
				cout << "6.Tol cub\n";
				cout << "7.Yard cub\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii cubi =" << M3ToDm3(x) << " litrii\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii cubi =" << M3ToCm3(x) << " mililitrii\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii cubi =" << M3ToDl(x) << " decilitrii\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii cubi =" << M3ToFt3(x) << " picioare cubi\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii cubi =" << M3ToG(x) << " galoni\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii cubi =" << M3ToIn3(x) << " toli cubi\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii cubi =" << M3ToYd3(x) << " yarzi cubi\n";
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
				cout << "1.Metru cub\n";
				cout << "2.Mililitru(centimetru cub)\n";
				cout << "3.Decilitru\n";
				cout << "4.Picior cub\n";
				cout << "5.Galon\n";
				cout << "6.Tol cub\n";
				cout << "7.Yard cub\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " litrii =" << Dm3ToM3(x) << " metrii cubi\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " litrii =" << Dm3ToM3(M3ToCm3(x)) << " mililitrii\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " litrii =" << Dm3ToM3(M3ToDl(x)) << " decilitrii\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " litrii =" << Dm3ToM3(M3ToFt3(x)) << " picioare cubi\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " litrii =" << Dm3ToM3(M3ToG(x)) << " galoni\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " litrii =" << Dm3ToM3(M3ToIn3(x)) << " toli cubi\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " litrii =" << Dm3ToM3(M3ToYd3(x)) << " yarzi cubi\n";
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
				cout << "1.Metru cub\n";
				cout << "2.Litru(Decimetru cub)\n";
				cout << "3.Decilitru\n";
				cout << "4.Picior cub\n";
				cout << "5.Galon\n";
				cout << "6.Tol cub\n";
				cout << "7.Yard cub\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " mililitrii =" << Cm3ToM3(x) << " metrii cubi\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " mililitrii =" << Cm3ToM3(M3ToDm3(x)) << " litrii\n";
					break;

				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " mililitrii =" << Cm3ToM3(M3ToDl(x)) << " decilitrii\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " mililitrii =" << Cm3ToM3(M3ToFt3(x)) << " picioare cubi\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " mililitrii =" << Cm3ToM3(M3ToG(x)) << " galoni\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " mililitrii =" << Cm3ToM3(M3ToIn3(x)) << " toli cubi\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " mililitrii =" << Cm3ToM3(M3ToYd3(x)) << " yarzi cubi\n";
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
				cout << "1.Metru cub\n";
				cout << "2.Litru(Decimetru cub)\n";
				cout << "3.Mililitru(centimetru cub)\n";
				cout << "4.Picior cub\n";
				cout << "5.Galon\n";
				cout << "6.Tol cub\n";
				cout << "7.Yard cub\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " decilitrii =" << DlToM3(x) << " metrii cubi\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " decilitrii =" << DlToM3(M3ToDm3(x)) << " litrii\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " decilitrii =" << DlToM3(M3ToCm3(x)) << " mililitrii\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " decilitrii =" << DlToM3(M3ToFt3(x)) << " picioare cubi\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " decilitrii =" << DlToM3(M3ToG(x)) << " galoni\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " decilitrii =" << DlToM3(M3ToIn3(x)) << " toli cubi\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " decilitrii =" << DlToM3(M3ToYd3(x)) << " yarzi cubi\n";
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
				cout << "1.Metru cub\n";
				cout << "2.Litru(Decimetru cub)\n";
				cout << "3.Mililitru(centimetru cub)\n";
				cout << "4.Decilitru\n";
				cout << "5.Galon\n";
				cout << "6.Tol cub\n";
				cout << "7.Yard cub\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " picioare cubi =" << Ft3ToM3(x) << " picioare cubi\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " picioare cubi =" << Ft3ToM3(M3ToDm3(x)) << " litrii\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " picioare cubi =" << Ft3ToM3(M3ToCm3(x)) << " mililitrii\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " picioare cubi =" << Ft3ToM3(M3ToDl(x)) << " decilitrii\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " picioare cubi =" << Ft3ToM3(M3ToG(x)) << " galoni\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " picioare cubi =" << Ft3ToM3(M3ToIn3(x)) << " toli cubi\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " picioare cubi =" << Ft3ToM3(M3ToYd3(x)) << " yarzi cubi\n";
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
				cout << "1.Metru cub\n";
				cout << "2.Litru(Decimetru cub)\n";
				cout << "3.Mililitru(centimetru cub)\n";
				cout << "4.Decilitru\n";
				cout << "5.Picior cub\n";
				cout << "6.Tol cub\n";
				cout << "7.Yard cub\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " galoni =" << GToM3(x) << " metrii cubi\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " galoni =" << GToM3(M3ToDm3(x)) << " litrii\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " galoni =" << GToM3(M3ToCm3(x)) << " mililitrii\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " galoni =" << GToM3(M3ToDl(x)) << " decilitrii\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " galoni =" << GToM3(M3ToFt3(x)) << " picioare cubi\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " galoni =" << GToM3(M3ToIn3(x)) << " toli cubi\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " galoni =" << GToM3(M3ToYd3(x)) << " yarzi cubi\n";
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
				cout << "1.Metru cub\n";
				cout << "2.Litru(Decimetru cub)\n";
				cout << "3.Mililitru(centimetru cub)\n";
				cout << "4.Decilitru\n";
				cout << "5.Picior cub\n";
				cout << "6.Galon\n";
				cout << "7.Yard cub\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " toli cubi =" << In3ToM3(x) << " metrii cubi\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " toli cubi =" << In3ToM3(M3ToDm3(x)) << " litrii\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " toli cubi =" << In3ToM3(M3ToCm3(x)) << " mililitrii\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " toli cubi =" << In3ToM3(M3ToDl(x)) << " decilitrii\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " toli cubi =" << In3ToM3(M3ToFt3(x)) << " picioare cubi\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " toli cubi =" << In3ToM3(M3ToG(x)) << " galoni\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " toli cubi =" << In3ToM3(M3ToYd3(x)) << " yarzi cubi\n";
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
				cout << "1.Metru cub\n";
				cout << "2.Litru(Decimetru cub)\n";
				cout << "3.Mililitru(centimetru cub)\n";
				cout << "4.Decilitru\n";
				cout << "5.Picior cub\n";
				cout << "6.Galon\n";
				cout << "7.Tol cub\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " yarzi cubi =" << Yd3ToM3(x) << " metrii cubi\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " yarzi cubi =" << Yd3ToM3(M3ToDm3(x)) << " litrii\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " yarzi cubi =" << Yd3ToM3(M3ToCm3(x)) << " mililitrii\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " yarzi cubi =" << Yd3ToM3(M3ToDl(x)) << " decilitrii\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " yarzi cubi =" << Yd3ToM3(M3ToFt3(x)) << " picioare cubi\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " yarzi cubi =" << Yd3ToM3(M3ToG(x)) << " galoni\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " yarzi cubi =" << Yd3ToM3(M3ToIn3(x)) << " toli cubi\n";
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
		case 4:
			system("cls");
			cout << "Timp" << endl;
			cout << "Alege unitatea de masura:\n";
			cout << "1.Secunda\n";
			cout << "2.Minut\n";
			cout << "3.Ora\n";
			cout << "4.Zi\n";
			cout << "5.Saptamana\n";
			cout << "6.Luna\n";
			cout << "7.An\n";
			cout << "8.Milisecunda\n";
			cin >> option1;
			switch (option1)
			{
			case 1:
				system("cls");
				cout << "Alege unitatea de masura in care vrei sa transformi:\n";
				cout << "1.Minut\n";
				cout << "2.Ora\n";
				cout << "3.Zi\n";
				cout << "4.Saptamana\n";
				cout << "5.Luna\n";
				cout << "6.An\n";
				cout << "7.Milisecunda\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " secunde =" << SToMin(x) << " minute\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " secunde =" << SToH(x) << " ore\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " secunde =" << SToD(x) << " zile\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " secunde =" << SToW(x) << " saptamani\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " secunde =" << SToM(x) << " luni\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " secunde =" << SToY(x) << " ani\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " secunde =" << SToMs(x) << " milisecunde\n";
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
				cout << "1.Secunda\n";
				cout << "2.Ora\n";
				cout << "3.Zi\n";
				cout << "4.Saptamana\n";
				cout << "5.Luna\n";
				cout << "6.An\n";
				cout << "7.Milisecunda\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " minute =" << MinToS(x) << " secunde\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " minute =" << MinToS(SToH(x)) << " ore\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " minute =" << MinToS(SToD(x)) << " zile\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " minute =" << MinToS(SToW(x)) << " saptamani\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " minute =" << MinToS(SToM(x)) << " luni\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " minute =" << MinToS(SToY(x)) << " ani\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " minute =" << MinToS(SToMs(x)) << " milisecunde\n";
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
				cout << "1.Secunda\n";
				cout << "2.Minut\n";
				cout << "3.Zi\n";
				cout << "4.Saptamana\n";
				cout << "5.Luna\n";
				cout << "6.An\n";
				cout << "7.Milisecunda\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " ore =" << HToS(x) << " ore\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " ore =" << HToS(SToMin(x)) << " minute\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " ore =" << HToS(SToD(x)) << " zile\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " ore =" << HToS(SToW(x)) << " saptamani\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " ore =" << HToS(SToM(x)) << " luni\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " ore =" << HToS(SToY(x)) << " ani\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " ore =" << HToS(SToMs(x)) << " milisecunde\n";
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
				cout << "1.Secunda\n";
				cout << "2.Minut\n";
				cout << "3.Ora\n";
				cout << "4.Saptamana\n";
				cout << "5.Luna\n";
				cout << "6.An\n";
				cout << "7.Milisecunda\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " zile =" << DToS(x) << " secunde\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " zile =" << DToS(SToMin(x)) << " minute\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " zile =" << DToS(SToH(x)) << " ore\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " zile =" << DToS(SToW(x)) << " saptamani\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " zile =" << DToS(SToM(x)) << " luni\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " zile =" << DToS((x)) << " ani\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " zile =" << DToS(SToMs(x)) << " milisecunde\n";
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
				cout << "1.Secunda\n";
				cout << "2.Minut\n";
				cout << "3.Ora\n";
				cout << "4.Zi\n";
				cout << "5.Luna\n";
				cout << "6.An\n";
				cout << "7.Milisecunda\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " saptamani =" << WToS(x) << " secunde\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " saptamani =" << WToS(SToMin(x)) << " minute\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " saptamani =" << WToS(SToH(x))<< " ore\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " saptamani =" << WToS(SToD(x)) << " zile\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " saptamani =" << WToS(SToM(x)) << " luni\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " saptamani =" << WToS(SToY(x)) << " ani\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " saptamani =" << WToS(SToMs(x)) << " milisecunde\n";
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
				cout << "1.Secunda\n";
				cout << "2.Minut\n";
				cout << "3.Ora\n";
				cout << "4.Zi\n";
				cout << "5.Saptamana\n";
				cout << "6.Luna\n";
				cout << "7.An\n";
				cout << "8.Milisecunda\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " luni =" << MToS(x) << " secunde\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " luni =" << MToS(SToMin(x)) << " minute\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " luni =" << MToS(SToH(x)) << " ore\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " luni =" << MToS(SToD(x)) << " zile\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " luni =" << MToS(SToW(x)) << " saptamani\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " luni =" << MToS(SToY(x)) << " ani\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " luni =" << MToS(SToMs(x)) << " milisecunde\n";
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
				cout << "1.Secunda\n";
				cout << "2.Minut\n";
				cout << "3.Ora\n";
				cout << "4.Zi\n";
				cout << "5.Saptamana\n";
				cout << "6.Luna\n";
				cout << "7.Milisecunda\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " ani =" << YToS(x) << " secunde\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " ani =" << YToS(SToMin(x)) << " minute\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " ani =" << YToS(SToH(x)) << " ore\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " ani =" << YToS(SToD(x)) << " zile\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " ani =" << YToS(SToW(x)) << " saptamani\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " ani =" << YToS(SToM(x)) << " luni\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " ani =" << YToS(SToMs(x)) << " milisecunde\n";
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
				cout << "1.Secunda\n";
				cout << "2.Minut\n";
				cout << "3.Ora\n";
				cout << "4.Zi\n";
				cout << "5.Saptamana\n";
				cout << "6.Luna\n";
				cout << "7.An\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " milisecunde =" << MsToS(x) << " secunde\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " milisecunde =" << MsToS(SToMin(x)) << " minute\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " milisecunde =" << MsToS(SToH(x)) << " ore\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " milisecunde =" << MsToS(SToD(x)) << " zile\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " milisecunde =" << MsToS(SToW(x)) << " saptamani\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " milisecunde =" << MsToS(SToM(x)) << " luni\n";
					break;
				case 7:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " milisecunde =" << MsToS(SToY(x)) << " ani\n";
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
		case 5:
			system("cls");
			cout << "Viteza" << endl;
			cout << "Alege unitatea de masura:\n";
			cout << "1.Metru pe secunda\n";
			cout << "2.Metru pe ora\n";
			cout << "3.Picior pe ora\n";
			cout << "4.Kilometru pe ora\n";
			cout << "5.Yard pe ora\n";
			cout << "6.Mila pe ora\n";
			cin >> option1;
			switch (option1)
			{
			case 1:
				system("cls");
				cout << "Alege unitatea de masura in care vrei sa transformi:\n";
				cout << "1.Metru pe ora\n";
				cout << "2.Picior pe ora\n";
				cout << "3.Kilometru pe ora\n";
				cout << "4.Yard pe ora\n";
				cout << "5.Mila pe ora\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii pe secunda =" << MsToMh(x) << " metrii pe ora\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii pe secunda =" << MsToFth(x) << " piciore pe ora\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii pe secunda =" << MsToKmh(x) << " kilometrii pe ora\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii pe secunda =" << MsToYdh(x) << " yarzi pe ora\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii pe secunda =" << MsToMph(x) << " mile pe ora\n";
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
				cout << "1.Metru pe secunda\n";
				cout << "2.Picior pe ora\n";
				cout << "3.Kilometru pe ora\n";
				cout << "4.Yard pe ora\n";
				cout << "5.Mila pe ora\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii pe ora =" << MhToMs(x) << " metrii pe secunda\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii pe ora =" << MhToMs(MsToFth(x)) << " piciore pe ora\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii pe ora =" << MhToMs(MsToKmh(x)) << " kilometrii pe ora\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii pe ora =" << MhToMs(MsToYdh(x)) << " yarzi pe ora\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " metrii pe ora =" << MhToMs(MsToMph(x)) << " mile pe ora\n";
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
				cout << "1.Metru pe secunda\n";
				cout << "2.Metru pe ora\n";
				cout << "3.Kilometru pe ora\n";
				cout << "4.Yard pe ora\n";
				cout << "5.Mila pe ora\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " picioare pe ora =" << FthToMs(x) << " metrii pe secunda\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " picioare pe ora =" << FthToMs(MsToMh(x)) << " metrii pe ora\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " picioare pe ora =" << FthToMs(MsToKmh(x)) << " kilometrii pe ora\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " picioare pe ora =" << FthToMs(MsToYdh(x)) << " yarzi pe ora\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " picioare pe ora =" << FthToMs(MsToMph(x)) << " mile pe ora\n";
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
				cout << "1.Metru pe secunda\n";
				cout << "2.Metru pe ora\n";
				cout << "3.Picior pe ora\n";
				cout << "4.Yard pe ora\n";
				cout << "5.Mila pe ora\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilometrii pe ora =" << KmhToMs(x) << " metrii pe secunda\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilometrii pe ora =" << KmhToMs(MsToMh(x)) << " metrii pe ora\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilometrii pe ora =" << KmhToMs(MsToFth(x)) << " piciore pe ora\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilometrii pe ora =" << KmhToMs(MsToYdh(x)) << " yarzi pe ora\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilometrii pe ora =" << KmhToMs(MsToMph(x)) << " mile pe ora\n";
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
				cout << "1.Metru pe secunda\n";
				cout << "2.Metru pe ora\n";
				cout << "3.Picior pe ora\n";
				cout << "4.Kilometru pe ora\n";
				cout << "5.Mila pe ora\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " yarzi pe ora =" << YdhToMs(x) << " yarzi pe ora\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " yarzi pe ora =" << YdhToMs(MsToMh(x)) << " metrii pe ora\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " yarzi pe ora =" << YdhToMs(MsToFth(x)) << " piciore pe ora\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " yarzi pe ora =" << YdhToMs(MsToKmh(x)) << " kilometrii pe ora\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " yarzi pe ora =" << YdhToMs(MsToMph(x)) << " mile pe ora\n";
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
				cout << "1.Metru pe secunda\n";
				cout << "2.Metru pe ora\n";
				cout << "3.Picior pe ora\n";
				cout << "4.Kilometru pe ora\n";
				cout << "5.Yard pe ora\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " mile pe ora =" << MphToMs(x) << " mile pe ora\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " mile pe ora =" << MphToMs(MsToMh(x)) << " metrii pe ora\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " mile pe ora =" << MphToMs(MsToFth(x)) << " piciore pe ora\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " mile pe ora =" << MphToMs(MsToKmh(x)) << " kilometrii pe ora\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " mile pe ora =" << MphToMs(MsToYdh(x)) << " yarzi pe ora\n";
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
		case 6:
			system("cls");
			cout << "Temperatura" << endl;
			cout << "Alege unitatea de masura:\n";
			cout << "1.Grad Celsius\n";
			cout << "2.Grad Fahrenheit\n";
			cout << "3.Grad Kelvin\n";
			cout << "4.Grade Rankine\n";
			cin >> option1;
			switch (option1)
			{
			case 1:
				system("cls");
				cout << "Alege unitatea de masura in care vrei sa transformi:\n";
				cout << "1.Grad Fahrenheit\n";
				cout << "2.Grad Kelvin\n";
				cout << "3.Grade Rankine\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " grade Celsius =" << (x*1.8)+32 << " grade Fahrenheit\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " grade Celsius =" << x+ 273.15 << " grade Kelvin\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " grade Celsius =" << x+ 459.67 << " grade Rankine\n";
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
				cout << "1.Grad Celsius\n";
				cout << "2.Grad Kelvin\n";
				cout << "3.Grade Rankine\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " grade Fahrenheit =" << (x-32)/1.8 << " grade Celsius\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " grade Fahrenheit =" << (x+ 459.67)* 0.555555555555555 << " grade Kelvin\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " grade Fahrenheit =" << x+ 459.67 << " grade Rankine\n";
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
				cout << "1.Grad Celsius\n";
				cout << "2.Grad Fahrenheit\n";
				cout << "3.Grade Rankine\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " grade Kelvin =" << x- 273.15 << " grade Celsius\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " grade Kelvin =" << (x*1.8)- 459.67 << " grade Fahrenheit\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " grade Kelvin =" << x*1.8 << " grade Rankine\n";
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
				cout << "1.Grad Celsius\n";
				cout << "2.Grad Fahrenheit\n";
				cout << "3.Grad Kelvin\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " grade Rankine =" << (x- 491.67)*0.555555555555555 << " grade Celsius\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " grade Rankine =" << x- 459.67 << " grade Fahrenheit\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " grade Rankine =" << x*0.555555555555555 << " grade Kelvin\n";
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
		case 7:
			system("cls");
			cout << "Masa" << endl;
			cout << "Alege unitatea de masura:\n";
			cout << "1.Kilogram\n";
			cout << "2.Gram\n";
			cout << "3.Miligram\n";
			cout << "4.Tona\n";
			cout << "5.Funt\n";
			cout << "6.Uncie\n";
			cout << "7.Slug\n";
			cin >> option1;
			switch (option1)
			{
			case 1:
				system("cls");
				cout << "Alege unitatea de masura in care vrei sa transformi:\n";
				cout << "1.Gram\n";
				cout << "2.Miligram\n";
				cout << "3.Tona\n";
				cout << "4.Funt\n";
				cout << "5.Uncie\n";
				cout << "6.Slug\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilograme =" << KgToG(x) << " grame\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilograme =" << KgToMg(x) << " miligrame\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilograme =" << KgToT(x) << " tone\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilograme =" << KgToLb(x) << " funte\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilograme =" << KgToOz(x) << " uncii\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilograme =" << KgToS(x) << " slug\n";
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
				cout << "1.Kilogram\n";
				cout << "2.Miligram\n";
				cout << "3.Tona\n";
				cout << "4.Funt\n";
				cout << "5.Uncie\n";
				cout << "6.Slug\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " grame =" << GToKg(x) << " kilograme\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " grame =" << GToKg(KgToMg(x)) << " miligrame\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " grame =" << GToKg(KgToT(x)) << " tone\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " grame =" << GToKg(KgToLb(x)) << " funte\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " grame =" << GToKg(KgToOz(x)) << " uncii\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " grame =" << GToKg(KgToS(x)) << " slug\n";
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
				cout << "1.Kilogram\n";
				cout << "2.Gram\n";
				cout << "3.Tona\n";
				cout << "4.Funt\n";
				cout << "5.Uncie\n";
				cout << "6.Slug\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " miligrame =" << MgToKg(x) << " kilograme\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " miligrame =" << MgToKg(KgToG(x)) << " grame\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " miligrame =" << MgToKg(KgToT(x)) << " tone\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " miligrame =" << MgToKg(KgToLb(x)) << " funte\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " miligrame =" << MgToKg(KgToOz(x)) << " uncii\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " miligrame =" << MgToKg(KgToS(x)) << " slug\n";
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
				cout << "1.Kilogram\n";
				cout << "2.Gram\n";
				cout << "3.Miligram\n";
				cout << "4.Funt\n";
				cout << "5.Uncie\n";
				cout << "6.Slug\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " tone =" << TToKg(x) << " kilograme\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " tone =" << TToKg(KgToG(x)) << " grame\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " tone =" << TToKg(KgToMg(x)) << " miligrame\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " tone =" << TToKg(KgToLb(x)) << " funte\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " tone =" << TToKg(KgToOz(x)) << " uncii\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " tone =" << TToKg(KgToS(x)) << " slug\n";
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
				cout << "1.Kilogram\n";
				cout << "2.Gram\n";
				cout << "3.Miligram\n";
				cout << "4.Tona\n";
				cout << "5.Uncie\n";
				cout << "6.Slug\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " funte =" << LbToKg(x) << " kilograme\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " funte =" << LbToKg(KgToG(x)) << " grame\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " funte =" << LbToKg(KgToMg(x)) << " miligrame\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " funte =" << LbToKg(KgToT(x)) << " tone\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " funte =" << LbToKg(KgToOz(x)) << " uncii\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " funte =" << LbToKg(KgToS(x)) << " slug\n";
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
				cout << "1.Kilogram\n";
				cout << "2.Gram\n";
				cout << "3.Miligram\n";
				cout << "4.Tona\n";
				cout << "5.Funt\n";
				cout << "6.Slug\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " uncii =" << OzToKg(x) << " kilograme\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " uncii =" << OzToKg(KgToG(x)) << " grame\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " uncii =" << OzToKg(KgToMg(x)) << " miligrame\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " uncii =" << OzToKg(KgToT(x)) << " tone\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " uncii =" << OzToKg(KgToLb(x)) << " funte\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " uncii =" << OzToKg(KgToS(x)) << " slug\n";
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
				cout << "1.Kilogram\n";
				cout << "2.Gram\n";
				cout << "3.Miligram\n";
				cout << "4.Tona\n";
				cout << "5.Funt\n";
				cout << "6.Uncie\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " slug =" << SToKg(x) << " kilograme\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " slug =" << SToKg(KgToG(x)) << " grame\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " slug =" << SToKg(KgToMg(x)) << " miligrame\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " slug =" << SToKg(KgToT(x)) << " tone\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " slug =" << SToKg(KgToLb(x)) << " funte\n";
					break;
				case 6:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " slug =" << SToKg(KgToOz(x)) << " uncii\n";
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
		case 8:
			system("cls");
			cout << "Energie" << endl;
			cout << "Alege unitatea de masura:\n";
			cout << "1.Jouli(watt-secunda)\n";
			cout << "2.Calorie\n";
			cout << "3.Kilojouli\n";
			cout << "4.Kilocalorie\n";
			cout << "5.Watt-ora\n";
			cout << "6.Kilowatt-ora\n";
			cin >> option1;
			switch (option1)
			{
			case 1:
				system("cls");
				cout << "Alege unitatea de masura in care vrei sa transformi:\n";
				cout << "1.Calorie\n";
				cout << "2.Kilojouli\n";
				cout << "3.Kilocalorie\n";
				cout << "4.Watt-ora\n";
				cout << "5.Kilowatt-ora\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " jouli =" << JToCal(x) << " calorii\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " jouli =" << JToKj(x) << " kilojouli\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " jouli =" << JToKcal(x) << " kilocalorii\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " jouli =" << JToWh(x) << " watt-ora\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " jouli =" << JToKwh(x) << " kilowatt-ora\n";
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
				cout << "1.Jouli(watt-secunda)\n";
				cout << "2.Kilojouli\n";
				cout << "3.Kilocalorie\n";
				cout << "4.Watt-ora\n";
				cout << "5.Kilowatt-ora\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " calorii =" << CalToJ(x) << " jouli\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " calorii =" << CalToJ(JToKj(x)) << " kilojouli\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " calorii =" << CalToJ(JToKcal(x)) << " kilocalorii\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " calorii =" << CalToJ(JToWh(x) )<< " watt-ora\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " calorii =" << CalToJ(JToKwh(x)) << " kilowatt-ora\n";
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
				cout << "1.Jouli(watt-secunda)\n";
				cout << "2.Calorie\n";
				cout << "3.Kilocalorie\n";
				cout << "4.Watt-ora\n";
				cout << "5.Kilowatt-ora\n";
				cin >> option2;
				switch (option2)
				{
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilojouli =" << KjToJ(x) << " jouli\n";
					break;
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilojouli =" << KjToJ(JToCal(x)) << " calorii\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilojouli =" << KjToJ(JToKcal(x)) << " kilocalorii\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilojouli =" << KjToJ(JToWh(x)) << " watt-ora\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilojouli =" << KjToJ(JToKwh(x)) << " kilowatt-ora\n";
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
				cout << "1.Jouli(watt-secunda)\n";
				cout << "2.Calorie\n";
				cout << "3.Kilojouli\n";
				cout << "4.Watt-ora\n";
				cout << "5.Kilowatt-ora\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilocalorii =" << KcalToJ(x) << " jouli\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilocalorii =" << KcalToJ(JToCal(x)) << " calorii\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilocalorii =" << KcalToJ(JToKj(x)) << " kilojouli\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilocalorii =" << KcalToJ(JToWh(x)) << " watt-ora\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilocalorii =" << KcalToJ(JToKwh(x)) << " kilowatt-ora\n";
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
				cout << "1.Jouli(watt-secunda)\n";
				cout << "2.Calorie\n";
				cout << "3.Kilojouli\n";
				cout << "4.Kilocalorie\n";
				cout << "5.Kilowatt-ora\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " watt-ora =" << WhToJ(x) << " jouli\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " watt-ora =" << WhToJ(JToCal(x)) << " calorii\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " watt-ora =" << WhToJ(JToKj(x)) << " kilojouli\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " watt-ora =" << WhToJ(JToKcal(x)) << " kilocalorii\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " watt-ora =" << WhToJ(JToKwh(x)) << " kilowatt-ora\n";
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
				cout << "1.Jouli(watt-secunda)\n";
				cout << "2.Calorie\n";
				cout << "3.Kilojouli\n";
				cout << "4.Kilocalorie\n";
				cout << "5.Watt-ora\n";
				cin >> option2;
				switch (option2)
				{
				case 1:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilowatt-ora =" << KwhToJ(x) << " jouli\n";
					break;
				case 2:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilowatt-ora =" << KwhToJ(JToCal(x)) << " calorii\n";
					break;
				case 3:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilowatt-ora =" << KwhToJ(JToKj(x)) << " kilojouli\n";
					break;
				case 4:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilowatt-ora =" << KwhToJ(JToKcal(x)) << " kilocalorii\n";
					break;
				case 5:
					cout << "Introduceti valoarea:";
					cin >> x;
					cout << x << " kilowatt-ora =" << KwhToJ(JToWh(x)) << " watt-ora\n";
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