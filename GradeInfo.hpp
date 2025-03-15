#ifndef _GRADEINFO_H__
#define _GRADEINFO_H__

#include <iostream>
#include <cstring>
using namespace std;

//레이스 그레이드 정보
class GradeInfo {
protected:
	string RunGrade; //실제 그레이드
public:
	GradeInfo(string grade);
	virtual ~GradeInfo();
	void print();
	virtual bool isPattern() const = 0; //실제 그레이드가 중상경주인가 아닌가를 반환
	virtual bool isG1() const = 0;
	virtual void tempNew() = 0;
	virtual void tempDelete() = 0;
	virtual int RaceStat() const = 0;
};

//중상경주, G1, G2, G3가 있음
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

//중상경주 아님, OP, PreOP 있음
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
	int race_stat = 10; //승리 시 기본 스탯 포인트
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