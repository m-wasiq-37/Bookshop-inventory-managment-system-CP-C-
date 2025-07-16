#include <string>
#include <iostream>
#include<iomanip>
#include<fstream>
using namespace std;

struct program {
	string name, Author;
	int stock;
	double cost;
}arr[20];

struct user {
	int psw = 1111;
	string adm = "Admin";
}z;


void update_file()
{
	//Opening Files.

	ofstream Books;
	Books.open("Books.txt");

	ofstream st;
	st.open("Status.txt");

	for (int i = 0; i <= 19; i++)
	{
		Books << left << arr[i].name << "\n" << arr[i].Author << endl;
		st << arr[i].stock << "\n" << arr[i].cost << endl;
	}

	//Closing Files.

	Books.close();

	st.close();

	system("cls");

	cout << endl << endl << endl << "\t\t\t\t ***********************";
	cout << endl << "\t\t\t\t * Thank You Very Much *" << endl;
	cout << "\t\t\t\t ***********************" << endl << endl << endl << endl << endl << endl << endl;
	system("pause");
	exit(0);

}

void Buy_Book()
{
	string book, Author;
	double d = 0;
	int c, e = 0;
	int y = 1;

	for (; y != 0;)
	{
		cout << endl;


		cout << "Enter The Name Of Book:";
		cin.ignore();

		getline(cin, book);

		cout << "Enter Author Name:";

		getline(cin, Author);


		for (int i = 0; i <= 19; i++)
		{
			if (book == arr[i].name && Author == arr[i].Author)
			{
				cout << "Enter The Number Of Copies You Want To Buy:";

				cin >> c;

				if (c <= arr[i].stock)
				{
					e = 0;
					d = arr[i].cost * c;
					cout << endl;
					system("cls");
					cout << "\tYou Have Selected <" << c << "> Copies of The Book <" << arr[i].name << "> Written By <" << arr[i].Author << ">" << endl;
					cout << "\t\t\tThe Total Will Be " << fixed << setprecision(3) << d << " Rs" << endl;
					cout << "\t\t\tPress 0 To Confirm Payment:";
					cin >> y;
					if (y == 0)
					{
						arr[i].stock = arr[i].stock - c;

						break;
					}

				}
				else
				{
					e = 0;
					cout << endl;
					cout << "Sorry Only " << arr[i].stock << " Copies Are Avaliable." << endl;
					cout << "\tTry Again" << endl;
				}
			}
			else
			{
				e = 1;
			}
		}
		if (e == 1)
		{
			char p = '1';
			cout << "This Book is Not Avaliable." << endl;
			cout << "Do you Want To Exit Y/N: ";
			cin >> p;
			if (p == 'Y' || p == 'y')
			{
				break;
			}
		}

	}

	update_file();
}

void User_window()
{
	cout << setw(120) << setfill('*') << "\t" << endl;
	cout << "Avaliable Books: " << endl;

	for (int i = 0; i <= 19; i++)
	{
		if (arr[i].stock != 0)
		{
			cout << endl << "-------------------------------------" << endl;
			cout << "   Book Name:" << arr[i].name << endl << "     Author:" << arr[i].Author << endl << "   " << arr[i].stock << " Copies Are Avaliable " << endl << "   Cost per Book:" << arr[i].cost << " Rs" << endl;
			cout << endl << "-------------------------------------" << endl;

		}
	}

	cout << endl << setw(120) << setfill('*') << "\t" << endl;

	Buy_Book();
}

void add_newbooks()
{
	ofstream Books;
	Books.open("Books.txt");

	ofstream st;
	st.open("Status.txt");

	for (int i = 0; i <= 19; i++)
	{
		Books << left << arr[i].name << "\n" << arr[i].Author << endl;
		st << arr[i].stock << "\n" << arr[i].cost << endl;
	}

	//Closing Files.

	Books.close();

	st.close();
}

void new_book()
{
	int a = 0;

	//Opening Books.
	ofstream Books;
	Books.open("Books.txt", ios::app);

	ofstream st;
	st.open("Status.txt", ios::app);

	for (int i = 0; i <= 19; i++)
	{
		if (arr[i].stock == 0)
		{
			cout << endl;

			cout << "Enter The Name of Book: ";

			cin.ignore();

			getline(cin, arr[i].name);

			cout << "Enter The Name of Author: ";

			getline(cin, arr[i].Author);

			cout << "Enter The Number of Copies: ";

			cin >> arr[i].stock;

			cout << "Enter The Price Per Book: ";

			cin >> arr[i].cost;

			cout << endl;

			cout << endl << "Press 1 To Continue" << endl;
			cout << "Press 2 To Exit" << endl;
			cout << "Enter Your Choice:";
			cin >> a;
			system("cls");

			if (a == 2)
			{
				cout << endl;
				break;
			}
		}

	}
	//Closing Files.
	Books.close();
	st.close();
	add_newbooks();
}

void Add_Books()
{
	for (char x = '0'; x != '4';)
	{
		cout << setw(120) << setfill('_') << "\t" << endl;
		cout << " 1. To Enter New Book  " << endl;
		cout << " 2. To Check  Stocks  " << endl;
		cout << " 3. To Change Password  " << endl;
		cout << " 4. To Exit   Admin " << endl;
		cout << setw(120) << setfill('_') << "\t" << endl;
		cout << "Enter Your Choice:";
		cin >> x;
		system("cls");
		cout << setw(120) << setfill('_') << "\t" << endl;

		int b, a = 0;

		switch (x)
		{
		case '1':

			new_book();

			break;
		case '2':

			cout << setw(120) << setfill('_') << "\t" << endl;

			for (int i = 0; i <= 19; i++)
			{
				if (arr[i].stock != 0)
				{
					cout << endl;
					cout << "Book Name: '" << arr[i].name << "' " << endl << "Author Name: '" << arr[i].Author << "' " << endl << "In Stock:" << arr[i].stock << endl;
				}

				a = arr[i].stock + a;
			}

			cout << endl;
			cout << "There Are Total " << a << " Books In Stock." << endl;
			cout << setw(120) << setfill('_') << "\t" << endl;
			system("pause");
			system("cls");

			break;
		case '3':

			for (int i = 1; i <= 3; i++)
			{
				cout << endl << "Enter Previous 4 Digit Code:";
				cin >> b;
				if (b == z.psw)
				{
					cout << endl << "Enter a New 4 Digit Code:";
					cin >> z.psw;
					cout << "Password Changed Successfully " << endl;
					break;
				}
				else
				{
					cout << endl << "     Access Denied" << endl;
				}
			}

			break;
		case '4':

			cout << endl;

			break;
		default:

			cout << endl << "\tTry Again" << endl;
		}
	}
}

void Main_Menu()
{

	int b = 0;

	for (char choice = '0'; choice != '3';)
	{
		cout << " 1. For Admin " << endl;
		cout << " 2. For Buyer " << endl;
		cout << " 3. For Exit" << endl;
		cout << setw(120) << setfill('_') << "\t" << endl;
		cout << "Enter Your Choice:";
		cin >> choice;
		cout << setw(120) << setfill('_') << "\t" << endl;
		system("cls");

		switch (choice)
		{
		case '1':

			for (int i = 1; i <= 3; i++)
			{
				cout << endl << "Enter a 4 Digit Code:";
				cin >> b;

				if (b == z.psw)
				{
					system("cls");
					cout << endl << "     Welcome " << z.adm << endl;
					Add_Books();
					break;
				}
				else
				{
					cout << endl << "     Access Denied" << endl;
				}
			}

			break;

		case '2':

			User_window();

			break;
		case '3':

			cout << endl;

			break;
		default:

			cout << endl << "\tTry Again" << endl;
		}

	}
}
void Open_file()
{
	//Opening Files.
	ifstream st;
	st.open("Status.txt");

	ifstream Book;
	Book.open("Books.txt");

	string name;
	double cost = 0;
	int j = 0;

	for (int i = 0; i <= 19; i++)
	{
		for (int j = 1; j <= 2; j++)
		{
			getline(Book, name);
			st >> cost;
			switch (j)
			{
			case 1:
				arr[i].name = name;
				arr[i].stock = cost;
				break;

			case 2:
				arr[i].Author = name;
				arr[i].cost = cost;
				break;
			}
		}
	}
	//Closing Files.
	Book.close();

	st.close();

	Main_Menu();
}


int main()
{

	cout << setw(120) << setfill('_') << "\t" << endl;
	cout << setw(120) << setfill('_') << "\t" << endl;
	cout << "\t\t\t__________BOOKSHOP INVENTORY MAMAGMENT SYSTEM___________" << "\t" << endl;
	cout << "TOP MENU" << endl;

	Open_file();

	cout << endl << endl << endl << "\t\t\t\t ***********************";
	cout << endl << "\t\t\t\t * Thank You Very Much *" << endl;
	cout << "\t\t\t\t ***********************" << endl << endl << endl << endl << endl << endl << endl;

	system("pause");
	return 0;

}
