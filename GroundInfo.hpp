#ifndef _GROUNDINFO_H__
#define _GROUNDINFO_H__

#include <iostream>
#include <cstring>
using namespace std;

//���̽� �׶��� ����
class GroundInfo {
protected:
	string ground; //���� �׶���
public:
	GroundInfo(string ground);
	virtual ~GroundInfo();
	void print();
	virtual bool isTerf() const = 0;
	virtual bool isDirt() const = 0;
	virtual void tempNew() = 0;
	virtual void tempDelete() = 0;
};

//�ܵ�
class Terf : public GroundInfo {
public:
	Terf();
	~Terf();
	bool isTerf() const;
	bool isDirt() const;
	void tempNew();
	void tempDelete();
};

//��Ʈ
class Dirt : public GroundInfo {
public:
	Dirt();
	~Dirt();
	bool isTerf() const;
	bool isDirt() const;
	void tempNew();
	void tempDelete();
};

#endif