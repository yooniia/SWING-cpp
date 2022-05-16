#include <iostream> //��� ���� ����
using namespace std; //std �̸� ������ ����� �̸��� std:: ����

class Box //class ����
{
	int w1, h1;
	char f1; //���� ���� (��� ������ ���������ڴ� private)

public: //���������ڸ� public���� ����
	Box(int w, int h) { //Ŭ���� ������
		w1 = w;
		h1 = h; //������ ������ ���� �����ϱ� ����
	}

	char setFil(char f = '*') { //���ڸ� �����ϴ� �Լ� (����Ʈ ���� '*'�� �����ϱ� ���� �Լ� ���ڿ� ����)
		f1 = f; //������ ������ ���� �����ϱ� ����
		return 0; //char �� ��ȯ
	}

	int setSize(int w, int h) { //�簢�� ũ�⸦ �����ϴ� �Լ�
		w1 = w; 
		h1 = h; //������ ������ ���� �����ϱ� ����
		return 0; //int �� ��ȯ
	}

	void draw() { //�簢���� ����ϴ� �Լ�
		int i, j; //�ݺ��� ����� ���� ���� ����
		for (i = 0; i < h1; i++) {
			for (j = 0; j < w1; j++) {
				cout << f1; //���ڸ� ������ �� ������ ���� ��� (�ݺ���)
			}
			cout << endl;
		}
	}
};

int main() //���α׷� ������
{
	Box square1(3, 4); //��ü ȣ�� (���� 3, ���� 4)
	square1.setFil(); //����Ʈ ���� '*'�� �����Ǿ� �����Ƿ� ��ȣ �ȿ� ���� �ʿ�X
	square1.setSize(3, 4); //�簢���� ũ�⸦ ���� 3, ���� 4�� ������
	square1.draw(); //���� '*', ũ�Ⱑ ���� 3, ���� 4�� �簢�� ���

	cout << endl;

	Box square2(6, 10); //��ü ȣ�� (���� 6, ���� 10)
	square2.setFil('^'); //����Ʈ ���ڰ� '*'�� �����Ǿ� �����Ƿ� '^'�� �ٽ� ����
	square2.setSize(6, 10); //�簢���� ũ�⸦ ���� 6, ���� 10���� ������
	square2.draw(); //���� '^', ũ�Ⱑ ���� 6, ���� 10�� �簢�� ���
}