#pragma once
#include <SFML\Graphics.hpp>
using namespace sf;

class BaseApp
{
public:
	BaseApp() {}

	virtual void Setup() {}
	virtual void Update(RenderWindow * window) {}
	virtual void Draw(RenderWindow * window) {}

	//Events
	virtual void WindowClosed() {}
	virtual void WindowResized() {}
	virtual void TextEntered(int unicode) {}
	

	virtual ~BaseApp() {}
};