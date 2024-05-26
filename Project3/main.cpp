/*
	3. Додайте до класу новий конструктор, який надає значення свого параметра змінної його itsRadius.
*/

class SimpleCircle
{
public:
	SimpleCircle();
	SimpleCircle(double itsRadius);
		~SimpleCircle();
	void SetRadius(double Radius) { this->Radius = Radius; }
private:
	double Radius;
};

SimpleCircle::SimpleCircle()
{
	SetRadius(5.0);
}

SimpleCircle::SimpleCircle(double itsRadius)
{
	SetRadius(itsRadius);
}

SimpleCircle::~SimpleCircle()
{
}

