#include "App.h"

void App::Setup()
{
	gui.addElement(new Textbox(Vector2f(200,200)));
}

void App::Update(RenderWindow * window)
{
	gui.update(window);
}

void App::Draw(RenderWindow * window)
{
	window->clear(Color(200, 200, 200));

	gui.draw(window);
}

void App::WindowResized()
{
}

void App::TextEntered(int unicode)
{
	gui.write(unicode);
}