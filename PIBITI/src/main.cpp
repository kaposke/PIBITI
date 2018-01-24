#include <SFML\Graphics.hpp>
#include "App\AppRunner.h"
#include "App.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(800,600), "PIBITI", sf::Style::Default);
	RunApp(new App(), &window);
}