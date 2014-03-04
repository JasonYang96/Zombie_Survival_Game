#include <iostream>
#include "History.h"
#include "globals.h"

using namespace std;

void clearScreen();

History::History(int nRows, int nCols)
{
	m_row = nRows;
	m_col = nCols;
	for (int r = 1; r <= m_row; r++)
	for (int c = 1; c <= m_col; c++)
		m_grid[r - 1][c - 1] = '.';
}

bool History::record(int r, int c)
{
	if (r > MAXROWS || c > MAXCOLS || r < 0 || c < 0)
		return false;

	if (m_grid[r - 1][c - 1] == '.')
		m_grid[r - 1][c - 1] = 'A';
	else if (m_grid[r - 1][c - 1] == 'A')
		m_grid[r - 1][c - 1] = 'B';
	else if (m_grid[r - 1][c - 1] == 'B')
		m_grid[r - 1][c - 1] = 'C';
	else if (m_grid[r - 1][c - 1] == 'C')
		m_grid[r - 1][c - 1] = 'D';
	else if (m_grid[r - 1][c - 1] == 'D')
		m_grid[r - 1][c - 1] = 'E';
	else if (m_grid[r - 1][c - 1] == 'E')
		m_grid[r - 1][c - 1] = 'F';
	else if (m_grid[r - 1][c - 1] == 'F')
		m_grid[r - 1][c - 1] = 'G';
	else if (m_grid[r - 1][c - 1] == 'G')
		m_grid[r - 1][c - 1] = 'H';
	else if (m_grid[r - 1][c - 1] == 'H')
		m_grid[r - 1][c - 1] = 'I';
	else if (m_grid[r - 1][c - 1] == 'I')
		m_grid[r - 1][c - 1] = 'J';
	else if (m_grid[r - 1][c - 1] == 'J')
		m_grid[r - 1][c - 1] = 'K';
	else if (m_grid[r - 1][c - 1] == 'K')
		m_grid[r - 1][c - 1] = 'L';
	else if (m_grid[r - 1][c - 1] == 'L')
		m_grid[r - 1][c - 1] = 'M';
	else if (m_grid[r - 1][c - 1] == 'M')
	 	m_grid[r - 1][c - 1] = 'N';
	else if (m_grid[r - 1][c - 1] == 'N')
		m_grid[r - 1][c - 1] = 'O';
	else if (m_grid[r - 1][c - 1] == 'O')
		m_grid[r - 1][c - 1] = 'P';
	else if (m_grid[r - 1][c - 1] == 'P')
		m_grid[r - 1][c - 1] = 'Q';
	else if (m_grid[r - 1][c - 1] == 'Q')
		m_grid[r - 1][c - 1] = 'R';
	else if (m_grid[r - 1][c - 1] == 'R')
		m_grid[r - 1][c - 1] = 'S';
	else if (m_grid[r - 1][c - 1] == 'S')
		m_grid[r - 1][c - 1] = 'T';
	else if (m_grid[r - 1][c - 1] == 'T')
		m_grid[r - 1][c - 1] = 'U';
	else if (m_grid[r - 1][c - 1] == 'U')
		m_grid[r - 1][c - 1] = 'V';
	else if (m_grid[r - 1][c - 1] == 'V')
		m_grid[r - 1][c - 1] = 'W';
	else if (m_grid[r - 1][c - 1] == 'W')
		m_grid[r - 1][c - 1] = 'X';
	else if (m_grid[r - 1][c - 1] == 'X')
		m_grid[r - 1][c - 1] = 'Y';
	else if (m_grid[r - 1][c - 1] == 'Y')
		m_grid[r - 1][c - 1] = 'Z';

	return true;
}

void History::display() const
{
	// Draw the grid
	clearScreen();
	for (int r = 1; r <= m_row; r++)
	{
		for (int c = 1; c <= m_col; c++)
			cout << m_grid[r-1][c-1];
		cout << endl;
	}
	cout << endl;
}