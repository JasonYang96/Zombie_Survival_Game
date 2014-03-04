#ifndef GAME
#define GAME

#include <string>

class Arena;

class Game
{
public:
	// Constructor/destructor
	Game(int rows, int cols, int nZombies);
	~Game();

	// Mutators
	void play();

private:
	Arena* m_arena;

	// Helper functions
	std::string takePlayerTurn();
};

#endif