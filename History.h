#ifndef HISTORY
#define HISTORY

#ifndef GLOBALS
#include "globals.h"
#endif

class History
{
public:
	//Constructor
	History(int nRows, int nCols);

	//Mutators
	bool record(int r, int c);

	//Accesors
	void display() const;

private:
	int m_row;
	int m_col;
	char m_grid[MAXROWS][MAXCOLS];
};

#endif