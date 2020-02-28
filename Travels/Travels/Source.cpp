#include<fstream>
#include<Windows.h>
#include<time.h>
#include<iostream>
#include<dos.h>
#include<stdlib.h>
#include<process.h>
#include<stdio.h>
#include<conio.h>
#include<iomanip>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)

using namespace std;
struct id
	
{
	char namei[20], password[20], email[40], city[20];
}
p, a;
struct plan
{
	char names[5][20], place[20], flight[20];
	char nameid[20], star[10], clas[10], hotel[20];
	float flightprice, hotelprice, totprice, age[5], no;
	float daya, dayd, montha, monthd, yeara, yeard, q;
}t;
int h, o, c, d, s, w = 0;
float fliprice;
fstream f1, f2;
void price(); void trip(); void date(); void flight(); void flightc(); void asia();
void passengers(); void hotel(); void display(); void jconfirm(); void america();
void change()
{
ylyl:
	system("cls");
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(48) << "The Travell Boss\n";
	cout << "--------------------------------------------------------------------------------";
	cout << "What Do You Want To Change\n";
	cout << "--------------------------------------------------------------------------------";
	cout << "1)Destination\n";
	cout << "2)Date And No Of Passengers\n";
	cout << "3)Flight\n";
	cout << "4)Flight Class\n";
	cout << "5)Passenger Details\n";
	cout << "6)Hotel\n";
	cout << "--------------------------------------------------------------------------------";
	cout << "Please Enter Option No : ";
	cin >> o;
	switch (o)
	{
	case 1:
		trip();
		price();
		break;
	case 2:
		date();
		price();
		break;
	case 3:
		flight();
		price();
		break;
	case 4:
		flightc();
		price();
		break;
	case 5:
		passengers();
		break;
	case 6:
		price();
		hotel();
		break;
	default:
		system("cls");
		cout << "-------------------------------------------------------------------------------\n";
		cout << setw(48) << "The Travell Boss\n";
		cout << "--------------------------------------------------------------------------------";
		cout << "Wrong Choice. Choose Again\n";
		cout << "--------------------------------------------------------------------------------";
		getch();
		goto ylyl;
	}
erer:
	system("cls");
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(48) << "The Travell Boss\n";
	cout << "--------------------------------------------------------------------------------";
	cout << setw(45) << "Change Made\n";
	cout << "--------------------------------------------------------------------------------";
	cout << "Would You Like To\n";
	cout << "--------------------------------------------------------------------------------";
	cout << "1)See The Details\n";
	cout << "2)Make More Changes\n";
	cout << "--------------------------------------------------------------------------------";
	cout << "Please Enter Option No : ";
	cin >> o;
	switch (o)
	{
	case 1:
		display();
		jconfirm();
		break;
	case 2:
		goto ylyl;
	default:
		system("cls");
		cout << "-------------------------------------------------------------------------------\n";
		cout << setw(48) << "The Travell Boss\n";
		cout << "--------------------------------------------------------------------------------";
		cout << "Wrong Choice. Choose Again";
		cout << "--------------------------------------------------------------------------------";
		getch();
		goto erer;
	}
}
void display()
{
	system("cls");
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(48) << "The Travell Boss\n";
	cout << "--------------------------------------------------------------------------------";
	cout << "All The Details Of Your Trip\n";
	cout << "--------------------------------------------------------------------------------";
	cout << "You Are Travelling To  " << t.place;
	cout << "\nDate Of Departure : " << t.dayd << "/" << t.monthd << "/" << t.yeard;
	cout << "\nDate Of Arrival   : " << t.daya << "/" << t.montha << "/" << t.yeara;
	cout << "\nYou Have Chosen To Fly Through " << t.flight << " In " << t.clas;
	cout << "\n--------------------------------------------------------------------------------";
	cout << "Total No Of People Travelling  : " << t.no;
	for (h = 0; h < t.no; h++)
	{
		cout << "\nDetails Of Passenger " << h + 1;
		cout << "\nName : " << t.names[h] << "\tAge : " << t.age[h];
	}
	cout << "\n--------------------------------------------------------------------------------";
	cout << "Total Price For Both Departure And Arrival Is " << t.flightprice << " Rials";
	cout << "\n--------------------------------------------------------------------------------";
	cout << "You Have Chosen To Stay In " << t.star << " Hotel " << t.hotel;
	cout << "\nThe Total Price For Staying In " << t.hotel << " For " << t.q << " Days Is " << t.hotelprice << " Rials";
	cout << "\n--------------------------------------------------------------------------------";
	cout << "Your Overall Price Is " << t.totprice << " Rials";
	cout << "\nTransport Is Taken Care Of ";
}
void flight()
{
dede:
	system("cls");
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(48) << "The Travell Boss\n";
	cout << "--------------------------------------------------------------------------------";
	cout << "Flights Available Are :\n";
	cout << "--------------------------------------------------------------------------------";
	cout << "1)Oman Air";
	cout << "\n2)" << t.flight;
	cout << "\n--------------------------------------------------------------------------------";
	cout << "Please Enter Option No : ";
	cin >> o;
	switch (o)
	{
	case 1:
		strcpy(t.flight, "Oman Air");
		break;
	case 2:
		break;
	default:
		system("cls");
		cout << "-------------------------------------------------------------------------------\n";
		cout << setw(48) << "The Travell Boss\n";
		cout << "--------------------------------------------------------------------------------";
		cout << "Wrong Choice. Choose Again\n";
		cout << "--------------------------------------------------------------------------------";
		getch();
		goto dede;
	}
}
void noofp()
{
	cout << "Enter No Of Passengers : ";
	cin >> t.no;
}
void flightc()
{
ees:
	system("cls");
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(48) << "The Travell Boss\n";
	cout << "--------------------------------------------------------------------------------";
	cout << "Which Flight Class Would You Like To Travel In\n";
	cout << "--------------------------------------------------------------------------------";
	cout << "1)First Class               (*1.5)\n";
	cout << "2)Business Class            (*1.25)\n";
	cout << "3)Economy                   (*1)\n";
	cout << "--------------------------------------------------------------------------------";
	cout << "PLease Enter Option No : ";
	cin >> c;
	switch (c)
	{
	case 1:
		strcpy(t.clas, "First Class");
		break;
	case 2:
		strcpy(t.clas, "Business Class");
		break;
	case 3:
		strcpy(t.clas, "Economy");
		break;
	default:
		system("cls");
		cout << "-------------------------------------------------------------------------------\n";
		cout << setw(48) << "The Travell Boss\n";
		cout << "--------------------------------------------------------------------------------";
		cout << "Wrong Choice. Choose Again\n";
		cout << "--------------------------------------------------------------------------------";
		getch();
		goto ees;
	}
}
void date()
{
njn:
	system("cls");
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(48) << "The Travell Boss\n";
	cout << "--------------------------------------------------------------------------------";
	cout << "You Have Chosen To Travel To " << t.place;
	cout << "\n--------------------------------------------------------------------------------";
	cout << "Please Enter Date Of Departure";
	cout << "\nDay : ";
	cin >> t.dayd;
	cout << "\nMonth : ";
	cin >> t.monthd;
	cout << "\nYear : ";
	cin >> t.yeard;
	cout << "\n--------------------------------------------------------------------------------";
	cout << "Please Enter date of Arrival";
	cout << "\nDay : ";
	cin >> t.daya;
	cout << "\nMonth : ";
	cin >> t.montha;
	cout << "\nYear : ";
	cin >> t.yeara;
	cout << "\n--------------------------------------------------------------------------------";
	noofp();
	for (h = 0; h < 2; h++)
	{
		system("cls");
		cout << "-------------------------------------------------------------------------------\n";
		cout << setw(48) << "The Travell Boss\n";
		cout << "--------------------------------------------------------------------------------";
		cout << "Checking Whether Flights And Tickets Are Available\n";
		cout << "--------------------------------------------------------------------------------";
		cout << "Please Wait";
		Sleep(400);
		cout << ".";
		Sleep(400);
		cout << ".";
		Sleep(400);
		cout << ".";
		Sleep(400);
		cout << ".";
		Sleep(400);
		system("cls");
	}
	
	int lol = 3, olo;
	olo = rand()%6;
	if (lol == olo)
	{
		cout << "-------------------------------------------------------------------------------\n";
		cout << setw(48) << "The Travell Boss\n";
		cout << "\n--------------------------------------------------------------------------------";
		cout << "We Are Sorry But All Flights Are Full On ";
		cout << t.dayd << "/" << t.monthd << "/" << t.yeard;
		cout << "\n--------------------------------------------------------------------------------";
		cout << "Please Choose Another Date ";
		getch();
		goto njn;
	}
}
void hotel()
{
dsd:
	system("cls");
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(48) << "The Travell Boss\n";
	cout << "--------------------------------------------------------------------------------";
	cout << "Best Hotels Available At The Least Price Are Being Chosen For You\n";
	cout << "--------------------------------------------------------------------------------";
	cout << "You Just Need To Decide The Quality\n";
	cout << "--------------------------------------------------------------------------------";
	cout << "Quality" << setw(27) << "Price Per Day\n";
	cout << "--------------------------------------------------------------------------------";
	cout << "1)5 STAR" << setw(22) << "12.5\n";
	cout << "2)4 STAR" << setw(22) << "10.0\n";
	cout << "3)3 STAR" << setw(22) << "07.5\n";
	cout << "--------------------------------------------------------------------------------";
	cout << "Enter Option no : ";
	cin >> d;
	switch (d)
	{
	case 1:
		strcpy(t.star, "5 Star");
		strcpy(t.hotel, "Marriott");
		break;
	case 2:
		strcpy(t.star, "4 Star");
		strcpy(t.hotel, "Raddison Blue");
		break;
	case 3:
		strcpy(t.star, "3 Star");
		strcpy(t.hotel, "Crown Plaza");
		break;
	default:
		system("cls");
		cout << "-------------------------------------------------------------------------------\n";
		cout << setw(48) << "The Travell Boss\n";
		cout << "--------------------------------------------------------------------------------";



		cout << "Wrong Choice. Choose Again\n";
		cout << "--------------------------------------------------------------------------------";
		getch();
		goto dsd;
	}
	system("cls");
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(48) << "The Travell Boss\n";
	cout << "--------------------------------------------------------------------------------";
	cout << "\nFor How Many Days Would You Like To Stay In The Hotel : ";
	cout << "\n--------------------------------------------------------------------------------";
	cin >> t.q;
}
void price()
{
	t.flightprice = fliprice * 2 * t.no;
	if (c == 1)
	{
		t.flightprice = t.flightprice * 1.5;
	}
	else if (c == 2)
	{
		t.flightprice = t.flightprice * 1.25;
	}
	else
	{
		t.flightprice = t.flightprice * 1;
	}
	t.hotelprice = 1;
	t.hotelprice = t.no * t.q;
	if (d == 1)
	{
		t.hotelprice = t.hotelprice * 12.5;
	}
	else if (d == 2)
	{
		t.hotelprice = t.hotelprice * 10;
	}
	else
	{
		t.hotelprice = t.hotelprice * 7.5;
	}
	t.totprice = t.hotelprice + t.flightprice;
}
void passengers()
{
	system("cls");
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(48) << "The Travell Boss\n";
	cout << "--------------------------------------------------------------------------------";
	cout << "Please Enter The Following :";
	cout << "\n-------------------------------------------------------------------------------";
	for (h = 0; h < t.no; h++)
	{
		cout << "\nDetails Of " << h + 1 << " Passenger";
		cout << "\nName : ";
		gets_s(t.names[h]);
		cout << "\nAge : ";
		cin >> t.age[h];
	}
}
void firstcon()
{
	f2.open("Trips.dat", ios::out | ios::app);
	f2.write((char*)&t, sizeof(t));
	f2.close();
}
void secondcon()
{
	f2.open("Trips.dat", ios::out | ios::app);
	f2.seekp(-1*static_cast<int>(sizeof(t)), ios::cur);
	f2.write((char*)&t, sizeof(t));
	f2.close();
}
void confirm()
{
tol:
	system("cls");
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(48) << "The Travell Boss\n";
	cout << "--------------------------------------------------------------------------------";
	cout << setw(55) << "Would You Like To Try The Lotery\n";
	cout << setw(67) << "If You Win You Get A 25% Discount In Your Overall Price\n";
	cout << "--------------------------------------------------------------------------------";
	cout << "1)Yes\n";
	cout << "2)No\n";
	cout << "--------------------------------------------------------------------------------";
	cout << "Please Enter Option No : ";
	cin >> o;
	switch (o)
	{
	case 1:
	rkr:
		system("cls");
		cout << "-------------------------------------------------------------------------------\n";
		cout << setw(48) << "The Travell Boss\n";
		cout << "--------------------------------------------------------------------------------";
		cout << "Enter A No From 0 To 5 : ";
		cin >> o;
		if (o > 5 || o < 0)
		{
			cout << "--------------------------------------------------------------------------------";
			cout << "Please Enter A No From 0 To 5\n";
			cout << "--------------------------------------------------------------------------------";
			getch();
			goto rkr;
		}
		w = rand()%6;
		system("cls");
		if (o == w)
		{
			cout << "-------------------------------------------------------------------------------\n";
			cout << setw(48) << "The Travell Boss\n";
			cout << "--------------------------------------------------------------------------------";
			cout << "CONGRATS YOU HAVE WON THE LOTERY\n";
			cout << "25 % DISCOUNT IS ALL YOURS\n";
			cout << "--------------------------------------------------------------------------------";
			cout << "Your New Overall Is : ";
			t.totprice = (t.totprice * 75) / 100;
			cout << t.totprice;
			getch();
		}
		else
		{
			cout << "-------------------------------------------------------------------------------\n";
			cout << setw(48) << "The Travell Boss\n";
			cout << "--------------------------------------------------------------------------------";
			cout << "You Did Not Win .Beter Luck Next Time\n";
			cout << "--------------------------------------------------------------------------------";
			getch();
		}
		break;
	case 2:
		break;
	default:
		cout << "--------------------------------------------------------------------------------";
		cout << "Wrong Choice. Choose Again\n";
		cout << "--------------------------------------------------------------------------------";
		getch();
		goto tol;
	}
	strcpy(t.nameid, p.namei);
	system("cls");
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(48) << "The Travell Boss\n";
	cout << "\n-------------------------------------------------------------------------------\n";
	cout << setw(58) << "Congrats Your Flight Is Now Confirmed\n";
	cout << setw(47) << "Have A Nice Trip\n";
	cout << setw(58) << "Thank You For Using The Travel Boss App";
	if (s == 1)
		firstcon();
	else
		secondcon();
klk:
	cout << "\n--------------------------------------------------------------------------------";
	cout << "\nWould You Like To ";
	cout << "\n--------------------------------------------------------------------------------";
	cout << "1)Go Back To Main Menu";
	cout << "\n2)Exit The App";
	cout << "\n--------------------------------------------------------------------------------";
	cout << "\nPlease Enter Option No : ";
	cin >> o;
	switch (o)
	{
	case 1:
		break;
	case 2:
		system("cls");
		cout << "-------------------------------------------------------------------------------\n";
		cout << setw(48) << "The Travell Boss\n";
		cout << "\n--------------------------------------------------------------------------------";
		cout << "Thank You For Using This App  :)";
		cout << "\n--------------------------------------------------------------------------------";
		getch();
		exit(0);
	default:
		system("cls");
		cout << "-------------------------------------------------------------------------------\n";
		cout << setw(48) << "The Travell Boss\n";
		cout << "\n--------------------------------------------------------------------------------";
		cout << "Wrong Choice. Choose Again";
		cout << "\n--------------------------------------------------------------------------------";
		getch();
		goto klk;
	}
}
void jconfirm()
{
	getch();
	system("cls");
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(48) << "The Travell Boss\n";
	cout << "\n--------------------------------------------------------------------------------";
	cout << "Would You Like To ";
	cout << "\n--------------------------------------------------------------------------------";
	cout << "1)Confirm It (Once Confirmed You Can't Change)";
	cout << "\n2)Change It";
	cout << "\n--------------------------------------------------------------------------------";
	cout << "Please Enter Option No : ";
	cin >> o;
	switch (o)
	{
	case 1:
		confirm();
		break;
	case 2:
		change();
		break;
	default:
		system("cls");
		cout << "-------------------------------------------------------------------------------\n";
		cout << setw(48) << "The Travell Boss\n";
		cout << "-------------------------------------------------------------------------------\n";
		cout << "Wrong Choice. Choose Again\n";
		cout << "-------------------------------------------------------------------------------\n";
	}
}
void common()
{
	s = 1;
	date();
	flight();
	flightc();
	passengers();
	hotel();
	price();
	display();
	jconfirm();
}
void china()
{
	strcpy(t.flight, "Chinese Express Airlines");
fd:
	system("cls");
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(48) << "The Travell Boss\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(35) << "China" << setw(32) << "Price Per Person\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(29) << "1)Shangai" << setw(31) << "103\n";
	cout << setw(27) << "2)Tibet" << setw(33) << "101\n";
	cout << setw(31) << "3)Hong Kong" << setw(29) << "130\n";
	cout << setw(29) << "4)Baijing" << setw(31) << "120\n";
	cout << setw(30) << "5)Go Back\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(54) << "Please Enter Option No : ";
	cin >> o;
	switch (o)
	{
	case 1:
		fliprice = 103;
		strcpy(t.place, "Shangai");
		if (s == 0)
		{
			common();
		}
		break;
	case 2:
		fliprice = 101;
		strcpy(t.place, "Tibet");
		if (s == 0)
		{
			common();
		}
		break;
	case 3:
		fliprice = 130;
		strcpy(t.place, "Hong Kong");
		if (s == 0)
		{
			common();
		}
		break;
	case 4:
		fliprice = 120;
		strcpy(t.place, "Baijing");
		if (s == 0)
		{
			common();
		}
		break;
	case 5:
		asia();
		break;
	default:
		system("cls");
		cout << "-------------------------------------------------------------------------------\n";
		cout << setw(48) << "The Travell Boss\n";
		cout << "--------------------------------------------------------------------------------";
		cout << "Wrong Choice. Choose Again\n";
		cout << "--------------------------------------------------------------------------------";
		getch();
		goto fd;
	}
}
void india()
{
	strcpy(t.flight, "Indian Air");
we:
	system("cls");
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(48) << "The Travell Boss\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(35) << "India" << setw(32) << "Price Per Person\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(27) << "1)Delhi" << setw(33) << "80\n";
	cout << setw(28) << "2)Mumbai" << setw(32) << "60\n";
	cout << setw(26) << "3)Agra" << setw(34) << "80\n";
	cout << setw(29) << "4)Chennai" << setw(31) << "79\n";
	cout << setw(28) << "5)Cochin" << setw(32) << "98\n";
	cout << setw(30) << "6)Go Back\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(54) << "Please Enter Option No : ";
	cin >> o;
	switch (o)
	{
	case 1:
		fliprice = 80;
		strcpy(t.place, "Delhi");
		if (s == 0)
		{
			common();
		}
		break;
	case 2:
		fliprice = 60;
		strcpy(t.place, "Mumbai");
		if (s == 0)
		{
			common();
		}
		break;
	case 3:
		fliprice = 80;
		strcpy(t.place, "Agra");
		if (s == 0)
		{
			common();
		}
		break;
	case 4:
		fliprice = 79;
		strcpy(t.place, "Chennai");
		if (s == 0)
		{
			common();
		}
		break;
	case 5:
		fliprice = 98;
		strcpy(t.place, "Cochin");
		if (s == 0)
		{
			common();
		}
		break;
	case 6:
		asia();
		break;
	default:
		system("cls");
		cout << "-------------------------------------------------------------------------------\n";
		cout << setw(48) << "The Travell Boss\n";
		cout << "-------------------------------------------------------------------------------\n";
		cout << "Wrong Choice. Choose Again";
		cout << "\n--------------------------------------------------------------------------------";
		getch();
		goto we;
	}
}
void srilanka()
{
	strcpy(t.flight, "Srilankan Airlines");
qpq:
	system("cls");
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(48) << "The Travell Boss\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(38) << "Srilanka" << setw(29) << "Price Per Person\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(29) << "1)Colombo" << setw(31) << "111\n";
	cout << setw(32) << "2)Hambantota" << setw(28) << "109\n";
	cout << setw(30) << "3)Go Back\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(54) << "Please Enter Option No : ";
	cin >> o;
	switch (o)
	{
	case 1:
		fliprice = 111;
		strcpy(t.place, "Colombo");
		if (s == 0)
		{
			common();
		}
		break;
	case 2:
		fliprice = 109;
		strcpy(t.place, "Hambantota");
		if (s == 0)
		{
			common();
		}
		break;
	case 3:
		asia();
		break;
	default:
		system("cls");
		cout << "-------------------------------------------------------------------------------\n";
		cout << setw(48) << "The Travell Boss\n";
		cout << "--------------------------------------------------------------------------------";
		cout << "\nWrong Choice. Choose Again";
		cout << "\n--------------------------------------------------------------------------------";
		getch();
		goto qpq;
	}
}
void malaysia()
{
	strcpy(t.flight, "Malaysian Airlines");
ouo:
	system("cls");
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(48) << "The Travell Boss\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(38) << "Malaysia" << setw(29) << "Price Per Person\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(33) << "1)Kula Lumpur" << setw(27) << "190\n";
	cout << setw(28) << "2)Penang" << setw(32) << "180\n";
	cout << setw(30) << "3)Go Back\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(54) << "Please Enter Option No : ";
	cin >> o;
	switch (o)
	{
	case 1:
		fliprice = 190;
		strcpy(t.place, "Kula Lumpur");
		if (s == 0)
		{
			common();
		}
		break;
	case 2:
		fliprice = 180;
		strcpy(t.place, "Penang");
		if (s == 0)
		{
			common();
		}
		break;
	case 3:
		asia();
		break;
	default:
		system("cls");
		cout << "-------------------------------------------------------------------------------\n";
		cout << setw(48) << "The Travell Boss\n";
		cout << "--------------------------------------------------------------------------------";
		cout << "\nWrong Choice. Choose Again";
		cout << "\n--------------------------------------------------------------------------------";
		getch();
		goto ouo;
	}
}
void usa()
{
bvb:
	system("cls");
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(48) << "The Travell Boss\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(33) << "USA" << setw(34) << "Price Per Person\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(29) << "1)Florida" << setw(31) << "220\n";
	cout << setw(30) << "2)New York" << setw(30) << "210\n";
	cout << setw(35) << "3)Washington DC" << setw(25) << "200\n";
	cout << setw(32) << "4)California" << setw(28) << "230\n";
	cout << setw(34) << "5)Los Angelous" << setw(26) << "220\n";
	cout << setw(30) << "6)Go Back\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(54) << "Please Enter Option No : ";
	cin >> o;
	switch (o)
	{
	case 1:
		fliprice = 220;
		strcpy(t.place, "Florida");
		if (s == 0)
		{
			common();
		}
		break;
	case 2:
		fliprice = 210;
		strcpy(t.place, "New York");
		if (s == 0)
		{
			common();
		}
		break;
	case 3:
		fliprice = 200;
		strcpy(t.place, "Washington DC");
		if (s == 0)
		{
			common();
		}
		break;
	case 4:
		fliprice = 230;
		strcpy(t.place, "California");
		if (s == 0)
		{
			common();
		}
		break;
	case 5:
		fliprice = 220;
		strcpy(t.place, "Los Angelous");
		if (s == 0)
		{
			common();
		}
		break;
	case 6:
		america();
		break;
	default:
		system("cls");
		cout << "-------------------------------------------------------------------------------\n";
		cout << setw(48) << "The Travell Boss\n";
		cout << "--------------------------------------------------------------------------------";
		cout << "\nWrong Choice. Choose Again";
		cout << "\n--------------------------------------------------------------------------------";
		getch();
		goto bvb;
	}
}
void canada()
{
udu:
	system("cls");
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(48) << "The Travell Boss\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(36) << "Canada" << setw(31) << "Price Per Person\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(29) << "1)Toronto" << setw(31) << "250\n";
	cout << setw(31) << "2)Vancouver" << setw(29) << "220\n";
	cout << setw(30) << "3)Whistler" << setw(30) << "230\n";
	cout << setw(34) << "4)Old Monteral" << setw(26) << "230\n";
	cout << setw(30) << "5)Go Back\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(54) << "Please Enter Option No : ";
	cin >> o;
	switch (o)
	{
	case 1:
		fliprice = 250;
		strcpy(t.place, "Toronto");
		if (s == 0)
		{
			common();
		}
		break;
	case 2:
		fliprice = 220;
		strcpy(t.place, "Vancouver");
		if (s == 0)
		{
			common();
		}
		break;
	case 3:
		fliprice = 230;
		strcpy(t.place, "Whistler");
		if (s == 0)
		{
			common();
		}
		break;
	case 4:
		fliprice = 230;
		strcpy(t.place, "Old Monteral");
		if (s == 0)
		{
			common();
		}
		break;
	case 5:
		america();
		break;
	default:
		system("cls");
		cout << "-------------------------------------------------------------------------------\n";
		cout << setw(48) << "The Travell Boss\n";
		cout << "--------------------------------------------------------------------------------";
		cout << "\nWrong Choice. Choose Again";
		cout << "\n--------------------------------------------------------------------------------";
		getch();
		goto udu;
	}
}
void brazil()
{
vss:
	system("cls");
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(48) << "The Travell Boss\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(36) << "Brazil" << setw(31) << "Price Per Person\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(36) << "1)Rio de Janerio" << setw(24) << "180\n";
	cout << setw(31) << "2)Sao Paulo" << setw(29) << "190\n";
	cout << setw(33) << "3)Port Seguro" << setw(27) << "185\n";
	cout << setw(35) << "4)Florianopolis" << setw(25) << "205\n";
	cout << setw(30) << "5)Go Back\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(54) << "Please Enter Option No : ";
	cin >> o;
	switch (o)
	{
	case 1:
		fliprice = 180;
		strcpy(t.place, "Rio de Janerio");
		if (s == 0)
		{
			common();
		}
		break;
	case 2:
		fliprice = 190;
		strcpy(t.place, "Sao Paulo");
		if (s == 0)
		{
			common();
		}
		break;
	case 3:
		fliprice = 185;
		strcpy(t.place, "Port Seguro");
		if (s == 0)
		{
			common();
		}
		break;
	case 4:
		fliprice = 205;
		strcpy(t.place, "Florianopolis");
		if (s == 0)
		{
			common();
		}
		break;
	case 5:
		america();
		break;
	default:
		system("cls");
		cout << "-------------------------------------------------------------------------------\n";
		cout << setw(48) << "The Travell Boss\n";
		cout << "--------------------------------------------------------------------------------";
		cout << "\nWrong Choice. Choose Again";
		cout << "\n--------------------------------------------------------------------------------";
		getch();
		goto vss;
	}
}
void argentina()
{
ana:
	system("cls");
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(48) << "The Travell Boss\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(39) << "Argentina" << setw(28) << "Price Per Person\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(34) << "1)Buenos Aires" << setw(26) << "210\n";
	cout << setw(29) << "2)Cordoba" << setw(31) << "220\n";
	cout << setw(29) << "3)Rosario" << setw(31) << "220\n";
	cout << setw(29) << "4)Mendoza" << setw(31) << "200\n";
	cout << setw(30) << "5)Go Back\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(54) << "Please Enter Option No : ";
	cin >> o;
	switch (o)
	{
	case 1:
		fliprice = 210;
		strcpy(t.place, "Buenos Aires");
		if (s == 0)
		{
			common();
		}
		break;
	case 2:
		fliprice = 220;
		strcpy(t.place, "Cordoba");
		if (s == 0)
		{
			common();
		}
		break;
	case 3:
		fliprice = 220;
		strcpy(t.place, "Rosario");
		if (s == 0)
		{
			common();
		}
		break;
	case 4:
		fliprice = 200;
		strcpy(t.place, "Mendoza");
		if (s == 0)
		{
			common();
		}
		break;
	case 5:
		america();
		break;
	default:
		system("cls");
		cout << "-------------------------------------------------------------------------------\n";
		cout << setw(48) << "The Travell Boss\n";
		cout << "--------------------------------------------------------------------------------";
		cout << "\nWrong Choice. Choose Again";
		cout << "\n--------------------------------------------------------------------------------";
		getch();
		goto ana;
	}
}
void mexico()
{
mcm:
	system("cls");
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(48) << "The Travell Boss\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(36) << "Mexico" << setw(31) << "Price Per Person\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(33) << "1)Mexico city" << setw(27) << "240\n";
	cout << setw(28) << "2)Cancun" << setw(32) << "250\n";
	cout << setw(30) << "3)Corfumel" << setw(30) << "230\n";
	cout << setw(30) << "4)Go Back\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(54) << "Please Enter Option No : ";
	cin >> o;
	switch (o)
	{
	case 1:
		fliprice = 240;
		strcpy(t.place, "Mexico city");
		if (s == 0)
		{
			common();
		}
		break;
	case 2:
		fliprice = 250;
		strcpy(t.place, "Cancun");
		if (s == 0)
		{
			common();
		}
		break;
	case 3:
		fliprice = 230;
		strcpy(t.place, "Corfumel");
		if (s == 0)
		{
			common();
		}
		break;
	case 4:
		america();
		break;
	default:
		system("cls");
		cout << "-------------------------------------------------------------------------------\n";
		cout << setw(48) << "The Travell Boss\n";
		cout << "--------------------------------------------------------------------------------";
		cout << "\nWrong Choice. Choose Again";
		cout << "\n--------------------------------------------------------------------------------";
		getch();
		goto mcm;
	}
}
void asia()
{
gh:
	system("cls");
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(48) << "The Travell Boss\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(34) << "Asia" << setw(33) << "Price Per Person\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(27) << "1)China\n";
	cout << setw(27) << "2)India\n";
	cout << setw(31) << "3)Sri lanka\n";
	cout << setw(30) << "4)Malaysia\n";
	cout << setw(30) << "5)Singapore" << setw(29) << "120\n";
	cout << setw(29) << "6)Go Back\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(54) << "Please Enter Option No : ";
	cin >> o;
	switch (o)
	{
	case 1:
		china();
		break;
	case 2:
		india();
		break;
	case 3:
		srilanka();
		break;
	case 4:
		malaysia();
		break;
	case 5:
		fliprice = 120;
		strcpy(t.flight, "Singapore Airlines");
		strcpy(t.place, "Singapore");
		if (s == 0)
		{
			common();
		}
		break;
	case 6:
		trip();
		break;
	default:
		system("cls");
		cout << "-------------------------------------------------------------------------------\n";
		cout << setw(48) << "The Travell Boss\n";
		cout << "--------------------------------------------------------------------------------";
		cout << "\nWrong Choice. Choose Again";
		cout << "\n--------------------------------------------------------------------------------";
		getch();
		goto gh;
	}
}
void america()
{
	strcpy(t.flight, "American Airlines");
hu:
	system("cls");
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(48) << "The Travell Boss\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(37) << "America\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(25) << "1)USA\n";
	cout << setw(28) << "2)Canada\n";
	cout << setw(28) << "3)Brazil\n";
	cout << setw(31) << "4)Argentina\n";
	cout << setw(28) << "5)Mexico\n";
	cout << setw(29) << "6)Go Back\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(54) << "Please Enter Option No : ";
	cin >> o;
	switch (o)
	{
	case 1:
		usa();
		break;
	case 2:
		canada();
		break;
	case 3:
		brazil();
		break;
	case 4:
		argentina();
		break;
	case 5:
		mexico();
		break;
	case 6:
		trip();
		break;
	default:
		system("cls");
		cout << "-------------------------------------------------------------------------------\n";
		cout << setw(48) << "The Travell Boss\n";
		cout << "--------------------------------------------------------------------------------";
		cout << "\nWrong Choice. Choose Again";
		cout << "\n--------------------------------------------------------------------------------";
		getch();
		goto hu;
	}
}
void australia()
{
	strcpy(t.flight, "Australian Airlines");
opop:
	system("cls");
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(48) << "The Travell Boss\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(39) << "Australia" << setw(28) << "Price Per Person\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(28) << "1)Sydney" << setw(32) << "250\n";
	cout << setw(31) << "2)Melbourne" << setw(29) << "220\n";
	cout << setw(31) << "3)Goldcoast" << setw(29) << "210\n";
	cout << setw(29) << "4)Go Back\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(54) << "Please Enter Option No : ";
	cin >> o;
	switch (o)
	{
	case 1:
		strcpy(t.place, "Sydney");
		fliprice = 250;
		if (s == 0)
		{
			common();
		}
		break;
	case 2:
		fliprice = 220;
		strcpy(t.place, "Melbourne");
		if (s == 0)
		{
			common();
		}
		break;
	case 3:
		fliprice = 210;
		strcpy(t.place, "Goldcast");
		if (s == 0)
		{
			common();
		}
		break;
	case 4:
		trip();
		break;
	default:
		system("cls");
		cout << "-------------------------------------------------------------------------------\n";
		cout << setw(48) << "The Travell Boss\n";
		cout << "--------------------------------------------------------------------------------";
		cout << "\nWrong Choice. Choose Again";
		cout << "\n--------------------------------------------------------------------------------";
		getch();
		goto opop;
	}
}
void africa()
{
	strcpy(t.flight, "Ethiopian Airlines");
klk:
	system("cls");
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(48) << "The Travell Boss\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(36) << "Africa" << setw(31) << "Price Per Person\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(31) << "1)Cape Town" << setw(29) << "190\n";
	cout << setw(27) << "2)Cario" << setw(33) << "150\n";
	cout << setw(30) << "3)Tenerife" << setw(30) << "180\n";
	cout << setw(31) << "4)Maurituis" << setw(29) << "190\n";
	cout << setw(29) << "5)Go Back\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(54) << "Please Enter Option No : ";
	cin >> o;
	switch (o)
	{
	case 1:
		fliprice = 190;
		strcpy(t.place, "Cape Town");
		if (s == 0)
		{
			common();
		}
		break;
	case 2:
		fliprice = 150;
		strcpy(t.place, "Cario");
		if (s == 0)
		{
			common();
		}
		break;
	case 3:
		fliprice = 180;
		strcpy(t.place, "Tenerife");
		if (s == 0)
		{
			common();
		}
		break;
	case 4:
		fliprice = 190;
		strcpy(t.place, "Maurituis");
		if (s == 0)
		{
			common();
		}
		break;
	case 5:
		trip();
		break;
	default:
		system("cls");
		cout << "-------------------------------------------------------------------------------\n";
		cout << setw(48) << "The Travell Boss\n";
		cout << "--------------------------------------------------------------------------------";
		cout << "\nWrong Choice. Choose Again";
		cout << "\n--------------------------------------------------------------------------------";
		getch();
		goto klk;
	}
}
void europe()
{
	strcpy(t.flight, "Lufthasan Airlines");
ree:
	system("cls");
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(48) << "The Travell Boss\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(36) << "Europe" << setw(31) << "Price Per Person\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(27) << "1)Paris" << setw(33) << "190\n";
	cout << setw(28) << "2)Poland" << setw(32) << "200\n";
	cout << setw(26) << "3)Rome" << setw(34) << "210\n";
	cout << setw(30) << "4)Istanbul" << setw(30) << "180\n";
	cout << setw(29) << "5)Go Back\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(54) << "Please Enter Option No : ";
	cin >> o;
	switch (o)
	{
	case 1:
		strcpy(t.place, "Paris");
		fliprice = 190;
		if (s == 0)
		{
			common();
		}
		break;
	case 2:
		strcpy(t.place, "Poland");
		fliprice = 200;
		if (s == 0)
		{
			common();
		}
		break;
	case 3:
		strcpy(t.place, "Rome");
		fliprice = 210;
		if (s == 0)
		{
			common();
		}
		break;
	case 4:
		strcpy(t.place, "Istanbul");
		fliprice = 180;
		if (s == 0)
		{
			common();
		}
		break;
	case 5:
		trip();
		break;
	default:
		system("cls");
		cout << "-------------------------------------------------------------------------------\n";
		cout << setw(48) << "The Travell Boss\n";
		cout << "--------------------------------------------------------------------------------";
		cout << "\nWrong Choice. Choose Again";
		cout << "\n--------------------------------------------------------------------------------";
		getch();
		goto ree;
	}
}
void trip()
{
popo:
	system("cls");
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(48) << "The Travell Boss\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(48) << "Select Destination\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(26) << "1)Asia\n";
	cout << setw(29) << "2)America\n";
	cout << setw(31) << "3)Australia\n";
	cout << setw(28) << "4)Africa\n";
	cout << setw(28) << "5)Europe\n";
	if (s == 0)
	{
		cout << setw(42) << "6)Go Back To Main Menu\n";
	}
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(54) << "Please Enter Option No : ";
	cin >> o;
	switch (o)
	{
	case 1:
		asia();
		break;
	case 2:
		america();
		break;
	case 3:
		australia();
		break;
	case 4:
		africa();
		break;
	case 5:
		europe();
		break;
	case 6:
		break;
	default:
		system("cls");
		cout << "-------------------------------------------------------------------------------\n";
		cout << setw(48) << "The Travell Boss\n";
		cout << "--------------------------------------------------------------------------------";
		cout << "Wrong Choice. Choose Again\n";
		cout << "--------------------------------------------------------------------------------";
		getch();
		goto popo;
	}
}
int main()
{
	int x = 0;
	char namecheck[20], passcheck[20];
beg:
	system("cls");
	s = 0;
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(50) << "WELCOME TO TRAVELL BOSS\n";
	cout << setw(67) << "Plan Trips,Book Tickets For Fligths, Hotels And More\n";
	cout << "--------------------------------------------------------------------------------\n";
	cout << setw(32) << "1)Sign Up\n";
	cout << setw(31) << "2)Log In\n";
	cout << setw(45) << "3)Administrator Log In\n";
	cout << setw(29) << "4)Exit\n";
	cout << "-------------------------------------------------------------------------------\n";
	cout << setw(50) << "Please Enter Option No : ";
	cin >> o;
	switch (o)
	{
	case 1:
		s = 0;
		system("cls");
		for (h = 0; h < 2; h++)
		{
			cout << "-------------------------------------------------------------------------------\n";
			cout << setw(48) << "The Travell Boss\n";
			cout << "--------------------------------------------------------------------------------\n";
			cout << "Loading Sign Up Desk\n";
			cout << "--------------------------------------------------------------------------------\n";
			Sleep(400);
			cout << ".";
			Sleep(400);
			cout << ".";
			Sleep(400);
			cout << ".";
			Sleep(400);
			cout << ".";
			
			system("cls");
		}
	hk:
		system("cls");
		cout << "-------------------------------------------------------------------------------\n";
		cout << setw(48) << "The Travell Boss\n";
		cout << "--------------------------------------------------------------------------------\n";
		cout << setw(53) << "Welcome To The Sign Up Desk\n";
		cout << "--------------------------------------------------------------------------------\n";
		cout << "Kindly Do The Following\n";
		cout << "--------------------------------------------------------------------------------\n";
		cout << "Enter Your Name:";
		gets_s(p.namei);
		//cout << "--------------------------------------------------------------------------------\n";
		
		gets_s(p.namei);
		cout << "Enter A Password : ";
		gets_s(p.password);
		cout << "\n--------------------------------------------------------------------------------\n";
		cout << "Enter Your Email : ";
		gets_s(p.email);
		cout << "\n--------------------------------------------------------------------------------";
		cout << "\nEnter Your City  : ";
		gets_s(p.city);
		f1.open("Logs.dat", ios::in);
		while (f1.read((char*)&a, sizeof(a)))
		{
			if (strcmpi(a.namei, p.namei) == 0 && strcmpi(p.namei, a.namei) == 0)
			{
				system("cls");
				cout << "-------------------------------------------------------------------------------\n";
				cout << setw(48) << "The Travell Boss\n";
				cout << "--------------------------------------------------------------------------------\n";
				cout << setw(52) << "Please Enter Another Name\n";
				cout << setw(53) << "This Name Is Already Taken\n";
				cout << "--------------------------------------------------------------------------------\n";
				getch();
				goto hk;
			}
		}
		f1.close();
		f1.open("Logs.dat", ios::out | ios::app);
		f1.write((char*)&p, sizeof(p));
		f1.close();
		for (h = 0; h < 2; h++)
		{
			system("cls");
			cout << "-------------------------------------------------------------------------------\n";
			cout << setw(48) << "The Travell Boss\n";
			cout << "--------------------------------------------------------------------------------";
			cout << "\nSigning You Up\n";
			cout << "--------------------------------------------------------------------------------";
			cout << "\nPlease Wait";
			Sleep(400);
			cout << ".";
			Sleep(400);
			cout << ".";
			Sleep(400);
			cout << ".";
			Sleep(400);
			cout << ".";
			Sleep(400);
			system("cls");
		}
		cout << "-------------------------------------------------------------------------------\n";
		cout << setw(48) << "\nThe Travell Boss\n";
		cout << "--------------------------------------------------------------------------------";
		cout << setw(47) << "\nSign Up SUCCESSFUL\n";
	tat:
		cout << "--------------------------------------------------------------------------------";
		cout << "\nWould You Like To\n";
		cout << "--------------------------------------------------------------------------------";
		cout << "\n1)Go Back To Main Menu";
		cout << "\n2)Plan Your Trip\n";
		cout << "--------------------------------------------------------------------------------";
		cout << "\nPlease Enter Option No : ";
		cin >> o;
		switch (o)
		{
		case 1:
			goto beg;
		case 2:
			trip();
			goto beg;
		default:
			cout << "\n--------------------------------------------------------------------------------";
			cout << "\nWrong Option .Choose Again";
			cout << "\n--------------------------------------------------------------------------------";
			getch();
			goto tat;
		}
	case 2:
	fyfy:
		system("cls");
		cout << "-------------------------------------------------------------------------------\n";
		cout << setw(48) << "The Travell Boss\n";
		cout << "--------------------------------------------------------------------------------";
		cout << setw(55) << "\nWelcome To The Log In Desk\n";
		cout << "--------------------------------------------------------------------------------";
		cout << "\nPlease Enter The Following\n";
		cout << "--------------------------------------------------------------------------------";
		cout << "\nEnter Registered Name : ";
		gets_s(namecheck);
		cout << "\n--------------------------------------------------------------------------------";
		cout << "\nEnter Your Password : ";
		gets_s(passcheck);
		for (h = 0; h < 2; h++)
		{
			system("cls");
			cout << "-------------------------------------------------------------------------------\n";
			cout << setw(48) << "The Travell Boss\n";
			cout << "--------------------------------------------------------------------------------";
			cout << "Verifying Few Things\n";
			cout << "--------------------------------------------------------------------------------";
			cout << "\nPlease wait";
			Sleep(400);
			cout << ".";
			Sleep(400);
			cout << ".";
			Sleep(400);
			cout << ".";
			Sleep(400);
			cout << ".";
			Sleep(400);
		}
		
		f1.open("Logs.dat", ios::in | ios::app);
		while (f1.read((char*)&p, sizeof(p)))
		{
			if (strcmpi(p.namei, namecheck) == 0 && strcmpi(p.password, passcheck) == 0)
			{
				x++;
			}
		}
		if (x == 1)
		{
			f1.close();
		kpkp:
			system("cls");
			cout << "-------------------------------------------------------------------------------\n";
			cout << setw(48) << "The Travell Boss\n";
			cout << "--------------------------------------------------------------------------------";
			cout << setw(54) << "\nYou Have Being Logged In\n";
			cout << "--------------------------------------------------------------------------------";
			cout << "\nWould You Like To\n";
			cout << "--------------------------------------------------------------------------------";
			cout << "\n1)Proceed To Plan Your Trip\n";
			cout << "2)Go Back To Main Menu\n";
			cout << "3)Display The Trip Details\n";
			cout << "--------------------------------------------------------------------------------";
			cout << "\nPlease Enter Option No : ";
			cin >> w;
			switch (w)
			{
			case 1:
				trip();
				goto beg;
			case 2:
				goto beg;
			case 3:
				f1.open("Trips.dat", ios::in);
				w = 0;
				while (f1.read((char*)&t, sizeof(t)))
				{
					if (strcmpi(p.namei, t.nameid) == 0 && strcmpi(t.nameid, p.namei) == 0)
					{
						w++;
					}
				}
				f1.close();
				switch (w)
				{
				case 0:
					system("cls");
					cout << "-------------------------------------------------------------------------------\n";
					cout << setw(48) << "The Travell Boss\n";
					cout << "--------------------------------------------------------------------------------";
					cout << "\nIt Seems You Have Not Planned Your Trip Yet\n";
					cout << "--------------------------------------------------------------------------------\n";
					getch();
					goto kpkp;
				case 1:
					f1.open("Trips.dat", ios::in);
					while (f1.read((char*)&t, sizeof(t)))
					{
						if (strcmpi(p.namei, t.nameid) == 0 && strcmpi(t.nameid, p.namei) == 0)
						{
							display();
							getch();
							f1.close();
							goto kpkp;
						}
					}
					break;
				case 2:
					f1.open("Trips.dat", ios::in);
				jaj:
					system("cls");
					cout << "-------------------------------------------------------------------------------\n";
					cout << setw(48) << "The Travell Boss\n";
					cout << "--------------------------------------------------------------------------------";
					cout << "There Are 2 Trips Planned. Do You Want To See\n";
					cout << "--------------------------------------------------------------------------------";
					cout << "\n1)The First One\n";
					cout << "2)The Second One\n";
					cout << "--------------------------------------------------------------------------------";
					cout << "\nPlease Enter Option No : ";
					cin >> o;
					switch (o)
					{
					case 2:
						w = 0;
						while (f1.read((char*)&t, sizeof(t)))
						{
							if (strcmpi(p.namei, t.nameid) == 0 && strcmpi(t.nameid, p.namei) == 0)
							{
								w++;
								if (w == 2)
								{
									display();
									getch();
									f1.close();
									goto kpkp;
								}
							}
						}
						break;
					case 1:
						while (f1.read((char*)&t, sizeof(t)))
						{
							if (strcmpi(p.namei, t.nameid) == 0 && strcmpi(t.nameid, p.namei) == 0)
							{
								display();
								getch();
								f1.close();
								goto kpkp;
							}
						}
						break;
					default:
						system("cls");
						cout << "-------------------------------------------------------------------------------\n";
						cout << setw(48) << "The Travell Boss\n";
						cout << "--------------------------------------------------------------------------------";
						cout << "\nWrong Choice. Choose Again\n";
						cout << "--------------------------------------------------------------------------------\n";
						getch();
						goto jaj;
					}
					break;
				case 3:
					f1.open("Trips.dat", ios::in);
				jajz:
					system("cls");
					cout << "-------------------------------------------------------------------------------\n";
					cout << setw(48) << "The Travell Boss\n";
					cout << "--------------------------------------------------------------------------------";
					cout << "\nThere Are 3 Trips Plamned. Do You Want To See\n";
					cout << "--------------------------------------------------------------------------------";
					cout << "\n1)The First One\n";
					cout << "2)The Second One\n";
					cout << "3)The Third One\n";
					cout << "--------------------------------------------------------------------------------";
					cout << "\nPlease Enter Option No : ";
					cin >> o;
					switch (o)
					{
					case 3:
						w = 0;
						while (f1.read((char*)&t, sizeof(t)))
						{
							if (strcmpi(p.namei, t.nameid) == 0 && strcmpi(t.nameid, p.namei) == 0)
							{
								w++;
								if (w == 3)
								{
									display();
									getch();
									f1.close();
									goto kpkp;
								}
							}
						}
						break;
					case 2:
						w = 0;
						while (f1.read((char*)&t, sizeof(t)))
						{
							if (strcmpi(p.namei, t.nameid) == 0 && strcmpi(t.nameid, p.namei) == 0)
							{
								w++;
								if (w == 2)
								{
									display();
									getch();
									f1.close();
									goto kpkp;
								}
							}
						}
						break;
					case 1:
						while (f1.read((char*)&t, sizeof(t)))
						{
							if (strcmpi(p.namei, t.nameid) == 0 && strcmpi(t.nameid, p.namei) == 0)
							{
								display();
								getch();
								f1.close();
								goto kpkp;
							}
						}
						break;
					default:
						system("cls");
						cout << "-------------------------------------------------------------------------------\n";
						cout << setw(48) << "The Travell Boss\n";
						cout << "--------------------------------------------------------------------------------";
						cout << "\nWrong Choice. Choose Again\n";
						cout << "--------------------------------------------------------------------------------";
						getch();
						goto jajz;
					}
					break;
				}
			default:
				system("cls");
				cout << "-------------------------------------------------------------------------------\n";
				cout << setw(48) << "The Travell Boss\n";
				cout << "--------------------------------------------------------------------------------";
				cout << "\nWrong Choice. Choose Again " << w << "\n";
				cout << "--------------------------------------------------------------------------------\n";
				getch();
				goto kpkp;
			}
		}
		if (x == 0)
		{
			f1.close();
			system("cls");
			cout << "-------------------------------------------------------------------------------\n";
			cout << setw(48) << "The Travell Boss\n";
			cout << "--------------------------------------------------------------------------------";
			cout << setw(61) << "\nIt Seems You Have Not Been Registered\n";
			cout << setw(70) << "Or You Have Entered A Different Name Or Password\n";
		klkl:
			cout << "--------------------------------------------------------------------------------";
			cout << "\nWould You Like To\n";
			cout << "--------------------------------------------------------------------------------";
			cout << "\n1)Try Entering Name And Password Again\n";
			cout << "2)Go Back to Main Menu And Register\n";
			cout << "--------------------------------------------------------------------------------";
			cout << "\nPlease Enter Option No : ";
			cin >> o;
			switch (o)
			{
			case 1:
				goto fyfy;
			case 2:
				goto beg;
			default:
				system("cls");
				cout << "-------------------------------------------------------------------------------\n";
				cout << setw(48) << "The Travell Boss\n";
				cout << "--------------------------------------------------------------------------------";
				cout << "\nWrong Choice. Choose Again\n";
				cout << "--------------------------------------------------------------------------------";
				getch();
				goto klkl;
			}
		}
		break;
	case 3:
	kcl:
		system("cls");
		cout << "-------------------------------------------------------------------------------\n";
		cout << setw(48) << "The Travell Boss\n";
		cout << "--------------------------------------------------------------------------------";
		cout << setw(56) << "\nWelcome To The Administrator Login Desk\n";
		cout << "--------------------------------------------------------------------------------";
		cout << setw(55) << "\nPlease Enter The Administrator Password : ";
		gets_s(passcheck);
		if (strcmpi(passcheck, "boss") == 0 && strcmpi("boss", passcheck) == 0)
		{
		hyhy:
			system("cls");
			cout << "-------------------------------------------------------------------------------\n";
			cout << setw(48) << "The Travell Boss\n";
			cout << "--------------------------------------------------------------------------------\n";
			cout << setw(45) << "Welcome BOSS\n";
			cout << "--------------------------------------------------------------------------------\n";
			cout << "Would You Like To\n";
			cout << "--------------------------------------------------------------------------------";
			cout << "\n1)Check Customer Details\n";
			cout << "2)Check Trip details\n";
			cout << "3)Change Trip details\n";
			cout << "4)Delete Customers\n";
			cout << "5)Cancel Trips\n";
			cout << "6)Go Back To Main Menu\n";
			cout << "--------------------------------------------------------------------------------";
			cout << "\nPease Enter Option No : ";
			cin >> o;
			switch (o)
			{
			case 1:
			jfjf:
				system("cls");
				cout << "-------------------------------------------------------------------------------\n";
				cout << setw(48) << "The Travell Boss\n";
				cout << "--------------------------------------------------------------------------------\n";
				cout << setw(47) << "Customer Details\n";
				cout << "--------------------------------------------------------------------------------";
				cout << "\nEnter Name Of Customer : ";
				gets_s(namecheck);
				w = 0;
				f1.open("Logs.dat", ios::in | ios::app);
				while (f1.read((char*)&a, sizeof(a)))
				{
					if (strcmpi(namecheck, a.namei) == 0)
					{
						w = 1;
						cout << "\nPassword : " << a.password;
						cout << "\nEmail    : " << a.email;
						cout << "\nCity     : " << a.city;
						cout << "\n--------------------------------------------------------------------------------";
						getch();
					}
				}
				if (w == 0)
				{
					cout << "\n--------------------------------------------------------------------------------";
					cout << setw(50) << "\nSorry Name Not Found";
					cout << "\n--------------------------------------------------------------------------------";
					getch();
				}
				f1.close();
			cxc:
				system("cls");
				cout << "-------------------------------------------------------------------------------\n";
				cout << setw(48) << "The Travell Boss\n";
				cout << "Would You Like To ";
				cout << "\n--------------------------------------------------------------------------------";
				cout << "1)Check Again";
				cout << "\n2)Go Back To Menu";
				cout << "\n--------------------------------------------------------------------------------";
				cout << "\nPlease Enter Option No : ";
				cin >> o;
				switch (o)
				{
				case 1:
					goto jfjf;
				case 2:
					goto hyhy;
				default:
					system("cls");
					cout << "-------------------------------------------------------------------------------\n";
					cout << setw(48) << "The Travell Boss\n";
					cout << "\n---------------------------------------------------------------------------------";
					cout << "Wrong Choice. Choose Again";
					cout << "\n---------------------------------------------------------------------------------";
					getch();
					goto cxc;
				}
			case 2:
			amam:
				system("cls");
				cout << "-------------------------------------------------------------------------------\n";
				cout << setw(48) << "The Travell Boss\n";
				cout << "\n--------------------------------------------------------------------------------\n";
				cout << setw(46) << "Trip Details";
				cout << "\n--------------------------------------------------------------------------------\n";
				cout << "Enter Name Of Customer : ";
				gets_s(namecheck);
				w = 0;
				f1.open("Trips.dat", ios::in | ios::app);
				while (f1.read((char*)&t, sizeof(t)))
				{
					if (strcmpi(namecheck, t.nameid) == 0 && strcmpi(t.nameid, namecheck) == 0)
					{
						w++;
					}
				}
				f1.close();
				switch (w)
				{
				case 0:
					cout << "\n--------------------------------------------------------------------------------\n";
					cout << "It Seems You Have Not Planed Your Trip Yet ";
					cout << "\nOr The Name You Have Given Is Wrong";
					cout << "\n--------------------------------------------------------------------------------\n";
					getch();
					break;
				case 1:
					f1.open("Trips.dat", ios::in | ios::app);
					while (f1.read((char*)&t, sizeof(t)))
					{
						if (strcmpi(namecheck, t.nameid) == 0 && strcmpi(t.nameid, namecheck) == 0)
						{
							display();
							getch();
							f1.close();
						}
					}
					break;
				case 2:
					f1.open("Trips.dat", ios::in | ios::app);
				jaja:
					system("cls");
					cout << "-------------------------------------------------------------------------------\n";
					cout << setw(48) << "The Travell Boss\n";
					cout << "\n--------------------------------------------------------------------------------";
					cout << "There Are 2 Trips Planned. Do You Want To See";
					cout << "\n--------------------------------------------------------------------------------";
					cout << "1)The First One";
					cout << "\n2)The Second One";
					cout << "\n--------------------------------------------------------------------------------\n";
					cout << "Please Enter Option No : ";
					cin >> o;
					switch (o)
					{
					case 2:
						w = 0;
						while (f1.read((char*)&t, sizeof(t)))
						{
							if (strcmpi(namecheck, t.nameid) == 0 && strcmpi(t.nameid, namecheck) == 0)
							{
								w++;
								if (w == 2)
								{
									display();
									getch();
									f1.close();
								}
							}
						}
						break;
					case 1:
						while (f1.read((char*)&t, sizeof(t)))
						{
							if (strcmpi(namecheck, t.nameid) == 0 && strcmpi(t.nameid, namecheck) == 0)
							{
								display();
								getch();
								f1.close();
							}
						}
					}
					break;
				case 3:
					f1.open("Trips.dat", ios::in | ios::app);
				jadf:
					system("cls");
					cout << "-------------------------------------------------------------------------------\n";
					cout << setw(48) << "The Travell Boss\n";
					cout << "\n--------------------------------------------------------------------------------";
					cout << "There Are 3 Trips Planned. Do You Want To See";
					cout << "\n--------------------------------------------------------------------------------";
					cout << "1)The First One";
					cout << "\n2)The Second One";
					cout << "\n3)The Third One";
					cout << "\n--------------------------------------------------------------------------------";
					cout << "Please Enter Option No : ";
					cin >> o;
					switch (o)
					{
					case 3:
						w = 0;
						while (f1.read((char*)&t, sizeof(t)))
						{
							if (strcmpi(namecheck, t.nameid) == 0 && strcmpi(t.nameid, namecheck) == 0)
							{
								w++;
								if (w == 3)
								{
									display();
									getch();
									f1.close();
								}
							}
						}
						break;
					case 2:
						w = 0;
						while (f1.read((char*)&t, sizeof(t)))
						{
							if (strcmpi(namecheck, t.nameid) == 0 && strcmpi(t.nameid, namecheck) == 0)
							{
								w++;
								if (w == 2)
								{
									display();
									getch();
									f1.close();
								}
							}
						}
						break;
					case 1:
						while (f1.read((char*)&t, sizeof(t)))
						{
							if (strcmpi(namecheck, t.nameid) == 0 && strcmpi(t.nameid, namecheck) == 0)
							{
								display();
								getch();
								f1.close();
							}
						}
						break;
					default:
						system("cls");
						cout << "-------------------------------------------------------------------------------\n";
						cout << setw(48) << "The Travell Boss\n";
						cout << "\n---------------------------------------------------------------------------------";
						cout << "Wrong Choice. Choose Again";
						cout << "\n---------------------------------------------------------------------------------";
						getch();
						goto jadf;
					}
				}
				system("cls");
				cout << "-------------------------------------------------------------------------------\n";
				cout << setw(48) << "The Travell Boss\n";
				cout << "\n--------------------------------------------------------------------------------";
				cout << "Would you like to ";
				cout << "\n--------------------------------------------------------------------------------";
				cout << "1)Check more Trips";
				cout << "\n2)Go back to menu";
				cout << "\n--------------------------------------------------------------------------------";
				cout << "Please Enter option no : ";
				cin >> o;
				switch (o)
				{
				case 1:
					goto amam;
				case 2:
					goto hyhy;
				default:
					system("cls");
					cout << "-------------------------------------------------------------------------------\n";
					cout << setw(48) << "The Travell Boss\n";
					cout << "\n---------------------------------------------------------------------------------";
					cout << "Wrong Choice. Choose Again";
					cout << "\n---------------------------------------------------------------------------------";
				}
			case 3:
			amas:
				system("cls");
				cout << "-------------------------------------------------------------------------------\n";
				cout << setw(48) << "The Travell Boss\n";
				cout << "\n--------------------------------------------------------------------------------";
				cout << setw(45) << "Changing Trip Details";
				cout << "\n--------------------------------------------------------------------------------";
				cout << "\Enter Name Of Customer : ";
				gets_s(namecheck);
				f1.open("Trips.dat", ios::in | ios::app);
				w = 0;
				while (f1.read((char*)&t, sizeof(t)))
				{
					if (strcmpi(namecheck, t.nameid) == 0 && strcmpi(t.nameid, namecheck) == 0)
					{
						w++;
					}
				}
				f1.close();
				switch (w)
				{
				case 0:
					cout << "\n--------------------------------------------------------------------------------";
					cout << "It Seems You Have Not Planed Your Trip Yet";
					cout << "\nOr You Have Entered A Wrong Name";
					cout << "\n--------------------------------------------------------------------------------";
					getch();
					break;
				case 1:
					f1.open("Trips.dat", ios::in | ios::app);
					while (f1.read((char*)&t, sizeof(t)))
					{
						if (strcmpi(namecheck, t.nameid) == 0 && strcmpi(t.nameid, namecheck) == 0)
						{
							change();
							getch();
							f1.close();
						}
					}
					break;
				case 2:
					f1.open("Trips.dat", ios::in | ios::app);
				jajs:
					system("cls");
					cout << "-------------------------------------------------------------------------------\n";
					cout << setw(48) << "The Travell Boss\n";
					cout << "\n--------------------------------------------------------------------------------";
					cout << "There Are 2 Trips Planed. Do You Want To Change";
					cout << "\n--------------------------------------------------------------------------------";
					cout << "1)The First One";
					cout << "\n2)The Second One";
					cout << "\n--------------------------------------------------------------------------------";
					cout << "Please Enter Option No : ";
					cin >> o;
					switch (o)
					{
					case 2:
						w = 0;
						while (f1.read((char*)&t, sizeof(t)))
						{
							if (strcmpi(namecheck, t.nameid) == 0 && strcmpi(t.nameid, namecheck) == 0)
							{
								w++;
								if (w == 2)
								{
									change();
									getch();
									f1.close();
								}
							}
						}
						break;
					case 1:
						while (f1.read((char*)&t, sizeof(t)))
						{
							if (strcmpi(namecheck, t.nameid) == 0 && strcmpi(t.nameid, namecheck) == 0)
							{
								change();
								getch();
								f1.close();
							}
						}
						break;
					default:
						system("cls");
						cout << "-------------------------------------------------------------------------------\n";
						cout << setw(48) << "The Travell Boss\n";
						cout << "\n--------------------------------------------------------------------------------";
						cout << "Wrong Choice. Choose Again";
						cout << "\n--------------------------------------------------------------------------------";
						goto jajs;
					}
					break;
				case 3:
					f1.open("Trips.dat", ios::in | ios::app);
				jaql:
					system("cls");
					cout << "-------------------------------------------------------------------------------\n";
					cout << setw(48) << "The Travell Boss\n";
					cout << "\n--------------------------------------------------------------------------------";
					cout << "There Are 3 Trips Planed. Do You Want To Change";
					cout << "\n--------------------------------------------------------------------------------";
					cout << "1)The First One";
					cout << "\n2)The Second One";
					cout << "\n3)The Third One";
					cout << "\n--------------------------------------------------------------------------------";
					cout << "Please Enter Option No : ";
					cin >> o;
					switch (o)
					{
					case 3:
						w = 0;
						while (f1.read((char*)&t, sizeof(t)))
						{
							if (strcmpi(namecheck, t.nameid) == 0 && strcmpi(t.nameid, namecheck) == 0)
							{
								w++;
								if (w == 3)
								{
									change();
									getch();
									f1.close();
								}
							}
						}
						break;
					case 2:
						w = 0;
						while (f1.read((char*)&t, sizeof(t)))
						{
							if (strcmpi(namecheck, t.nameid) == 0 && strcmpi(t.nameid, namecheck) == 0)
							{
								w++;
								if (w == 2)
								{
									change();
									getch();
									f1.close();
								}
							}
						}
						break;
					case 1:
						while (f1.read((char*)&t, sizeof(t)))
						{
							if (strcmpi(namecheck, t.nameid) == 0 && strcmpi(t.nameid, namecheck) == 0)
							{
								change();
								getch();
								f1.close();
							}
						}
						break;
					default:
						system("cls");
						cout << "-------------------------------------------------------------------------------\n";
						cout << setw(48) << "The Travell Boss\n";
						cout << "\n--------------------------------------------------------------------------------";
						cout << "Wrong Choice. Choose Again";
						cout << "\n--------------------------------------------------------------------------------";
						goto jaql;
					}
				}
				system("cls");
				cout << "-------------------------------------------------------------------------------\n";
				cout << setw(48) << "The Travell Boss\n";
				cout << "\n--------------------------------------------------------------------------------";
				cout << "Would You Like To ";
				cout << "\n--------------------------------------------------------------------------------";
				cout << "1)Change More Trips";
				cout << "\n2)Go Back To Menu";
				cout << "\n--------------------------------------------------------------------------------";
				cout << "Please Enter Option No : ";
				cin >> o;
				switch (o)
				{
				case 1:
					goto amas;
				case 2:
					goto hyhy;
				default:
					system("cls");
					cout << "-------------------------------------------------------------------------------\n";
					cout << setw(48) << "The Travell Boss\n";
					cout << "\n--------------------------------------------------------------------------------";
					cout << "Wrong Choice. Choose Again";
					cout << "\n--------------------------------------------------------------------------------";
				}
			case 4:
			lasl:
				system("cls");
				cout << "-------------------------------------------------------------------------------\n";
				cout << setw(48) << "The Travell Boss\n";
				cout << "\n--------------------------------------------------------------------------------";
				cout << setw(49) << "Delete Customers";
				cout << "\n--------------------------------------------------------------------------------";
				cout << "\nEnter Name Of Customer : ";
				gets_s(namecheck);
				w = 0;
				f1.open("Logs.dat", ios::in | ios::app);
				while (f1.read((char*)&a, sizeof(a)))
				{
					if (strcmpi(namecheck, a.namei) == 0 && strcmpi(a.namei, namecheck) == 0)
					{
						w++;
					}
				}
				f1.close();
				if (w == 1)
				{
					f1.open("Logs.dat", ios::in | ios::app);
					f2.open("temp.dat", ios::out | ios::app);
					while (f1.read((char*)&a, sizeof(a)))
					{
						if (strcmpi(namecheck, a.namei) != 0 && strcmpi(a.namei, namecheck) != 0)
						{
							f2.write((char*)&a, sizeof(a));
						}
					}
					f1.close();
					f2.close();
					remove("Logs.dat");
					rename("temp.dat", "Logs.dat");
					cout << "\n--------------------------------------------------------------------------------";
					cout << "Customer Deleted";
					cout << "\n--------------------------------------------------------------------------------";
				}
				else
				{
					cout << "\n--------------------------------------------------------------------------------";
					cout << "Sorry Name Not Found";
					cout << "\n--------------------------------------------------------------------------------";
				}
				getch();
			dnd:
				system("cls");
				cout << "-------------------------------------------------------------------------------\n";
				cout << setw(48) << "The Travell Boss\n";
				cout << "-------------------------------------------------------------------------------\n";
				cout << "Would You Like To ";
				cout << "\n--------------------------------------------------------------------------------";
				cout << "1)Delete Another Customer";
				cout << "\n2)Go Back To Menu";
				cout << "\n--------------------------------------------------------------------------------";
				cout << "Please Enter Option No : ";
				cin >> o;
				switch (o)
				{
				case 1:
					goto lasl;
				case 2:
					goto hyhy;
				default:
					system("cls");
					cout << "-------------------------------------------------------------------------------\n";
					cout << setw(48) << "The Travell Boss\n";
					cout << "--------------------------------------------------------------------------------";
					cout << "\nWrong Choice. Choose Again";
					cout << "\n--------------------------------------------------------------------------------";
					getch();
					goto dnd;
				}
			case 5:
			ama:
				system("cls");
				cout << "-------------------------------------------------------------------------------\n";
				cout << setw(48) << "The Travell Boss\n";
				cout << "--------------------------------------------------------------------------------";
				cout << "\nCancel Trips";
				cout << "\n--------------------------------------------------------------------------------";
				cout << "Enter Name Of Customer : ";
				gets_s(namecheck);
				w = 0;
				f1.open("Trips.dat", ios::in | ios::app);
				while (f1.read((char*)&t, sizeof(t)))
				{
					if (strcmpi(namecheck, t.nameid) == 0 && strcmpi(t.nameid, namecheck) == 0)
					{
						w++;
					}
				}
				f1.close();
				switch (w)
				{
				case 0:
					cout << "\n--------------------------------------------------------------------------------";
					cout << "It Seems You Have Not Planed Your Trip Yet";
					cout << "\nOr You Have Entered A Wrong Name";
					cout << "\n--------------------------------------------------------------------------------";
					getch();
					break;
				case 1:
					f1.open("Trips.dat", ios::in | ios::app);
					f2.open("temp.dat", ios::out | ios::app);
					while (f1.read((char*)&t, sizeof(t)))
					{
						if (strcmpi(namecheck, t.nameid) != 0 && strcmpi(t.nameid, namecheck) != 0)
						{
							f2.write((char*)&t, sizeof(t));
						}
					}
					f1.close();
					f2.close();
					remove("Trips.dat");
					rename("temp.dat", "Trips.dat");
					getch();
					system("cls");
					cout << "-------------------------------------------------------------------------------\n";
					cout << setw(48) << "The Travell Boss\n";
					cout << "--------------------------------------------------------------------------------";
					cout << "\nTrip Cancelled";
					cout << "\n--------------------------------------------------------------------------------";
					break;
				case 2:
					f1.open("Trips.dat", ios::in | ios::app);
				jajr:
					system("cls");
					cout << "-------------------------------------------------------------------------------\n";
					cout << setw(48) << "The Travell Boss\n";
					cout << "--------------------------------------------------------------------------------";
					cout << "\nThere Are 2 Trips Planed. Do You Want To Change";
					cout << "\n--------------------------------------------------------------------------------";
					cout << "1)The First One";
					cout << "\n2)The Second One";
					cout << "\n--------------------------------------------------------------------------------";
					cout << "Please Enter Option No : ";
					cin >> o;
					switch (o)
					{
					case 2:
						f2.open("temp.dat", ios::out | ios::app);
						w = 0;
						while (f1.read((char*)&t, sizeof(t)))
						{
							if (strcmpi(namecheck, t.nameid) != 0 && strcmpi(t.nameid, namecheck) != 0)
							{
								f2.write((char*)&t, sizeof(t));
							}
							else
							{
								w++;
								if (w == 1)
									f2.write((char*)&t, sizeof(t));
							}
						}
						f1.close();
						f2.close();
						remove("Trips.dat");
						rename("temp.dat", "Trips.dat");
						getch();
						system("cls");
						cout << "-------------------------------------------------------------------------------\n";
						cout << setw(48) << "The Travell Boss\n";
						cout << "--------------------------------------------------------------------------------";
						cout << "\nTrip Cancelled";
						cout << "\n--------------------------------------------------------------------------------";
						break;
					case 1:
						f2.open("temp.dat", ios::out | ios::app);
						while (f1.read((char*)&t, sizeof(t)))
						{
							if (strcmpi(namecheck, t.nameid) != 0 && strcmpi(t.nameid, namecheck) != 0)
							{
								f2.write((char*)&t, sizeof(t));
							}
						}
						f1.close();
						f2.close();
						remove("Trips.dat");
						rename("temp.dat", "Trips.dat");
						getch();
						system("cls");
						cout << "-------------------------------------------------------------------------------\n";
						cout << setw(48) << "The Travell Boss\n";
						cout << "--------------------------------------------------------------------------------";
						cout << "\nTrip Cancelled";
						cout << "\n--------------------------------------------------------------------------------";
						break;
					default:
						system("cls");
						cout << "-------------------------------------------------------------------------------\n";
						cout << setw(48) << "The Travell Boss\n";
						cout << "--------------------------------------------------------------------------------";
						cout << "\nWrong Choice. Choose Again";
						cout << "\n--------------------------------------------------------------------------------";
						goto jajr;
					}
				case 3:
					f1.open("Trips.dat", ios::in | ios::app);
				japd:
					system("cls");
					cout << "-------------------------------------------------------------------------------\n";
					cout << setw(48) << "The Travell Boss\n";
					cout << "--------------------------------------------------------------------------------";
					cout << "\nThere Are 3 Trips Planed. Do You Want To Change";
					cout << "\n--------------------------------------------------------------------------------";
					cout << "1)The First One";
					cout << "\n2)The Second One";
					cout << "\n3)The Third One";
					cout << "\n--------------------------------------------------------------------------------";
					cout << "Please Enter Option No : ";
					cin >> o;
					switch (o)
					{
					case 3:
						f2.open("temp.dat", ios::out | ios::app);
						w = 0;
						while (f1.read((char*)&t, sizeof(t)))
						{
							if (strcmpi(namecheck, t.nameid) != 0 && strcmpi(t.nameid, namecheck) != 0)
							{
								f2.write((char*)&t, sizeof(t));
							}
							else
							{
								w++;
								if ((w == 1) || (w == 2))
									f2.write((char*)&t, sizeof(t));
							}
						}
						f1.close();
						f2.close();
						remove("Trips.dat");
						rename("temp.dat", "Trips.dat");
						getch();
						system("cls");
						cout << "-------------------------------------------------------------------------------\n";
						cout << setw(48) << "The Travell Boss\n";
						cout << "--------------------------------------------------------------------------------";
						cout << "\nTrip Cancelled";
						cout << "\n--------------------------------------------------------------------------------";
						break;
					case 2:
						f2.open("temp.dat", ios::out | ios::app);
						w = 0;
						while (f1.read((char*)&t, sizeof(t)))
						{
							if (strcmpi(namecheck, t.nameid) != 0 && strcmpi(t.nameid, namecheck) != 0)
								f2.write((char*)&t, sizeof(t));
							else
							{
								w++;
								if ((w == 1) || (w == 3))
									f2.write((char*)&t, sizeof(t));
							}
						}
						f1.close();
						f2.close();
						remove("Trips.dat");
						rename("temp.dat", "Trips.dat");
						getch();
						system("cls");
						cout << "-------------------------------------------------------------------------------\n";
						cout << setw(48) << "The Travell Boss\n";
						cout << "--------------------------------------------------------------------------------";
						cout << "\nTrip Cancelled";
						cout << "\n--------------------------------------------------------------------------------";
						break;
					case 1:
						w = 0;
						f2.open("temp.dat", ios::out | ios::app);
						while (f1.read((char*)&t, sizeof(t)))
						{
							if (strcmpi(namecheck, t.nameid) != 0 && strcmpi(t.nameid, namecheck) != 0)
							{
								f2.write((char*)&t, sizeof(t));
							}
							else
							{
								w++;
								if ((w == 2) || (w == 3))
									f2.write((char*)&t, sizeof(t));
							}
						}
						f1.close();
						f2.close();
						remove("Trips.dat");
						rename("temp.dat", "Trips.dat");
						getch();
						system("cls");
						cout << "-------------------------------------------------------------------------------\n";
						cout << setw(48) << "The Travell Boss\n";
						cout << "--------------------------------------------------------------------------------";
						cout << "\nTrip Cancelled";
						cout << "\n--------------------------------------------------------------------------------";
						break;
					default:
						cout << "\n--------------------------------------------------------------------------------";
						cout << "Wrong Choice. Choose Again";
						cout << "\n--------------------------------------------------------------------------------";
						goto japd;
					}
				}
			emem:
				cout << "Would You Like To ";
				cout << "\n--------------------------------------------------------------------------------";
				cout << "1)Cancel More Trips";
				cout << "\n2)Go Back To Menu";
				cout << "\n--------------------------------------------------------------------------------";
				cout << "Please Enter Option No : ";
				cin >> o;
				switch (o)
				{
				case 1:
					goto ama;
				case 2:
					goto hyhy;
				default:
					system("cls");
					cout << "-------------------------------------------------------------------------------\n";
					cout << setw(48) << "The Travell Boss\n";
					cout << "--------------------------------------------------------------------------------";
					cout << "\nWrong Choice. Choose Again";
					cout << "\n--------------------------------------------------------------------------------";
					getch();
					goto emem;
				}
			case 6:
				goto beg;
			default:
				cout << "\n-------------------------------------------------------------------------------";
				cout << "Wrong Choice. Choose Again ";
				cout << "\n-------------------------------------------------------------------------------";
				getch();
				goto hyhy;
			}
		}
		else
		{
		fls:
			system("cls");
			cout << "-------------------------------------------------------------------------------\n";
			cout << setw(48) << "The Travell Boss\n";
			cout << "--------------------------------------------------------------------------------";
			cout << "It Seems You Have Entered A Wrong Password";
			cout << "\n--------------------------------------------------------------------------------";
			cout << "Would You Like To";;
			cout << "\n--------------------------------------------------------------------------------";
			cout << "1)Try Entering Password Again";
			cout << "\n2)Go Back To Main Menu";
			cout << "\n--------------------------------------------------------------------------------";
			cout << "Please Enter Option No : ";
			cin >> o;
			switch (o)
			{
			case 1:
			goto kcl; 
			case 2:
			goto beg; 
			default:
				cout << "\n--------------------------------------------------------------------------------";
				cout << "Wrong Choice. Choose Again";
				cout << "\n--------------------------------------------------------------------------------";
				getch();
				goto fls;
			}
		}
	case 4:
	
		system("cls");
		cout << "-------------------------------------------------------------------------------\n";
		cout << setw(48) << "The Travell Boss\n";
		cout << "--------------------------------------------------------------------------------";
		cout << "\nThank You For Using This App  :)";
		cout << "\n--------------------------------------------------------------------------------";
		getch();
		exit(0);
	
		break;
	
	default:
	
		system("cls");
		cout << "-------------------------------------------------------------------------------\n";
		cout << setw(48) << "The Travell Boss\n";
		cout << "-------------------------------------------------------------------------------";
		cout << "\nWrong Choice. Choose Again ";
		cout << "\n-------------------------------------------------------------------------------";
		getch();
		goto beg;
		
	
}
	getch();
}
