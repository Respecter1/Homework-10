/*
2. Використовуючи клас, створений у вправі 1, за допомогою конструктора, заданого за замовчуванням, ініціалізуйте змінну його Radius значенням 5.
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
	SetRadius (5.0);
}

SimpleCircle::~SimpleCircle()
{
}
