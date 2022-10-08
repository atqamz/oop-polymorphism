/*
TODO:

Anda ditugaskan menjadi programmer untuk membuat library enemy pada game. Enemy ini memiliki tiga macam *behaviour* dengan rincian sebagai berikut:

Enemy A memiliki kekuatan 1500 dan dia bisa menyemburkan api.

Enemy B memiliki kekuatan 500 dan dia bisa menyerang dengan pedang.

Enemy C memiliki kekuatan 100 dan dia bisa menyerang dengan pukulan.

Enemy A, B, dan C sama-sama memiliki kekuatan, sama-sama bisa berjalan dan sama-sama bisa menyerang.

Damage yang diberikan oleh masing-masing enemy berbeda tergantung dengan pedang dan api yang digunakan.

Api biru menghasilkan damage -500, api merah menghasilkan damage -100.

Pedang baja menghasilkan damage -300, pedang kayu menghasilkan damage -50.
*/

#include "Enemy.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    pair<int, int> posisi(0, 0);
    EnemyA *enemyApiBiru = new EnemyA(1500, posisi, "biru", 500);
    EnemyA *enemyApiMerah = new EnemyA(1500, posisi, "merah", 100);

    EnemyB *enemyPedangBaja = new EnemyB(500, posisi, "baja", 300);
    EnemyB *enemyPedangKayu = new EnemyB(500, posisi, "kayu", 50);

    EnemyC *enemyC = new EnemyC(100, posisi, 10);

    enemyApiBiru->Attack(enemyApiBiru->GetSerangan());
    enemyApiMerah->Attack(enemyApiMerah->GetSerangan());

    enemyPedangBaja->Attack(enemyPedangBaja->GetSerangan());
    enemyPedangKayu->Attack(enemyPedangKayu->GetSerangan());

    enemyC->Attack(enemyC->GetSerangan());
}