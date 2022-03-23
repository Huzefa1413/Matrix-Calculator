#include <iostream>
#include <conio.h>
#include <math.h>
#define row 10
#define col 10

using namespace std;

void colormenu();
void mainmenu();

int addition(float mtA[][col], float mtB[][col], int row1, int col1, int row2, int col2);
int subtraction(float mtA[][col], float mtB[][col], int row1, int col1, int row2, int col2);
int multiplication(float mtA[][col], float mtB[][col], int row1, int col1, int row2, int col2);
int determinant(float mt[][col], int r);
int adjoin(float mt[][col], int r);
int transpose(float mt[][col], int r, int c);
int inverse(float mt[][col], int r);

void calc();

int r1, c1, r2, c2;
float matrix_A[row][col];
float matrix_B[row][col];
int option, choice;

int main()
{
	// color menu function calling
	colormenu();

	do
	{
		// main menu function calling
		mainmenu();
	}
	// if condition is not true
	while (option != 8);
	{
		// displaying thankyou message
		system("cls");
		cout << " -------------------------------- " << endl;
		cout << "|                                |" << endl;
		cout << "|     Thanks for coming, BYE     |" << endl;
		cout << "|                                |" << endl;
		cout << " -------------------------------- " << endl;
	}
	// end of program
	_getch();
}

void colormenu()
{
	// color menu
	cout << " -------------------------------------------------------------------" << endl;
	cout << " ||||||||||||||||               MENU                |||||||||||||||| " << endl;
	cout << " -------------------------------------------------------------------" << endl;
	cout << " |  Press Numbers on the Side of the Option to Perform that Action |" << endl;
	cout << " -------------------------------------------------------------------" << endl;
	cout << " | [1] =   {                  BLACK  &  WHITE                   }  |" << endl;
	cout << " | [2] =   {                  WHITE  &  BLACK                   }  |" << endl;
	cout << " | [3] =   {                  BLACK  &  GREEN                   }  |" << endl;
	cout << " | [4] =   {                  WHITE  &  GRAY                    }  |" << endl;
	cout << " | [5] =   {                  BLUE   &  WHITE                   }  |" << endl;
	cout << " | [6] =   {                  BLACK  &  GRAY                    }  |" << endl;
	cout << " | [7] =   {                  YELLOW &  BLACK                   }  |" << endl;
	cout << " -------------------------------------------------------------------" << endl;
	// selecting choice
	cout << "Choose the option from above MENU: ";
	cin >> choice;

	// displaying color after selecting choice
	switch (choice)
	{
	case 1:
	{
		system("color 7");
		system("cls");
		break;
	}
	case 2:
	{
		system("color 70");
		system("cls");
		break;
	}
	case 3:
	{
		system("color 02");
		system("cls");
		break;
	}
	case 4:
	{
		system("color 78");
		system("cls");
		break;
	}
	case 5:
	{
		system("color 1F");
		system("cls");
		break;
	}
	case 6:
	{
		system("color 08");
		system("cls");
		break;
	}
	case 7:
	{
		system("color 60");
		system("cls");
		break;
	}
	default:
		cout << "Invalid Number ! " << endl;
		system("cls");
		break;
	}
}
void mainmenu()
{
	// main menu 

	cout << "\t\t\t********************************************************" << endl;
	cout << "\t\t\t********************************************************" << endl;
	cout << "\t\t\t*****                                              *****" << endl;
	cout << "\t\t\t*****              MATRIX  CALCULATOR              *****" << endl;
	cout << "\t\t\t*****                                              *****" << endl;
	cout << "\t\t\t********************************************************" << endl;
	cout << "\t\t\t********************************************************" << endl << endl;

	cout << "\t\t -------------------------------------------------------------------" << endl;
	cout << "\t\t ||||||||||||||||               MENU                |||||||||||||||| " << endl;
	cout << "\t\t -------------------------------------------------------------------" << endl;
	cout << "\t\t -------------------------------------------------------------------" << endl;
	cout << "\t\t |  THIS CALCULATOR CAN PERFORM OPERATIONS UPTO 10 X 10 MATRICES   |" << endl;
	cout << "\t\t -------------------------------------------------------------------" << endl;
	cout << "\t\t |  Press Numbers on the Side of the Option to Perform that Action |" << endl;
	cout << "\t\t -------------------------------------------------------------------" << endl;
	cout << "\t\t | [1] = {     ADDITION OF MATRIX      }                           |" << endl;
	cout << "\t\t | [2] = {    SUBTRACTION OF MATRIX    }                           |" << endl;
	cout << "\t\t | [3] = {  MULTIPLICATIOIN OF MATRIX  }                           |" << endl;
	cout << "\t\t | [4] = {    DETERMINANT OF MATRIX    }                           |" << endl;
	cout << "\t\t | [5] = {      ADJOINT OF MATRIX      } { ONLY 2 x 2 AND 3 x 3 }  |" << endl;
	cout << "\t\t | [6] = {     TRANSPOSE OF MATRIX     }                           |" << endl;
	cout << "\t\t | [7] = {      INVERSE OF MATRIX      } { ONLY 2 x 2 }            |" << endl;
	cout << "\t\t | [8] = {          EXIT               }                           |" << endl;
	cout << "\t\t -------------------------------------------------------------------" << endl;
	// selecting option
	cout << "\nChoose the option from above MENU: ";
	cin >> option;

	switch (option)
	{
	case 1:
	{
		// entering rows and colomns of matrix 1 
		cout << " -----------------------------------------" << endl;
		cout << "| Enter number of Rows in Matrix-A    : "; cin >> r1;
		cout << " -----------------------------------------" << endl;
		cout << " -----------------------------------------" << endl;
		cout << "| Enter number of Columns in Matrix-A : "; cin >> c1;
		cout << " -----------------------------------------" << endl;
		cout << " -----------------------------------------" << endl;
		cout << "|     Input Elements of " << r1 << " * " << c1 << " Matrix      |" << endl;
		cout << " -----------------------------------------" << endl;
		// entering matrix 1
		for (int i = 0; i < r1; i++)
		{
			for (int j = 0; j < c1; j++)
			{
				cout << "[" << i << "][" << j << "] = ";
				cin >> matrix_A[i][j];
			}
		}
		// entering rows and colomns of matrix 2
		cout << " -----------------------------------------" << endl;
		cout << "| Enter number of Rows in Matrix-B    : "; cin >> r2;
		cout << " -----------------------------------------" << endl;
		cout << " -----------------------------------------" << endl;
		cout << "| Enter number of Columns in Matrix_B : "; cin >> c2;
		cout << " -----------------------------------------" << endl;
		cout << " -----------------------------------------" << endl;
		cout << "|     Input Elements of " << r2 << " * " << c2 << " Matrix      |" << endl;
		cout << " -----------------------------------------" << endl;
		// entering matrix 2
		for (int i = 0; i < r2; i++)
		{
			for (int j = 0; j < c2; j++)
			{
				cout << "[" << i << "][" << j << "] = ";
				cin >> matrix_B[i][j];
			}
		}
		if (r1 != r2 || c1 != c2) // If rows or colomns are not equal then it will display an error message
		{
			cout << endl << endl;
			cout << " ------------------------------------------------------------" << endl;
			cout << "|   Error! Rows or Columns of Two Matrices are Not Equal..   |" << endl;
			cout << " ------------------------------------------------------------" << endl << endl;
		}
		else // If rows and colomns are same then.....
		{
			system("cls");
			cout << "  ----------------------------------------------\n" << endl;
			cout << "    YOUR ENTERED MATRIX : " << endl;
			// displaying entered matrix
			for (int i = 0; i < r1 && i < r2; i++)
			{
				cout << "   |";
				for (int j = 0; j < c1; j++)
				{
					cout << "\t" << matrix_A[i][j];
				}
				cout << "\t|";
				if (i != 1)
				{
					cout << "   |";
				}
				else if (i == 1)
				{
					cout << " + |";
				}

				for (int k = 0; k < c2; k++)
				{
					cout << "\t" << matrix_B[i][k];
				}
				cout << "\t|";
				cout << endl;
			}
			cout << endl;
			// calculator theme function
			calc();
			cout << "\nPress Enter To Continue.........." << endl;
			cout << _getch();
			// addition function calling
			addition(matrix_A, matrix_B, r1, c1, r2, c2);
		}
		cout << "*) To EXIT Press 8" << endl;
		cout << "*) To go back to MENU Press any number : ";
		cin >> option;
		system("cls");
		break;
	}
	case 2:
	{
		// entering rows and colomns of matrix 1 
		cout << " -----------------------------------------" << endl;
		cout << "| Enter number of Rows in Matrix-A    : "; cin >> r1;
		cout << " -----------------------------------------" << endl;
		cout << " -----------------------------------------" << endl;
		cout << "| Enter number of Columns in Matrix-A : "; cin >> c1;
		cout << " -----------------------------------------" << endl;
		cout << " -----------------------------------------" << endl;
		cout << "|     Input Elements of " << r1 << " * " << c1 << " Matrix      |" << endl;
		cout << " -----------------------------------------" << endl;
		// entering matrix 1
		for (int i = 0; i < r1; i++)
		{
			for (int j = 0; j < c1; j++)
			{
				cout << "[" << i << "][" << j << "] = ";
				cin >> matrix_A[i][j];
			}
		}
		// entering rows and colomns of matrix 2
		cout << " -----------------------------------------" << endl;
		cout << "| Enter number of Rows in Matrix-B    : "; cin >> r2;
		cout << " -----------------------------------------" << endl;
		cout << " -----------------------------------------" << endl;
		cout << "| Enter number of Columns in Matrix_B : "; cin >> c2;
		cout << " -----------------------------------------" << endl;
		cout << " -----------------------------------------" << endl;
		cout << "|     Input Elements of " << r2 << " * " << c2 << " Matrix      |" << endl;
		cout << " -----------------------------------------" << endl;
		// entering matrix 2
		for (int i = 0; i < r2; i++)
		{
			for (int j = 0; j < c2; j++)
			{
				cout << "[" << i << "][" << j << "] = ";
				cin >> matrix_B[i][j];
			}
		}
		if (r1 != r2 || c1 != c2) // If rows or colomns are not equal then it will display an error message
		{
			cout << endl << endl;
			cout << " ------------------------------------------------------------" << endl;
			cout << "|   Error! Rows or Columns of Two Matrices are Not Equal..   |" << endl;
			cout << " ------------------------------------------------------------" << endl << endl;
		}
		else // If rows and colomns are same then.....
		{
			system("cls");
			// displaying entered matrix
			cout << "  ----------------------------------------------\n" << endl;
			cout << "    YOUR ENTERED MATRIX : " << endl;
			for (int i = 0; i < r1 && i < r2; i++)
			{
				cout << "   |";
				for (int j = 0; j < c1; j++)
				{
					cout << "\t" << matrix_A[i][j];
				}
				cout << "\t|";
				if (i != 1)
				{
					cout << "   |";
				}
				else if (i == 1)
				{
					cout << " - |";
				}

				for (int k = 0; k < c2; k++)
				{
					cout << "\t7" << matrix_B[i][k];
				}
				cout << "\t|";
				cout << endl;
			}
			cout << endl;
			// calculator theme function
			calc();
			cout << "\nPress Enter To Continue.........." << endl;
			cout << _getch();
			// subtraction function calling
			subtraction(matrix_A, matrix_B, r1, c1, r2, c2);
		}
		cout << "*) To EXIT Press 8" << endl;
		cout << "*) To go back to MENU Press any number : ";
		cin >> option;
		system("cls");
		break;
	}
	case 3:
	{
		// entering rows and colomns of matrix 1 
		cout << " -----------------------------------------" << endl;
		cout << "| Enter number of Rows in Matrix-A    : "; cin >> r1;
		cout << " -----------------------------------------" << endl;
		cout << " -----------------------------------------" << endl;
		cout << "| Enter number of Columns in Matrix-A : "; cin >> c1;
		cout << " -----------------------------------------" << endl;
		cout << " -----------------------------------------" << endl;
		cout << "|     Input Elements of " << r1 << " * " << c1 << " Matrix      |" << endl;
		cout << " -----------------------------------------" << endl;
		// entering matrix 1
		for (int i = 0; i < r1; i++)
		{
			for (int j = 0; j < c1; j++)
			{
				cout << "[" << i << "][" << j << "] = ";
				cin >> matrix_A[i][j];
			}
		}
		// entering rows and colomns of matrix 2
		cout << " -----------------------------------------" << endl;
		cout << "| Enter number of Rows in Matrix-B    : "; cin >> r2;
		cout << " -----------------------------------------" << endl;
		cout << " -----------------------------------------" << endl;
		cout << "| Enter number of Columns in Matrix_B : "; cin >> c2;
		cout << " -----------------------------------------" << endl;
		cout << " -----------------------------------------" << endl;
		cout << "|     Input Elements of " << r2 << " * " << c2 << " Matrix      |" << endl;
		cout << " -----------------------------------------" << endl;
		// entering matrix 2
		for (int i = 0; i < r2; i++)
		{
			for (int j = 0; j < c2; j++)
			{
				cout << "[" << i << "][" << j << "] = ";
				cin >> matrix_B[i][j];
			}
		}
		if (c1 != r2) // displaying error message if columns of matrix 1 is not equal to row of second matrix
		{
			cout << endl << endl;
			cout << " -----------------------------------------------------------------" << endl;
			cout << "|   Error! column of first matrix not equal to row of second...   |" << endl;
			cout << " -----------------------------------------------------------------" << endl << endl;
		}
		else // If rows and colomns are same then.....
		{
			// displaying entered matrix
			system("cls");
			cout << "  ----------------------------------------------\n" << endl;
			cout << "    YOUR ENTERED MATRIX : " << endl;
			for (int i = 0; i < r1 || i < r2; i++)
			{
				cout << "   |";
				for (int j = 0; j < c1; j++)
				{

					if (matrix_A[i][j] != 0)
					{
						cout << "\t" << matrix_A[i][j];
					}
					else
					{
						cout << "\t";
					}
				}
				cout << "\t|";
				if (i != 1)
				{
					cout << "   |";
				}
				else if (i == 1)
				{
					cout << " * |";
				}

				for (int k = 0; k < c2; k++)
				{
					if (matrix_B[i][k] != 0)
					{
						cout << "\t" << matrix_B[i][k];
					}
					else
					{
						cout << "\t";
					}
				}
				cout << "\t|";
				cout << endl;
			}
			cout << endl;
			// calculator theme function
			calc();
			cout << "\nPress Enter To Continue.........." << endl;
			cout << _getch();
			// multiplication function calling
			multiplication(matrix_A, matrix_B, r1, c1, r2, c2);
		}
		cout << "*) To EXIT Press 8" << endl;
		cout << "*) To go back to MENU Press any number : ";
		cin >> option;
		system("cls");
		break;

	}
	case 4:
	{
		// entering rows and colomns of matrix
		cout << " ----------------------------------------------------" << endl;
		cout << "| Enter number of Rows and Columns in Matrix  : "; cin >> r1;
		cout << " ----------------------------------------------------" << endl;
		cout << " -----------------------------------------" << endl;
		cout << "|     Input Elements of " << r1 << " * " << r1 << " Matrix      |" << endl;
		cout << " -----------------------------------------" << endl;
		// entering matrix
		for (int i = 0; i < r1; i++)
		{
			for (int j = 0; j < r1; j++)
			{
				cout << "[" << i << "][" << j << "] = ";
				cin >> matrix_A[i][j];
			}
		}
		system("cls");
		// displaying entered matrix
		cout << "  ----------------------------------------------\n" << endl;
		cout << "    YOUR ENTERED MATRIX : " << endl;
		for (int i = 0; i < r1; i++)
		{
			cout << "    |";
			for (int j = 0; j < r1; j++)
			{
				cout << "\t" << matrix_A[i][j];
			}
			cout << "\t|";
			cout << endl;
		}
		cout << endl;
		// calculator theme function
		calc();
		cout << "\nPress Enter To Continue.........." << endl;
		cout << _getch();

		system("cls");
		// displaying determinant
		cout << "  ----------------------------------------------" << endl;
		cout << "    Determinant of the Matrix is :  " << endl << endl << endl;
		cout << "\t\t\t\t\t" << determinant(matrix_A, r1) << endl;
		// calculator theme function
		calc();
		cout << "*) To EXIT Press 8" << endl;
		cout << "*) To go back to MENU Press any number : ";
		cin >> option;
		system("cls");
		break;
	}
	case 5:
	{
		// Enter rows and colomns of matrix
		cout << " ----------------------------------------------------" << endl;
		cout << "| Enter number of Rows and Columns in Matrix  : "; cin >> r1;
		cout << " ----------------------------------------------------" << endl;
		if (r1 == 2 || r1 == 3) // if rows and colomns are equal to 2 or 3 as it only calculates adjoin of 2 x 2 and 3 x 3 matrix
		{
			cout << " -----------------------------------------" << endl;
			cout << "|     Input Elements of " << r1 << " * " << r1 << " Matrix      |" << endl;
			cout << " -----------------------------------------" << endl;
			// Enter elements of matrix
			for (int i = 0; i < r1; i++)
			{
				for (int j = 0; j < r1; j++)
				{
					cout << "[" << i << "][" << j << "] = ";
					cin >> matrix_A[i][j];
				}
			}
			system("cls");
			// displaying entered matrix
			cout << "  ----------------------------------------------\n" << endl;
			cout << "     YOUR ENTERED MATRIX : " << endl;
			for (int i = 0; i < r1; i++)
			{
				cout << " \t |";
				for (int j = 0; j < r1; j++)
				{
					cout << "\t" << matrix_A[i][j];
				}
				cout << "\t|";
				cout << endl;
			}
			cout << endl;

			// calculator theme function
			calc();
			cout << "\nPress Enter To Continue.........." << endl;
			cout << _getch();

			// adjoin function calling
			adjoin(matrix_A, r1);
		}
		else // displaying error message
		{
			cout << endl << endl;
			cout << " -----------------------------------------------------------------" << endl;
			cout << " |    Error! It is Only Valid for 2 x 2 AND 3 x 3 Matrix ......  |" << endl;
			cout << " -----------------------------------------------------------------" << endl << endl;
		}
		cout << "*) To EXIT Press 8" << endl;
		cout << "*) To go back to MENU Press any number : ";
		cin >> option;
		system("cls");
		break;
	}
	case 6:
	{
		// Enter Number of Rows and Colomns in Matrix
		cout << " -----------------------------------------" << endl;
		cout << "| Enter number of Rows in Matrix     : "; cin >> r1;
		cout << " -----------------------------------------" << endl;
		cout << " -----------------------------------------" << endl;
		cout << "| Enter number of Columns in Matrix  : "; cin >> c1;
		cout << " -----------------------------------------" << endl;
		cout << " -----------------------------------------" << endl;
		cout << "|     Input Elements of " << r1 << " * " << c1 << " Matrix      |" << endl;
		cout << " -----------------------------------------" << endl;
		// Entering elements of Matrix
		for (int i = 0; i < r1; i++)
		{
			for (int j = 0; j < c1; j++)
			{
				cout << "[" << i << "][" << j << "] = ";
				cin >> matrix_A[i][j];
			}
		}

		system("cls");
		// displaying entered matrix
		cout << "  ----------------------------------------------\n" << endl;
		cout << "    YOUR ENTERED MATRIX : " << endl;
		for (int i = 0; i < r1; i++)
		{
			cout << "   |";
			for (int j = 0; j < c1; j++)
			{
				cout << "\t" << matrix_A[i][j];
			}
			cout << "\t|";
			cout << endl;
		}
		cout << endl;

		// calculator theme function
		calc();
		cout << "\nPress Enter To Continue.........." << endl;
		cout << _getch();

		// calling transpose function
		transpose(matrix_A, r1, c1);

		cout << "*) To EXIT Press 8" << endl;
		cout << "*) To go back to MENU Press any number : ";
		cin >> option;
		system("cls");
		break;
	}
	case 7:
	{
		// entering rows and colomns of matrix
		cout << " ----------------------------------------------------" << endl;
		cout << "| Enter number of Rows and Columns in Matrix  : "; cin >> r1;
		cout << " ----------------------------------------------------" << endl;
		// if rows and colomns are equal to 2 then...
		if (r1 == 2)
		{
			// enter elements of matrix
			cout << " -----------------------------------------" << endl;
			cout << "|     Input Elements of " << r1 << " * " << r1 << " Matrix      |" << endl;
			cout << " -----------------------------------------" << endl;
			for (int i = 0; i < r1; i++)
			{
				for (int j = 0; j < r1; j++)
				{
					cout << "[" << i << "][" << j << "] = ";
					cin >> matrix_A[i][j];
				}
			}
			system("cls");
			// displaying entered matrix
			cout << "  ----------------------------------------------\n" << endl;
			cout << "     YOUR ENTERED MATRIX : " << endl;
			for (int i = 0; i < r1; i++)
			{
				cout << " \t |";
				for (int j = 0; j < r1; j++)
				{
					cout << "\t" << matrix_A[i][j];
				}
				cout << "\t|";
				cout << endl;
			}
			cout << endl;
			// calculator theme function
			calc();
			cout << "\nPress Enter To Continue.........." << endl;
			cout << _getch();
			// calling inverse function
			inverse(matrix_A, r1);
		}
		else // if rows and colomns are not equal to 2 as it only calculates inverse of 2 x 2 matrix
		{
			// error message
			cout << endl << endl;
			cout << " -----------------------------------------------------------------" << endl;
			cout << "|       Error! It is Only Valid for 2 x 2 Matrix .....            |" << endl;
			cout << " -----------------------------------------------------------------" << endl << endl;
		}
		cout << "*) To EXIT Press 8" << endl;
		cout << "*) To go back to MENU Press any number : ";
		cin >> option;
		system("cls");
		break;

	}
	case 8:
		// breaking the code to exit
		break;
	default:
	{
		// if any invalid option is entered 
		cout << " --------------------------" << endl;
		cout << "|  INVALID OPTION ENTERED  |" << endl;
		cout << " --------------------------" << endl << endl;
		cout << "*) To EXIT press 8" << endl;
		cout << "*) To go back to MENU Press any number : ";
		cin >> option;
		break;
	}

	}
}

int addition(float mtA[][col], float mtB[][col], int row1, int col1, int row2, int col2)
{
	float add[row][col]; // declaring add array to store elements in it after addition

						 // adding two matrices
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			add[i][j] = mtA[i][j] + mtB[i][j];
		}
	}

	// displaying sum of two matrices
	system("cls");
	cout << "  ----------------------------------------------" << endl;
	cout << "    Addition of two Matrices is                 " << endl << endl;
	for (int i = 0; i < row2; i++)
	{
		cout << "\t|";
		for (int j = 0; j < col2; j++)
		{
			cout << " \t" << add[i][j];
		}
		cout << "\t|";
		cout << endl;
	}
	// calulator theme function
	calc();

	return 0;
}
int subtraction(float mtA[][col], float mtB[][col], int row1, int col1, int row2, int col2)
{
	float sub[row][col]; // declaring add array to store elements in it after addition

						 // SUBTRACTING two matrices
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			sub[i][j] = mtA[i][j] - mtB[i][j];
		}
	}

	// displaying subtraction of two matrices
	system("cls");
	cout << "  ----------------------------------------------" << endl;
	cout << "    Subtraction of two MAtrices is                 " << endl << endl;
	for (int i = 0; i < row2; i++)
	{
		cout << "\t|";
		for (int j = 0; j < col2; j++)
		{
			cout << " \t" << sub[i][j];
		}
		cout << "\t|";
		cout << endl;
	}
	// calculator theme function
	calc();

	return 0;

}
int multiplication(float mtA[][col], float mtB[][col], int row1, int col1, int row2, int col2)
{
	float mult[row][col]; // declaring mult array to store elements after multiplication

						  // Initializing elements of matrix mult to 0.
	for (int i = 0; i < row1; i++)
		for (int j = 0; j < col2; j++)
		{
			mult[i][j] = 0;
		}

	// Multiplying matrix a and b and storing in array mult.
	for (int i = 0; i < row1; i++)
		for (int j = 0; j < col2; j++)
			for (int k = 0; k < col1; k++)
			{
				mult[i][j] += mtA[i][k] * mtB[k][j];
			}

	// Displaying the multiplication of two matrix.

	system("cls");
	cout << "  ----------------------------------------------" << endl;
	cout << "    Multiplication of two Matrices is " << endl;
	for (int i = 0; i < row1; ++i)
	{
		cout << "\t|";
		for (int j = 0; j < col2; ++j)
		{
			cout << " \t" << mult[i][j];
		}
		cout << "\t|";
		cout << endl;
	}
	// calculator theme function
	calc();

	return 0;

}
int determinant(float mt[][col], int r)
{
	int d = 0; // declaring d for storing determinant in it
	float detmat[row][col];
	if (r == 2) // if there are two rows then it will use this formula
	{
		system("cls");
		cout << "  ----------------------------------------------" << endl;
		cout << "    Determinant of the Matrix is :  " << endl << endl << endl;
		return ((mt[0][0] * mt[1][1]) - (mt[1][0] * mt[0][1]));
		// calculator theme function
		calc();

	}
	else // if there are more than two rows then it will use this formula
	{
		for (int q = 0; q < r; q++) // calculating determinant
		{
			int subi = 0; //submatrix's i value
			for (int i = 1; i < r; i++)
			{
				int subj = 0; //submatrix's j value
				for (int j = 0; j < r; j++)
				{
					if (j == q)
						continue;
					detmat[subi][subj] = mt[i][j];
					subj++;
				}
				subi++;
			}
			//determinant function is called recursively to calculate the inner determinant and then multiply it with the outer value.
			d = d + (pow(-1, q) * mt[0][q] * determinant(detmat, r - 1));
		}
	}
	return d;
}
int adjoin(float mt[][col], int r)
{
	if (r == 2)
	{
		//displaying adjoint of 2 x 2 matrix just by shifting values

		system("cls");
		cout << "  ----------------------------------------------" << endl;
		cout << "    Adjoint of Matrix is " << endl;
		cout << "\t|\t" << mt[1][1] << "\t" << -mt[0][1] << "\t|" << endl << "\t|\t" << -mt[1][0] << "\t" << mt[0][0] << "\t|" << endl;
		cout << endl;
		calc();

	}
	if (r == 3)
	{
		// Method for finding adjoint of matrix A of order 3x3
		float t[10][10];
		t[0][0] = ((mt[1][1] * mt[2][2]) - (mt[2][1] * mt[1][2]));
		t[0][1] = -((mt[1][0] * mt[2][2]) - (mt[2][0] * mt[1][2]));
		t[0][2] = ((mt[1][0] * mt[2][1]) - (mt[2][0] * mt[1][1]));
		t[1][0] = -((mt[0][1] * mt[2][2]) - (mt[2][1] * mt[0][2]));
		t[1][1] = ((mt[0][0] * mt[2][2]) - (mt[2][0] * mt[0][2]));
		t[1][2] = -((mt[0][0] * mt[2][1]) - (mt[2][0] * mt[0][1]));
		t[2][0] = ((mt[0][1] * mt[1][2]) - (mt[1][1] * mt[0][2]));
		t[2][1] = -((mt[0][0] * mt[1][2]) - (mt[1][0] * mt[0][2]));
		t[2][2] = ((mt[0][0] * mt[1][1]) - (mt[1][0] * mt[0][1]));
		// calculating adjoint of matrix A of order 3 x 3
		mt[0][0] = t[0][0]; mt[0][1] = t[1][0]; mt[0][2] = t[2][0];
		mt[1][0] = t[0][1]; mt[1][1] = t[1][1]; mt[1][2] = t[2][1];
		mt[2][0] = t[0][2]; mt[2][1] = t[1][2]; mt[2][2] = t[2][2];
		// displaying adjoint
		system("cls");
		cout << "  ----------------------------------------------" << endl;
		cout << "    Adjoint of Matrix is " << endl;
		for (int i = 0; i < r; ++i)
		{
			cout << "\t|";
			for (int j = 0; j < r; ++j)
			{
				cout << "\t" << mt[i][j];
			}
			cout << "\t|";
			cout << endl;
		}
		cout << endl;
		// calculator theme function
		calc();
	}
	return 0;
}
int transpose(float mt[][col], int r, int c)
{
	float transpose[row][col]; // declaring float array to store transpose in it
							   // calculating transpose of matrix
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			transpose[j][i] = mt[i][j];
		}
	}
	// displaying transpose of matrix
	system("cls");
	cout << "  ----------------------------------------------" << endl;
	cout << "    Transpose of Matrix is " << endl;
	for (int i = 0; i < c; ++i)
	{
		cout << "\t|";
		for (int j = 0; j < r; ++j)
		{
			cout << " \t" << transpose[i][j];
		}
		cout << "\t|";
		cout << endl;
	}
	cout << endl;
	// calculator theme function
	calc();

	return 0;
}
int inverse(float mt[][col], int r)
{
	float inverse[2][2]; //declaring inverse array to store elements in it after calculating array
	float x = ((mt[0][0] * mt[1][1]) - (mt[1][0] * mt[0][1])); // calculating determinant
	float adjoin[2][2]; // calculating and storing adjoint in it
	// calculating adjoint
	adjoin[0][0] = mt[1][1];
	adjoin[0][1] = -mt[0][1];
	adjoin[1][0] = -mt[1][0];
	adjoin[1][1] = mt[0][0];
	// calculating inverse
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < r; j++)
		{
			// dividing every element of adjoin array by calculated determinant of matrix
			inverse[i][j] = (adjoin[i][j] / x);
		}
	}
	// displaying in matrix form after calculating inverse
	system("cls");
	cout << "  ----------------------------------------------" << endl;
	cout << "    Inverse of Matrix is " << endl;
	for (int i = 0; i < r; ++i)
	{
		cout << "\t|";
		for (int j = 0; j < r; ++j)
		{
			cout << "\t" << inverse[i][j];
		}
		cout << "\t|";
		cout << endl;
	}
	cout << endl;
	// calculator theme function
	calc();

	return 0;
}

void calc()
{
	// calculator theme
	cout << "  ---------------------------------------------- " << endl;
	cout << " |----------------------------------------------|" << endl;
	cout << " |SHIFT|ALPHA|  <- | ->   |  MODE |  CALC | d/dx|" << endl;
	cout << " |-----|-----|-----|------|-------|-------|-----|" << endl;
	cout << " |  M+ |' '' | (-) | x^2  |   x^  |  log  |  ln |" << endl;
	cout << " |-----|-----|-----|------|-------|-------|-----|" << endl;
	cout << " | RCL | Eng |  (  |   )  |  S=D  |  FUNC |SOLVE|" << endl;
	cout << " |-----|-----|-----|------|-------|-------|-----|" << endl;
	cout << " |  9  |  8  |  7  |  nCr |  nPr  |  DEL  |  AC |" << endl;
	cout << " |-----|-----|-----|------|-------|-------|-----|" << endl;
	cout << " |  6  |  5  |  4  |VECTOR| MATRIX|   x   |  /  |" << endl;
	cout << " |-----|-----|-----|------|-------|-------|-----|" << endl;
	cout << " |  3  |  2  |  1  |CMPLEX|  STAT |   +   |  -  |" << endl;
	cout << " |-----|-----|-----|------|-------|-------|-----|" << endl;
	cout << " |  0  |  .  | EXP |  ANS |  RAN# |  COPY |  =  |" << endl;
	cout << "  ----------------------------------------------" << endl;
}




