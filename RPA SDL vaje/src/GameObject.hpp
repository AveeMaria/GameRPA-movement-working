#pragma once

#include "Game.hpp"

class GameObject {

private:
	int xpos;
	int ypos;

	int step = 50;
	int SCREENWIDTH = 800;
	int SCREENHEIGHT = 600;

	SDL_Texture* objTexture;
	SDL_Rect srcRect, destRect;

public:
	GameObject(const char* texturesheet,int x,int y);
	~GameObject();

	void increaseX(int);
	void increaseY(int);

	void Update();
	void Render();
};

