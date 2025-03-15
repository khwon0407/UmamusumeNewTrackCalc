#include <iostream>
#include <cstring>
#include "RaceHeader.hpp"
#include "GradeInfo.hpp"

GradeInfo::GradeInfo(string grade) : RunGrade(grade) {}
GradeInfo::~GradeInfo() {}
void GradeInfo::print() {
	cout << "[" << RunGrade << "]";
}

PatternRace::PatternRace(string grade) : GradeInfo(grade) {}
PatternRace::~PatternRace() {}
bool PatternRace::isPattern() const { return true; }

NotPatternRace::NotPatternRace(string grade) : GradeInfo(grade) {}
NotPatternRace::~NotPatternRace() {}
bool NotPatternRace::isPattern() const { return false; }

G1::G1() : PatternRace("G1") { tempNew(); }
G1::~G1() { tempDelete(); }
bool G1::isPattern() const { return PatternRace::isPattern(); }
bool G1::isG1() const { return true; }
void G1::tempNew() { moreOPWin++; }
void G1::tempDelete() { moreOPWin--; }
int G1::RaceStat() const { return race_stat; }

G2::G2() : PatternRace("G2") { tempNew(); }
G2::~G2() { tempDelete(); }
bool G2::isPattern() const { return PatternRace::isPattern(); }
bool G2::isG1() const { return false; }
void G2::tempNew() { moreOPWin++; }
void G2::tempDelete() { moreOPWin--; }
int G2::RaceStat() const { return race_stat; }

G3::G3() : PatternRace("G3") { tempNew(); }
G3::~G3() { tempDelete(); }
bool G3::isPattern() const { return PatternRace::isPattern(); }
bool G3::isG1() const { return false; }
void G3::tempNew() { moreOPWin++; }
void G3::tempDelete() { moreOPWin--; }
int G3::RaceStat() const { return race_stat; }

OP::OP() : NotPatternRace("OP") { tempNew(); }
OP::~OP() { tempDelete(); }
bool OP::isPattern() const { return NotPatternRace::isPattern(); }
bool OP::isG1() const { return false; }
void OP::tempNew() { moreOPWin++; }
void OP::tempDelete() { moreOPWin--; }
int OP::RaceStat() const { return race_stat; }

PreOP::PreOP() : NotPatternRace("Pre-OP") { tempNew(); }
PreOP::~PreOP() { tempDelete(); }
bool PreOP::isPattern() const { return NotPatternRace::isPattern(); }
bool PreOP::isG1() const { return false; }
void PreOP::tempNew() {}
void PreOP::tempDelete() {}
int PreOP::RaceStat() const { return race_stat; }