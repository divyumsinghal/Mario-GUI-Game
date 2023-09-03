#include "GameObject.h"
#include "TextureManager.h"

GameObject::GameObject(const char* texturesheet, SDL_Renderer* ren) {
	renderer = ren;
	objTexture = TextureManager::LoadTexture(texturesheet, ren);
}

void GameObject::Update() {
    // Update the position as needed
    xpos = 100; // Adjust this value to set the x-position
    ypos = 100; // Adjust this value to set the y-position

    srcRect.h = 32;
    srcRect.w = 32;
    srcRect.x = 0;
    srcRect.y = 0;

    destRect.w = srcRect.w * 2;
    destRect.h = srcRect.h * 2;
    destRect.x = xpos;
    destRect.y = ypos;
}

void GameObject::Renderer() {

	SDL_RenderCopy(renderer, objTexture, &srcRect, &destRect);

}