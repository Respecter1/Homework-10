/*
	1. Представте оголошення класу SimpleCircle (просте коло) з єдиною зміною-членом його Radius (радіус). 
	У класі повинні використовуватися конструктор та деструктор, задані за умовчанням, а також метод встановлення радіусу.
*/

class SimpleCircle
{
public:
	SimpleCircle();
	~SimpleCircle();
	void SetRadius(double Radius) { this->Radius = Radius; }
private:
	double Radius;
};

SimpleCircle::SimpleCircle()
{
}

SimpleCircle::~SimpleCircle()
{
}