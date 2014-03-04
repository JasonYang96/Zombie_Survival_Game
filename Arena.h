#ifndef ARENA
#define ARENA

#ifndef GLOBALS
#include "globals.h"
#endif

#ifndef HISTORY
#include "History.h"
#endif

#include <string>

class Player;
class Zombie;

class Arena
{
public:
	// Constructor/destructor
	Arena(int nRows, int nCols);
	~Arena();

	// Accessors
	int      rows() const;
	int      cols() const;
	Player*  player() const;
	int      zombieCount() const;
	int      getCellStatus(int r, int c) const;
	int      numberOfZombiesAt(int r, int c) const;
	void     display(std::string msg) const;
	History& history();

	// Mutators
	void setCellStatus(int r, int c, int status);
	bool addZombie(int r, int c);
	bool addPlayer(int r, int c);
	void moveZombies();

private:
	int		 m_grid[MAXROWS][MAXCOLS];
	int		 m_rows;
	int      m_cols;
	Player*  m_player;
	Zombie*  m_zombies[MAXZOMBIES];
	int      m_nZombies;
	int	     m_turns;
	History  m_history;

	// Helper functions
	void checkPos(int r, int c) const;
	bool isPosInBounds(int r, int c) const;
};

#endif