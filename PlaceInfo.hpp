#ifndef _PLACEINFO_H__
#define _PLACEINFO_H__

#include <iostream>
#include <cstring>
using namespace std;

//경기장 위치 정보
class PlaceInfo {
protected:
	string place;
public:
	PlaceInfo(string place);
	virtual ~PlaceInfo();
	void print();
	virtual void updatePlus() = 0;
	virtual void updateMinus() = 0;
};

//1차적 분류
class Oguri : public PlaceInfo {
public:
	Oguri(string place);
	virtual ~Oguri();
	virtual void updatePlus();
	virtual void updateMinus();
};

class Dohoku : public PlaceInfo {
public:
	Dohoku(string place);
	virtual ~Dohoku();
	virtual void updatePlus();
	virtual void updateMinus();
};

class Kanto : public PlaceInfo {
public:
	Kanto(string place);
	virtual ~Kanto();
	virtual void updatePlus();
	virtual void updateMinus();
};

class Hotkaido : public PlaceInfo {
public:
	Hotkaido(string place);
	virtual ~Hotkaido();
	virtual void updatePlus();
	virtual void updateMinus();
};

class Kansai : public PlaceInfo {
public:
	Kansai(string place);
	virtual ~Kansai();
	virtual void updatePlus();
	virtual void updateMinus();
};


//진짜 이름
class Kokura : public Oguri {
public:
	Kokura();
	~Kokura();
	void updatePlus();
	void updateMinus();
};

class Hukusima : public Dohoku {
public:
	Hukusima();
	~Hukusima();
	void updatePlus();
	void updateMinus();
};

class Niegata : public Dohoku {
public:
	Niegata();
	~Niegata();
	void updatePlus();
	void updateMinus();
};

class Tokyo : public Kanto {
public:
	Tokyo();
	~Tokyo();
	void updatePlus();
	void updateMinus();
};

class Nakayama : public Kanto {
public:
	Nakayama();
	~Nakayama();
	void updatePlus();
	void updateMinus();
};

class Oi : public Kanto {
public:
	Oi();
	~Oi();
	void updatePlus();
	void updateMinus();
};

class Satporo : public Hotkaido {
public:
	Satporo();
	~Satporo();
	void updatePlus();
	void updateMinus();
};

class Hacodate : public Hotkaido {
public:
	Hacodate();
	~Hacodate();
	void updatePlus();
	void updateMinus();
};

class Chuco : public Kansai {
public:
	Chuco();
	~Chuco();
	void updatePlus();
	void updateMinus();
};

class Hansin : public Kansai {
public:
	Hansin();
	~Hansin();
	void updatePlus();
	void updateMinus();
};

class Kyoto : public Kansai {
public:
	Kyoto();
	~Kyoto();
	void updatePlus();
	void updateMinus();
};

#endif