#include "Ball.h"

Ball::Ball(float t_X, float t_Y)	//definicja konstruktora
{
	shape.setPosition(t_X, t_Y);
	shape.setRadius(this->ballRadius);
	shape.setFillColor(Color::Green);
	//ustawianie ko�a na �rodku ekranu:
	shape.setOrigin(this->ballRadius, this->ballRadius);
}

//definicja metody draw
void Ball::draw(RenderTarget& target, RenderStates state) const
{
	target.draw(this->shape, state); //przekazanie kszta�tu
}

//definicja metody update - przesuwanie kulki co klatk�
void Ball::update()
{
	shape.move(this->velocity);//metoda przesuwaj�ca o dany wektor
}
