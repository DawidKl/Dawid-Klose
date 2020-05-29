#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
class Ball : public sf::Drawable //publiczne dziedziczenie z interfejsu Drawable
{
public:
	Ball(float t_X, float t_Y); //wymuszenie u¿ycia konstruktora parametrycznego koordynaty stworzenia obiektu
	Ball() = delete;
	~Ball() = default;

	void update();//metoda przemieszczaj¹ca kulkê co klatkê
private:
	CircleShape shape;
	const float ballRadius{ 10.0f }; //promieñ kulki
	const float ballVelocity{ 3.0f }; //nadanie ruchu kulce
	Vector2f velocity{ ballVelocity, ballVelocity }; //tworzenie zmiennej pozwalaj¹cej poruszaæ siê kulce w poziomie i pionie
									  
									  
									  //metoda rysuj¹ca
	void draw(RenderTarget& target, RenderStates state) const override; //metoda sta³a, nadpisana z interfejsu z którego dziedziczy
};
//1650
