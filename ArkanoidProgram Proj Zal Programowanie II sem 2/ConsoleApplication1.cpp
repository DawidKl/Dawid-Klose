
#include <iostream>
#include <SFML/Graphics.hpp> //biblioteki sfml
#include <SFML/Window.hpp> 
#include "Ball.h"
using namespace sf; //przestrzeń nazw biblioteki sfml
using namespace std;

int main()
{
	Ball ball(400, 300);//tworzenie obiektu ball

	RenderWindow window{ VideoMode{800,600}, "Arcanoid Tutorial" };
	window.setFramerateLimit(60); //ustawianie 60 klatek obrazowych na sekundę
	Event event; //tworzenie interakcji pomiędzy użytkownikiem a komputerem

	
	while (true)
	{
		window.clear(Color::Black);
		window.pollEvent(event);//wyłapywanie zdarzeń związanych z oknem - możliwość zmiany rozmiaru okna
		
		
		if (event.type == Event::Closed)//wyłapanie zdarzenia kliknięcia przycisku 'close'
		{
			window.close();//zamykanie okna i przerwanie pętli
			break;
		}
		ball.update();
		window.draw(ball); //rysowanie kulki
		window.display(); //wyświetlanie narysowanych obiektów
	}
	return 0;
}


