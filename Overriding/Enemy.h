#include <iostream>
#include <string>
using namespace std;

class EnemyParent
{
protected:
    int m_kekuatan;
    pair<int, int> m_posisi;
    int m_serangan;

public:
    EnemyParent(int _kekuatan, pair<int, int> _posisi, int _serangan);
    virtual void Attack(int _serangan);
    virtual void Move(pair<int, int> _posisi);

    // Getter
    int GetKekuatan();
    pair<int, int> GetPosisi();
    int GetSerangan();

    // Setter
    void SetKekuatan(int _kekuatan);
    void SetPosisi(pair<int, int> _posisi);
    void SetSerangan(int _serangan);
};

class EnemyA : public EnemyParent
{
private:
    string jenisApi;

public:
    EnemyA(int _kekuatan, pair<int, int> _posisi, string _jenisApi, int _serangan);
    void Attack(int _serangan) override;

    // Getter
    string GetJenisApi();

    // Setter
    void SetJenisApi(string _jenisApi);
};

class EnemyB : public EnemyParent
{
private:
    string jenisPedang;

public:
    EnemyB(int _kekuatan, pair<int, int> _posisi, string _jenisPedang, int _serangan);
    void Attack(int _serangan) override;

    // Getter
    string GetJenisPedang();

    // Setter
    void SetJenisPedang(string _jenisPedang);
};

class EnemyC : public EnemyParent
{
public:
    EnemyC(int _kekuatan, pair<int, int> _posisi, int _serangan);
    void Attack(int _serangan) override;
};