#include "AppRunner.h"

void RunApp(BaseApp * app, RenderWindow * window)
{
	app->Setup();
	while (window->isOpen())
	{
		Clock clock;
		pollEvents(app, window);

		app->Update(window);
		app->Draw(window);
		window->display();

		Time frameTime = clock.restart();
		system("cls");
		std::cout << 1.f / frameTime.asSeconds() << std::endl;
	}
}

void pollEvents(BaseApp * app, RenderWindow * window)
{
	Event evnt;
	while (window->pollEvent(evnt))
	{
		switch (evnt.type)
		{
		case Event::Closed:
			app->WindowClosed();
			window->close();
			break;
		case Event::Resized:
			app->WindowResized();
			break;
		case Event::TextEntered:
			app->TextEntered(evnt.text.unicode);
			break;
		}
	}
}

