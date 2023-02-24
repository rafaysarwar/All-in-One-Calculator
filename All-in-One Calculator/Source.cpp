#include <iostream>
#include<windows.h>
#include<string>
using namespace std;
int main()

	/*The code below is to do calculation, tables and different kinds of conversions. Also to mention, this program is password protected, in order to show the finesse
	and efficiency of the program.*/
{
		string pass = "2HR"; //Multiple character data type.
		string input;
		cout << "To access the system, please login" << endl;
		cout << "Password: ";
		cin >> input; //user defined value option.
		if (input == pass)
		{
			cout << "Access Granted" << endl; // This will authorize control to the user.
			goto code;
		}
		else
		{
			cout << "The password you have entered is incorrect\n" << endl;
			cout << "To access the system, please login" << endl;
			cout << "Password: ";
			cin >> input;
		}
		if (input == pass)
		{
			cout << "Access Granted" << endl;
			goto code;
		}
		else
		{
			cout << "The password you have entered is incorrect\n" << endl;
			cout << "To access the system, please login" << endl;
			cout << "Password: ";
			cin >> input;
		}
		if (input == pass)
		{
			cout << "Access Granted" << endl;
			goto code;
		}
		else
		{
			cout << "\n" << endl;
			cout << "Program is suspended. Terminating the program" << endl;
		}
		return 0;
	 // Ending bracket of login code
	
	code: //OS startup sound.
	{
		Beep(1568, 200);
		Beep(1568, 200);
		Beep(1245, 1000);
		Beep(1397, 200);
		Beep(1397, 200);
		Beep(1397, 200);
		Beep(1175, 1000);
	}
	
	start: // User can choose application of his choice.
	{
		int n;
		cout << "\nSELECT FROM THE AVAILABLE APPLICATIONS: \n1. Calculator\n2. Table\n3. Conversion\n\nENTERED: ";

		cin >> n;

		switch (n)
		{
			case 1:
				goto calculator;
				break;
			case 2:
				goto table;
				break;
			case 3:
				goto conversion;
				break;
			default:
				cout<< "INVALID NUMBER\n";
				goto start;
		}

	} // Ending bracket of start menu

	calculator: // Basic yet precise calculator to perform calculations like addition, substraction, multiplication, division and sqaure & cube of a number. 
	{
		{

			int num;
			cout << "CHOOSE FROM THE FOLLOWING \n1. Square\n2. Cube\n3. Addition\n4. Subtraction\n5. Multiplication\n6. Division\n\nENTERED: ";

			cin >> num;

			switch (num)
			{
				case 1:
					goto square;
					break;
				case 2:
					goto cube;
					break;
				case 3:
					goto sum;
					break;
				case 4:
					goto subtract;
					break;
				case 5:
					goto multiply;
					break;
				case 6:
					goto divide;
					break;
				default:
					cout << "INVALID NUMBER\n";
					goto calculator;
			}

		} //Ending bracket of calculator menu 

	sum:
		{
			long double a, b, c;
			char d;
			cout << "Enter Two Numbers\n\n";
			cout << "Enter First Number= ";
			cin >> a;
			cout << "Enter Second Number= ";
			cin >> b;
			cout << "Sum= " << a + b << endl;
			cout << "\nDO YOU WANT TO REPEAT? (Y/N): ";
			cin >> d;
			switch (d)
			{
				case 'Y':
				case 'y':
					system("cls");
					goto start;
					break;
				case 'N':
				case 'n':
					cout << "Exiting...";
			}
			
			return 0;
		} // Ending bracket of sum code

	subtract:
		{
			long double a, b, c;
			char d;
			cout << "Enter Two Numbers\n\n";
			cout << "Enter First Number= ";
			cin >> a;
			cout << "Enter Second Number= ";
			cin >> b;
			cout << "Subtraction= " << a - b << endl;
			cout << "\nDO YOU WANT TO REPEAT? (Y/N): ";
			cin >> d;
			switch (d)
			{
				case 'Y':
				case 'y':
					system("cls");
					goto start;
					break;
				case 'N':
				case 'n':
					cout << "Exiting...";
			}
			return 0;
		} //Ending bracket of subtraction code

	multiply:
		{
			long double a, b, c;
			char d;
			cout << "Enter Two Numbers\n\n";
			cout << "Enter First Number= ";
			cin >> a;
			cout << "Enter Second Number= ";
			cin >> b;
			cout << "Multiplication= " << a * b << endl;
			cout << "\nDO YOU WANT TO REPEAT? (Y/N): ";
			cin >> d;
			switch (d)
			{
				case 'Y':
				case 'y':
					system("cls");
					goto start;
					break;
				case 'N':
				case 'n':
					cout << "Exiting...";
			}
			return 0;
		} //Ending bracket of multiplication code

	divide:
		{
			long double a, b, c;
			char d;
			cout << "Enter Two Numbers\n\n";
			cout << "Enter First Number= ";
			cin >> a;
			cout << "Enter Second Number= ";
			cin >> b;
			cout << "Division= " << a / b << endl;
			cout << "\nDO YOU WANT TO REPEAT? (Y/N): ";
			cin >> d;
			switch (d)
			{
				case 'Y':
				case 'y':
					system("cls");
					goto start;
					break;
				case 'N':
				case 'n':
					cout << "Exiting...";
			}
			return 0;
		} //Ending bracket of division code

	square:
		{
			long int a;
			char d;
			cout << "Please insert your numbers: ";
			cin >> a;
			cout << "	" << endl;
			cout << "Number\t\t" << "Square\t\t" << endl; //Headings
			cout << a << "\t\t" << a * a << "\t\t" << endl;
			cout << "\nDO YOU WANT TO REPEAT? (Y/N): ";
			cin >> d;
			switch (d)
			{
				case 'Y':
				case 'y':
					system("cls");
					goto start;
					break;
				case 'N':
				case 'n':
					cout << "Exiting...";
			}
			return 0;

		} //Ending bracket of square code

	cube:
		{
			long int a;
			char d;
			cout << "Please insert your number: ";
			cin >> a;
			cout << "	" << endl;
			cout << "Number\t\t" << "Cube" << endl; 
			cout << a << "\t\t" << a * a * a << endl;
			cout << "\nDO YOU WANT TO REPEAT? (Y/N): ";
			cin >> d;
			switch (d)
			{
				case 'Y':
				case 'y':
					system("cls");
					goto start;
					break;
				case 'N':
				case 'n':
					cout << "Exiting...";
			}
			return 0;

		} //Ending bracket of cube code

	} //Ending bracket of whole calculator code

	table: //Gives table of a number upto 10 times.
	{
		long int n, i;
		char d;
		cout << "Enter a positive number: ";
		cin >> n;
		for (i = 1; i <= 10; ++i)
		{
			cout << n << " * " << i << " = " << n * i << endl;
		}
		cout << "\nDO YOU WANT TO REPEAT? (Y/N): ";
		cin >> d;
		switch (d)
		{
			case 'Y':
			case 'y':
				system("cls");
				goto start;
				break;
			case 'N':
			case 'n':
				cout << "Exiting...";
		}

		return 0;
	} // Ending bracket of table code


	conversion: 
	{

		{
			int num;
			cout << "CHOOSE FROM THE FOLLOWING \n1. Distance \n2. Height \n3. Volume \n4. Weight \n\nENTERED: ";

			cin >> num;

			switch (num)
			{
				case 1:
					goto distance;
					break;
				case 2:
					goto height;
					break;
				case 3:
					goto volume;
					break;
				case 4:
					goto weight;
				default:
					cout << "INVALID NUMBER\n";
					goto conversion;
			}
		} //Ending bracket of conversion menu

	distance:
		{
			{
				int num;
				cout << "CHOOSE FROM THE FOLLOWING \n1. Inches to Kilometres  \n2. Kilometres to Miles \n3. Meters to Inches \n\nENTERED: ";

				cin >> num;

				switch (num)
				{
					case 1:
						goto i2k;
						break;
					case 2:
						goto k2m;
						break;
					case 3:
						goto m2i;
					default:
						cout << "INVALID NUMBER\n";
						goto distance;
				}

			} //Ending bracket of distance menu


		i2k: //Code to convert inches into kilometres 
			{
				cout << "									Inches to Kilometres" << endl;
				cout << "	" << endl;
				long double km, in;
				char d;
				cout << "Enter value in inches: ";
				cin >> in;
				km = in / 39370.079;
				cout << "Converted value in kilometres is: ";
				cout << km << endl;
				cout << " " << endl;
				cout << "\nDO YOU WANT TO REPEAT? (Y/N): ";
				cin >> d;
				switch (d)
				{
					case 'Y':
					case 'y':
						system("cls");
						goto start;
						break;
					case 'N':
					case 'n':
						cout << "Exiting...";
				}

				return 0;
			} //Ending bracket of i2k code

		k2m: //Code to convert kilometres to miles
			{
				cout << "									Kilometres to Miles" << endl;
				cout << "	" << endl;
				long double km, mi;
				char d;
				cout << "Enter value in kilometres: ";
				cin >> km;
				mi = km / 1.609;
				cout << "Converted value in miles is: ";
				cout << mi << endl;
				cout << " " << endl;
				cout << "\nDO YOU WANT TO REPEAT? (Y/N): ";
				cin >> d;
				switch (d)
				{
					case 'Y':
					case 'y':
						system("cls");
						goto start;
						break;
					case 'N':
					case 'n':
						cout << "Exiting...";
				}

				return 0;
			}	//Ending bracket of k2m code

		m2i: //Code to convert metres to inches 
			{
				cout << "									Meters to Inches" << endl;
				cout << "	" << endl;
				long double m, in;
				char d;
				cout << "Enter value in meters: ";
				cin >> m;
				in = m * 39.37;
				cout << "Converted value in inches is: ";
				cout << in << endl;
				cout << " " << endl;
				cout << "\nDO YOU WANT TO REPEAT? (Y/N): ";
				cin >> d;
				switch (d)
				{
					case 'Y':
					case 'y':
						system("cls");
						goto start;
						break;
					case 'N':
					case 'n':
						cout << "Exiting...";
				}

				return 0;
			} //Ending bracket of m2i code


		} //Ending bracket of whole distance code

	height:
		{

			{
				int num;
				cout << "CHOOSE FROM THE FOLLOWING \n1. Metres to Nautical Miles \n2. Nautical Miles to Yards \n3. Yards to Metres \n\nENTERED: ";

				cin >> num;

				switch (num)
				{
					case 1:
						goto m2nm;
						break;
					case 2:
						goto nm2y;
						break;
					case 3:
						goto y2m;
					default:
						cout << "INVALID NUMBER\n";
						goto height;
				}

			} //Ending bracket of height menu code


		m2nm: //Code to convert metres to nautical miles 

			{
				cout << "									Metres to Nautical Miles" << endl;
				cout << "	" << endl;
				long double m, nm;
				char d;
				cout << "Enter volume in metres: ";
				cin >> m;
				nm = m / 1852;
				cout << "Converted volume in nautical miles: ";
				cout << nm << endl;
				cout << "\nDO YOU WANT TO REPEAT? (Y/N): ";
				cin >> d;
				switch (d)
				{
					case 'Y':
					case 'y':
						system("cls");
						goto start;
						break;
					case 'N':
					case 'n':
						cout << "Exiting...";
				}

				return 0;
			} //Ending bracket of m2nm code

		nm2y: //Code to convert nautical miles to yards 

			{
				cout << "									Nautical Miles to Yards" << endl;
				cout << "	" << endl;
				long double ya, nm;
				char d;
				cout << "Enter value in nautical miles: ";
				cin >> nm;
				ya = nm * 2025.372;
				cout << "Converted value in yards: ";
				cout << ya << endl;
				cout << " " << endl;
				cout << "\nDO YOU WANT TO REPEAT? (Y/N): ";
				cin >> d;
				switch (d)
				{
					case 'Y':
					case 'y':
						system("cls");
						goto start;
						break;
					case 'N':
					case 'n':
						cout << "Exiting...";
				}

				return 0;
			} //Ending bracket of nm2y code

		y2m: //Code to convert yards to metres 

			{
				cout << "									Yards to Metres" << endl;
				cout << "	" << endl;
				long double ya, m;
				char d;
				cout << "Enter value in yards: ";
				cin >> ya;
				m = ya / 1.094;
				cout << "Converted value in metres: ";
				cout << m << endl;
				cout << " " << endl;
				cout << "\nDO YOU WANT TO REPEAT? (Y/N): ";
				cin >> d;
				switch (d)
				{
					case 'Y':
					case 'y':
						system("cls");
						goto start;
						break;
					case 'N':
					case 'n':
						cout << "Exiting...";
				}

				return 0;
			} //Ending bracket of y2m code

		} //Ending bracket of whole height code

	volume:
		{

			{
				int num;
				cout << "CHOOSE FROM THE FOLLOWING \n1. Cubic Feet to Litres \n2. Metre Cube to Cubic Feet \n3. Metre Cube to US Gallons \n4. US Gallons to Cubic Feet \n\nENTERED: ";

				cin >> num;

				switch (num)
				{
					case 1:
						goto cf2l;
						break;
					case 2:
						goto mc2cf;
						break;
					case 3:
						goto mc2g;
						break;
					case 4:
						goto g2cf;
					default:
						cout << "INVALID NUMBER\n";
						goto volume;

				}

			} //Ending bracket of volum menu code


		cf2l: //Code to convert cubic feet to litres 

			{
				cout << "									Cubic Feet to Litres" << endl;
				cout << "	" << endl;
				long double cf, l;
				char d;
				cout << "Enter volume in cubic feet: ";
				cin >> cf;
				l = cf * 28.317;
				cout << "Converted volume in litres: ";
				cout << l << endl;
				cout << "\nDO YOU WANT TO REPEAT? (Y/N): ";
				cin >> d;
				switch (d)
				{
					case 'Y':
					case 'y':
						system("cls");
						goto start;
						break;
					case 'N':
					case 'n':
						cout << "Exiting...";
				}

				return 0;
			} //Ending bracket of cf2l code

		mc2cf: //Code to convert metre cube to cubic feet 

			{
				cout << "									Metre Cube to Cubic Feet" << endl;
				cout << "	" << endl;
				long double cf, mc;
				char d;
				cout << "Enter volume in metre cube: ";
				cin >> mc;
				cf = mc * 35.315;
				cout << "Converted volume in cubic feet: ";
				cout << cf << endl;
				cout << "\nDO YOU WANT TO REPEAT? (Y/N): ";
				cin >> d;
				switch (d)
				{
					case 'Y':
					case 'y':
						system("cls");
						goto start;
						break;
					case 'N':
					case 'n':
						cout << "Exiting...";
				}

				return 0;
			} //Ending bracket of mc2cf code

		mc2g: //Code to convert metre cube to us gallons

			{
				cout << "									Metre Cube to US Gallons" << endl;
				cout << "	" << endl;
				long double usg, mc;
				char d;
				cout << "Enter volume in meters cube: ";
				cin >> mc;
				usg = mc * 264.172;
				cout << "Converted volume in US Gallons: ";
				cout << usg << endl;
				cout << "\nDO YOU WANT TO REPEAT? (Y/N): ";
				cin >> d;
				switch (d)
				{
					case 'Y':
					case 'y':
						system("cls");
						goto start;
						break;
					case 'N':
					case 'n':
						cout << "Exiting...";
				}

				return 0;
			} //Ending bracket of mc2g code

		g2cf: //Code to convert us gallons to cubic feet 

			{
				cout << "									US Gallons to Cubic Feet" << endl;
				cout << "	" << endl;
				long double usg, cf;
				char d;
				cout << "Enter volume in US gallons: ";
				cin >> usg;
				cf = usg / 7.481;
				cout << "Converted volume in cubic feet: ";
				cout << cf << endl;
				cout << "\nDO YOU WANT TO REPEAT? (Y/N): ";
				cin >> d;
				switch (d)
				{
					case 'Y':
					case 'y':
						system("cls");
						goto start;
						break;
					case 'N':
					case 'n':
						cout << "Exiting...";
				}

				return 0;
			} //Ending bracket of gc2f code

		} //Ending bracket of whole volume code

	weight:

		{

			{
				int num;
				cout << "CHOOSE FROM THE FOLLOWING \n1. Grams to Kilograms  \n2. Kilograms to Pounds \n3. Tons to Kilograms \n4. US tons to Imperial tons \n\nENTERED: ";

				cin >> num;

				switch (num)
				{
					case 1:
						goto g2kg;
						break;
					case 2:
						goto kg2p;
						break;
					case 3:
						goto t2kg;
						break;
					case 4:
						goto ust2it;
					default:
						cout << "INVALID NUMBER\n";
						goto weight;
				}

			} //Ending bracket of weight menu code

		g2kg: //Code to convert grams to kilograms

			{
				cout << "									Grams to Kilograms" << endl;
				cout << "	" << endl;
				long double g, kg;
				char d;
				cout << "Enter mass in grams: ";
				cin >> g;
				kg = g / 1000;
				cout << "Converted mass in kilograms: ";
				cout << kg << endl;
				cout << "\nDO YOU WANT TO REPEAT? (Y/N): ";
				cin >> d;
				switch (d)
				{
					case 'Y':
					case 'y':
						system("cls");
						goto start;
						break;
					case 'N':
					case 'n':
						cout << "Exiting...";
				}

				return 0;
			} //Ending bracket of g2kg code

		kg2p: //Code to convert kilograms to pounds 

			{
				cout << "									Kilograms to Pounds" << endl;
				cout << "	" << endl;
				long double kg, lbs;
				char d;
				cout << "Enter mass in kilograms: ";
				cin >> kg;
				lbs = kg * 2.20462;
				cout << "Converted mass in pounds: ";
				cout << lbs << endl;
				cout << "\nDO YOU WANT TO REPEAT? (Y/N): ";
				cin >> d;
				switch (d)
				{
					case 'Y':
					case 'y':
						system("cls");
						goto start;
						break;
					case 'N':
					case 'n':
						cout << "Exiting...";
				}

				return 0;
			} //Ending bracket of kg2p code

		t2kg: //Code to convert tons to kilograms 

			{
				cout << "									Tons to Kilograms" << endl;
				cout << "	" << endl;
				long double t, kg;
				char d;
				cout << "Enter mass in tons: ";
				cin >> t;
				kg = t * 907.185;
				cout << "Converted mass in kilograms: ";
				cout << kg << endl;
				cout << "\nDO YOU WANT TO REPEAT? (Y/N): ";
				cin >> d;
				switch (d)
				{
					case 'Y':
					case 'y':
						system("cls");
						goto start;
						break;
					case 'N':
					case 'n':
						cout << "Exiting...";
				}

				return 0;
			} //Ending bracket of t2kg code

		ust2it: //Code to convert us tons to imperial tons 

			{
				cout << "									US tons to Imperial tons" << endl;
				cout << "	" << endl;
				long double ust, ipt;
				char d;
				cout << "Enter mass in US tons: ";
				cin >> ust;
				ipt = ust / 1.12;
				cout << "Converted mass in imperial tons: ";
				cout << ipt << endl;
				cout << "\nDO YOU WANT TO REPEAT? (Y/N): ";
				cin >> d;
				switch (d)
				{
				case 'Y':
				case 'y':
					system("cls");
					goto start;
					break;
				case 'N':
				case 'n':
					cout << "Exiting...";
				}

				return 0;
			} //Ending bracket of ust2it code


		} //Ending bracket of whole weight code

	} //Ending bracket of whole conversion code

} //Ending bracket of main function