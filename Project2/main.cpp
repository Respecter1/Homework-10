/*
2. �������������� ����, ��������� � ����� 1, �� ��������� ������������, �������� �� �������������, ����������� ����� ���� Radius ��������� 5.
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