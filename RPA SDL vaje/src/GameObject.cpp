#include "GameObject.hpp"
#include "TextureManager.hpp"

GameObject::GameObject(const char* texturesheet, int x, int y) 
{
    objTexture = TextureManager::LoadTexture(texturesheet);
    xpos = x;
    ypos = y;
}

//does nothing
GameObject::~GameObject() 
{
    SDL_DestroyTexture(objTexture);
}

void GameObject::Update() 
{
    srcRect.h = 100;
    srcRect.w = 100;
    srcRect.x = 0;
    srcRect.y = 0;

    destRect.x = xpos;
    destRect.y = ypos;
    destRect.w = srcRect.w;
    destRect.h = srcRect.h;
}

void GameObject::Render() 
{
    SDL_RenderCopy(Game::renderer, objTexture, &srcRect, &destRect);
}

//za premikanje x TODO:window borderji
void GameObject::increaseX(int x) 
{
    xpos += x;
}

//za premikanje y TODO:window borderji
void GameObject::increaseY(int y) 
{
    ypos += y;
}