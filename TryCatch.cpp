#include <iostream>
#include <string>

int a;
int b;

std::string blackKing = "BK51";
std::string whiteKing = "WK73";
std::string whiteKnight = "WK12";
std::string whiteBishop = "WB34";


class Game
{
	virtual void start() {}
	virtual void end() {}
};



class ChessGame : public Game
{

	void start() {}

};

class Matrix
{
public:


	std::string** arr = nullptr;
	int size = 8;

	Matrix()
	{
		arr = new std::string * [size];

		for (int i = 0; i < size; ++i)
		{
			arr[i] = new std::string[size];
			for (int j = 0; j < size; ++j)
			{
				arr[i][j] = "~";
			}

		}
	}

	Matrix(const Matrix& obj)
	{
		this->size = obj.size;
		this->arr = new std::string * [size];

		for (int i = 0; i < size; ++i)
		{
			this->arr[i] = new std::string[size];
			for (int j = 0; j < size; ++j)
			{
				this->arr[i][j] = obj.arr[i][j];
			}
		}

	}

	void PlaceOfFigure()
	{
		int i;
		int j;
		std::cout << "Enter the first part of place of figure";
		std::cin >> i;
		std::cout << "Enter the second part of place of figure";
		std::cin >> j;

		if (i <= 7 && i >= 0 && j <= 7 && j >= 0)
			std::cout << "you give correct Place" << std::endl;
		else
			std::cout << "you give incorrect Place" << std::endl;

	}


};

class figure
{
public:

	figure() {}

	std::string colourOfFigure;
	std::string FigureType;
};


int main()
{

	try
	{
		Game g;
		Matrix m;

		m.PlaceOfFigure();
	}
	catch (const std::exception& e)
	{
		std::cerr << "ERROR " << e.what() << std::endl;
	}

	return 0;


}