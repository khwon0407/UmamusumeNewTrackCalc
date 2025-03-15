#ifndef _DISTINFO_H__
#define _DISTINFO_H__

#include <iostream>
#include <cstring>
using namespace std;

//���̽� �Ÿ� ����
class DistInfo {
protected:
	int dist; //�ǰŸ�
	bool MultipleOf400; //�ٰ��Ÿ� ���� �ľ�
	string CompareDist; //�Ÿ��� ���� �з�
public:
	DistInfo(int dist, string CompareDist);
	~DistInfo();
	void print();
	void tempNew();
	void tempDelete();
};

//�ܰŸ�
class Short : public DistInfo {
public:
	Short(int dist);
	~Short();
};

//����
class Mile : public DistInfo {
public:
	Mile(int dist);
	~Mile();
};


//�߰Ÿ�
class Middle : public DistInfo {
public:
	Middle(int dist);
	~Middle();
};

//��Ÿ�
class Long : public DistInfo {
public:
	Long(int dist);
	~Long();
};

#endif