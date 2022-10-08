#include "Enemy.h"
#include <iostream>
using namespace std;

EnemyParent::EnemyParent(int _kekuatan, pair<int, int> _posisi, int _serangan)
{
    SetKekuatan(_kekuatan);
    SetPosisi(_posisi);
    SetSerangan(_serangan);
}

void EnemyParent::Attack(int _serangan)
{
    cout << "Enemy doing Normal Attack, dealing " << _serangan << " damage." << endl;
}

void EnemyParent::Move(pair<int, int> _posisi)
{
    m_posisi = _posisi;
}

int EnemyParent::GetKekuatan()
{
    return m_kekuatan;
}

pair<int, int> EnemyParent::GetPosisi()
{
    return m_posisi;
}

int EnemyParent::GetSerangan()
{
    return m_serangan;
}

void EnemyParent::SetKekuatan(int _kekuatan)
{
    m_kekuatan = _kekuatan;
}

void EnemyParent::SetPosisi(pair<int, int> _posisi)
{
    m_posisi = _posisi;
}

void EnemyParent::SetSerangan(int _serangan)
{
    m_serangan = _serangan;
}

EnemyA::EnemyA(int _kekuatan, pair<int, int> _posisi, string _jenisApi, int _serangan) : EnemyParent(_kekuatan, _posisi, _serangan)
{
    SetJenisApi(_jenisApi);

    cout << "EnemyA created with power " << _kekuatan << " and fire type " << _jenisApi << endl;
}

void EnemyA::Attack(int _serangan)
{
    cout << "EnemyA doing Fire Attack, dealing " << _serangan << " damage." << endl;
}

string EnemyA::GetJenisApi()
{
    return jenisApi;
}

void EnemyA::SetJenisApi(string _jenisApi)
{
    jenisApi = _jenisApi;
}

EnemyB::EnemyB(int _kekuatan, pair<int, int> _posisi, string _jenisPedang, int _serangan) : EnemyParent(_kekuatan, _posisi, _serangan)
{
    SetJenisPedang(_jenisPedang);

    cout << "EnemyB created with power " << _kekuatan << " and sword type " << _jenisPedang << endl;
}

void EnemyB::Attack(int _serangan)
{
    cout << "EnemyB doing Sword Attack, dealing " << _serangan << " damage." << endl;
}

string EnemyB::GetJenisPedang()
{
    return jenisPedang;
}

void EnemyB::SetJenisPedang(string _jenisPedang)
{
    jenisPedang = _jenisPedang;
}

EnemyC::EnemyC(int _kekuatan, pair<int, int> _posisi, int _serangan) : EnemyParent(_kekuatan, _posisi, _serangan)
{
    cout << "EnemyC created with power " << _kekuatan << endl;
}

void EnemyC::Attack(int _serangan)
{
    cout << "EnemyC doing Attack with Punch, dealing " << _serangan << " damage." << endl;
}
