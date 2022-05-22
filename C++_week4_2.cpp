#include <iostream>
using namespace std;

class Shape //Ŭ���� ����
{
	string NAME;
	int A;  //����1
	int B;  //����
	int C;  //����2

public:
	Shape(int ...) { //Ŭ���� ������   //"int ..."���� ���ڸ� �����ϸ� ������ ȣ�� �� ������ ������ ������ ���� ����
	}

	~Shape() { //Ŭ���� �Ҹ���
		cout << "Shape �Ҹ� " << NAME << " Ŭ����" << endl; //��ü�� �Ҹ�� �� �����
	}

	int getA(int A) { //A�� ����
		A = A;
		return A;
	}

	int getB(int B) { //B�� ����
		B = B;
		return B;
	}

	int getC(int C) { //C�� ����
		C = C;
		return C;
	}
	
	int AreaLadder() { //��ٸ����� ���̸� ������ִ� �Լ�
		int S; //���� ���� ������ ���� ����
		S = (A + B) * C / 2; //��ٸ��� ���� = (����1 + ����2) * ���� / 2
		cout << "��ٸ����� ���̴� " << S << " �̴�" << endl; //���� ���
		NAME = "Ladder"; //Ŭ���� ��ü �̸� ����
		return S; //S�� ��ȯ
	}

	int AreaRect() { //�簢���� ���̸� ������ִ� �Լ�
		int S; //���� ���� ������ ���� ����
		S = A * B; //�簢�� ���� = ���� * ����
		cout << "�簢���� ���̴� " << S << " �̴�" << endl; //���� ���
		NAME = "Rectangular"; //Ŭ���� ��ü �̸� ����
		return S; //S�� ��ȯ
	}

	double AreaOval() { //Ÿ���� ���̸� ������ִ� �Լ�
		double S; //���� ���� ������ ���� ���� (double ������ ����)
		S = A * B * 3.14; //Ÿ�� ���� = ���� * ���� * 3.14(pi)
		cout << "Ÿ���� ���̴� " << S << " �̴�" << endl;
		NAME = "CircleA"; //Ŭ���� ��ü �̸� ����
		return S; //S�� ��ȯ
	}

	void setTwo(int a, int b) { //Ÿ���� A, B�� �簢���� A, B�� �������ִ� �Լ�
		A = a;
		B = b;
	}

	void setThree(int a, int b, int c) { //��ٸ����� A, B, C ���̸� �������ִ� �Լ�
		A = a;
		B = b;
		C = c;
	}
};

int main()
{
	Shape a(5, 1); //��ü ȣ��
	a.setTwo(5, 1); //Ÿ���� A, B �� ����
	a.AreaOval(); //Ÿ�� ���� ���

	Shape b(10, 20); //��ü ȣ��
	b.setTwo(10, 20); //�簢���� A, B �� ����
	b.AreaRect(); //�簢�� ���� ���

	Shape c(3, 7, 4); //��ü ȣ��
	c.setThree(4, 8, 4); //��ٸ����� A, B, C �� ����
	c.AreaLadder(); //��ٸ��� ���� ���
	
	c.setThree(5, 10, 6); //��ٸ����� A, B, C �� ����
	c.AreaLadder(); //��ٸ��� ���� ���
}