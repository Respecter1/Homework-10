/*
	1. ���������� ���������� ����� SimpleCircle (������ ����) � ������ �����-������ ���� Radius (�����). 
	� ���� ������ ����������������� ����������� �� ����������, ����� �� ����������, � ����� ����� ������������ ������.
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