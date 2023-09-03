#include "GameObject.h"
#include "TextureManager.h"

GameObject::GameObject(const char* texturesheet, SDL_Renderer* ren) {
	renderer = ren;
	objTexture = TextureManager::LoadTexture(texturesheet, ren);

}