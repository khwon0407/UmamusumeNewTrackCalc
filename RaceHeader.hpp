#ifndef _RACEHEADER_HPP__
#define _RACEHEADER_HPP__

#include <iostream>
#include <cstring>
#include "RaceBase.hpp"

using namespace std;

extern float race_bonus;

extern bool high_speed_miler;
extern bool wonderful_umamusume;
extern bool queen_umamusume;
extern bool best_umamusume;
extern bool dirt_g1_lord;
extern bool high_speed_sprinter;

extern bool dirt_swell;
extern bool princess_umamusume;
extern bool distance_400_winner;
extern bool shield_winner;
extern bool dirt_wise_man;
extern bool dirt_sprinter;
extern bool great_sprinter;
extern bool heroine_umamusume;
extern bool dirt_g1_monster;
extern bool dirt_g1_strong;
extern bool spring_winner;
extern bool charisma_umamusume;
extern bool autumn_winner;
extern bool distance_not_400_winner;

extern bool dirt_proficiency;
extern bool swell_umamusume;
extern bool junior_umamusume;
extern bool master_umamusume;
extern bool dirt_new_star;
extern bool poor_umamusume;
extern bool global_umamusume;
extern bool veteran_umamusume;
extern bool oguri_master;
extern bool dohoku_master;
extern bool kanto_master;
extern bool hotkaido_master;
extern bool kansai_master;

extern int NHKMileCupWin;
extern int YasudaWin;
extern int MileChampionshipWin;

extern int SatsukiWin;
extern int JapanDubbyWin;
extern int KitkaWin;
extern int ClassicJapanCupORArimaWin;
extern int OsakaWin;
extern int HaruTenWin;
extern int TakarazukaWin;
extern int ArkiTenWin;
extern int JapanCupWin;
extern int ArimaWin;

extern int SakuraWin;
extern int OaksWin;
extern int ShukaWin;
extern int VictoriaMileWin;
extern int HansinJFWin;
extern int ClassicElizabethWin;
extern int ElizabethWin;

extern int TakamatsunomiyaWin;
extern int SprintersSWin;

extern int DirtG1Win;

extern int JBCSprinterWin;

extern int UnicornSWin;
extern int LeopardSWin;

extern int moreOPWin;

extern int TerfShortWin;
extern int TerfMileWin;
extern int TerfMiddleWin;
extern int TerfLongWin;

extern int DirtShortWin;
extern int DirtMileWin;
extern int DirtMiddleWin;

extern int Multiple400Win;
extern int MultipleNot400Win;

extern int DirtWin;

extern int HuchuUSWin;
extern int KyotoUSWin;
extern int NakayamaUSWin;
extern int HansinUSWin;
extern int HukusimaUSWin;

extern int SaudiWin;
extern int NewZealandWin;
extern int JapanDirtDubbyWin;
extern int BrazilCupWin;
extern int ArgentinaWin;
extern int AmericaWin;

extern int JuniorWin;

extern int HotkaidoWin;
extern int DohokuWin;
extern int KantoWin;
extern int KansaiWin;
extern int OguriWin;

extern int BonusStatSum;

void register_rotation();
void print_rotation();
void print_bonus();
void change_rotation();
void compare_training_and_race();

void set_bonus_point();

int select_racenumber(Race**, int);
int select_race();
void free_race(Race**, int, int);

void select_j7_f();
void select_j7_s();
void select_j8_f();
void select_j8_s();
void select_j9_f();
void select_j9_s();
void select_j10_f();
void select_j10_s();
void select_j11_f();
void select_j11_s();
void select_j12_f();
void select_j12_s();
void select_c1_f();
void select_c1_s();
void select_c2_f();
void select_c2_s();
void select_c3_f();
void select_c3_s();
void select_c4_f();
void select_c4_s();
void select_c5_f();
void select_c5_s();
void select_c6_f();
void select_c6_s();
void select_c7_f();
void select_c7_s();
void select_c8_f();
void select_c8_s();
void select_c9_f();
void select_c9_s();
void select_c10_f();
void select_c10_s();
void select_c11_f();
void select_c11_s();
void select_c12_f();
void select_c12_s();
void select_s1_f();
void select_s1_s();
void select_s2_f();
void select_s2_s();
void select_s3_f();
void select_s3_s();
void select_s4_f();
void select_s4_s();
void select_s5_f();
void select_s5_s();
void select_s6_f();
void select_s6_s();
void select_s7_f();
void select_s7_s();
void select_s8_f();
void select_s8_s();
void select_s9_f();
void select_s9_s();
void select_s10_f();
void select_s10_s();
void select_s11_f();
void select_s11_s();
void select_s12_f();
void select_s12_s();

extern void (*pfunc[])(void);

#endif