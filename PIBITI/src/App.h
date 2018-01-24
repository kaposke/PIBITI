#pragma once
#include "App\baseApp.h"
#include "GUI\GUIManager.h"

#include <iostream>

using namespace std;

class App : public BaseApp
{
	void Setup();
	void Update(RenderWindow * window);
	void Draw(RenderWindow * window);
	void WindowResized();

	//Events
	void TextEntered(int unicode);

	//App variables
	GUIManager gui;
};