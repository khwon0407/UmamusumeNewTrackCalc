#ifndef _GRADEINFO_H__
#define _GRADEINFO_H__

#include <iostream>
#include <cstring>
using namespace std;

//���̽� �׷��̵� ����
class GradeInfo {
protected:
	string RunGrade; //���� �׷��̵�
public:
	GradeInfo(string grade);
	virtual ~GradeInfo();
	void print();
	virtual bool isPattern() const = 0; //���� �׷��̵尡 �߻�����ΰ� �ƴѰ��� ��ȯ
	virtual bool isG1() const = 0;
	virtual void tempNew() = 0;
	virtual void tempDelete() = 0;
	virtual int RaceStat() const = 0;
};

//�߻����, G1, G2, G3�� ����
class PatternRace : public GradeInfo {
public:
	PatternRace(string grade);
	virtual ~PatternRace();
	virtual bool isPattern() const;
	virtual bool isG1() const = 0;
	virtual void tempNew() = 0;
	virtual void tempDelete() = 0;
	virtual int RaceStat() const = 0;
};

//�߻���� �ƴ�, OP, PreOP ����
class NotPatternRace : public GradeInfo {
public:
	NotPatternRace(string grade);
	virtual ~NotPatternRace();
	virtual bool isPattern() const;
	virtual bool isG1() const = 0;
	virtual void tempNew() = 0;
	virtual void tempDelete() = 0;
	virtual int RaceStat() const = 0;
};

//G1
class G1 : public PatternRace {
private:
	int race_stat = 10; //�¸� �� �⺻ ���� ����Ʈ
public:
	G1();
	~G1();
	bool isPattern() const;
	bool isG1() const;
	void tempNew();
	void tempDelete();
	int RaceStat() const;
};

//G2
class G2 : public PatternRace {
private:
	int race_stat = 8;
public:
	G2();
	~G2();
	bool isPattern() const;
	bool isG1() const;
	void tempNew();
	void tempDelete();
	int RaceStat() const;
};

//G3
class G3 : public PatternRace {
private:
	int race_stat = 8;
public:
	G3();
	~G3();
	bool isPattern() const;
	bool isG1() const;
	void tempNew();
	void tempDelete();
	int RaceStat() const;
};

//OP
class OP : public NotPatternRace {
private:
	int race_stat = 5;
public:
	OP();
	~OP();
	bool isPattern() const;
	bool isG1() const;
	void tempNew();
	void tempDelete();
	int RaceStat() const;
};

//PreOP
class PreOP : public NotPatternRace {
private:
	int race_stat = 5;
public:
	PreOP();
	~PreOP();
	bool isPattern() const;
	bool isG1() const;
	void tempNew();
	void tempDelete();
	int RaceStat() const;
};

#endif