//
// Created by 20212 on 24-11-13.
//
//
#include <iostream>
#include <set>
#include <map>
#include <string>
using namespace std;
void test_set1()
{
    set<int> s;
    s.insert(3);
    s.insert(1);
    s.insert(4);
    s.insert(3);
    s.insert(7);
    s.insert(8);
    // ����ȥ��
    set<int>::iterator it = s.begin();
    while (it != s.end())
    {
        cout << *it << " ";
        ++it;
    }
    cout << endl;

    for (auto e : s)
    {
        cout << e << " ";
    }
    cout << endl;

    // set<int> copy(s);

    // for (auto e : copy)
    // {
    //     cout << e << " ";
    // }
    // cout << endl;
    // auto pos = s.find(3);
    set<int>::iterator pos = s.find(3);
    // set �� ���������� O(logN)
    // �㷨 find O(N)
    //  ʹ���㷨 find ��ʹ�� set ���� find ������
    s.erase(pos);
    for (auto e : s)
    {
        cout << e << " ";
    }
    cout << endl;
}
// erase ��ֵ �ײ�����ɵ�����ʵ��
// erase �������������ж��Ƿ��ҵ������ֵ

void test_map1()
{
    // map -> pair (key,value)
    map<int, int> m;
    m.insert(pair<int, int>(1, 1));
    m.insert(pair<int, int>(2, 2));
    m.insert(pair<int, int>(3, 3));
    m.insert(make_pair(4, 4)); // ����ģ�幹��һ������
    // ��Ҷ�ϲ����make_pair����Ϊ���ɱ������Լ�����

    map<int, int>::iterator it = m.begin();
    while (it != m.end())
    {
        cout << (*it).first << ":" << (*it).second << " ";
        cout << it->first << ":" << it->second << " ";

        ++it;
    }
    cout << endl;

    for (auto &e : m)
    {
        cout << e.first << ":" << e.second << " ";
    }
    cout << endl;
}

void test_map2()
{
    std::map<std::string, std::string> dict;
    dict.insert(pair<std::string, std::string>("sort", "����"));
    dict.insert(make_pair("string", "����"));

    std::map<std::string, std::string>::iterator it = dict.begin();
    while (it != dict.end())
    {
        cout << it->first << ":" << it->second << " ";
        ++it;
    }
    cout << endl;
}

void test_map3()
{
    string strs[]{"����", "����", "����", "����", "����", "����", "����"};
    map<string, int> coutMap;
    // for (auto &str : strs)
    // {
    //     map<string, int>::iterator ret = coutMap.find(str);
    //     if (ret != coutMap.end())
    //     {
    //         ret->second++;
    //     }
    //     else
    //     {
    //         coutMap.insert(make_pair(str, 1));
    //     }
    // }
    // ������ͳ�ƴ����ķ�ʽ
    for (auto &str : strs)
    {
        // 1.���ˮ������map�У���[]�����pair<str,0>,����ӳ�����(����)�����ý���++
        // 2.���ˮ����map�У���operator[]����ˮ����Ӧ��ӳ�����(����)�����ý���++
        coutMap[str]++;
    }

    for (auto &str : strs)
    {
        // single element (1)
        // pair<iterator, bool> insert(const value_type &val);
        // 1.���ˮ��û��map�����ɹ�
        // 2.���ˮ���Ѿ���map��,����ʧ��,ͨ������ֵ�õ�ˮ�����ڵĽڵ������,++����
        pair<map<string, int>::iterator, bool> ret = coutMap.insert(make_pair(str, 1));
        if (ret.second == false)
        {
            ret.first->second++;
        }
    }

    coutMap["�㽶"];
    coutMap["�㽶"] = 1;
    cout << coutMap["�㽶"] << endl;
    coutMap["����"] = 5;

    for (auto &e : coutMap)
    {
        cout << e.first << " : " << e.second << " ";
    }
    cout << endl;
    // mapped_type& operator[] (const key_type& k);
    // operator ͨ��insertʵ��

    // Ϊʲô���ﲻ��findʵ����
    // ������find�����map��û�����k����η��أ�

    // ������insert
    // 1.���k����map�У������pair<k,mapped_type()>���ٷ���ӳ����������
    // 2.���k��map�У������ʧ��,����k���ڽڵ��ӳ�����

    // map��operator[]����������
    // 1.����
    // 2.����k��Ӧ��ӳ��
    // 3.�޸�k��Ӧ��ӳ��

    std::map<std::string,std::string> dict;
    dict.insert(make_pair("sort","����"));
    dict["string"];
    dict["string"] = "�ַ���";
    dict["left"] = "���";

    //һ��ʹ��operator[]ȥ
    //1.������޸�
    //2.�޸�

    //һ�㲻������ȥ�����ң���Ϊ���key���ڲ����������

    //map
    //1.�� insert + operator[]
    //2.ɾ erase
    //3.�� find
    //4.�� operator[]
    //5.���� iterator + ��Χfor

    //Ҫע����� map �д����pair<k,v>��ֵ��
}
void test_multi()
{
    //��set��ȥ���� �����ֵ����
    multiset<int> ms;
    ms.insert(1);
    ms.insert(3);
    ms.insert(2);
    ms.insert(3);
    ms.insert(4);
    ms.insert(5);

    for(auto e:ms)
    {
        cout << e << " ";
    }
    cout <<endl;
    //multi_map �� map�������������һ���ģ����ǿ�����������
    //���ӵ���multi_mapû��operator[],��Ϊ�ж����ͬ��key��ʱ�򣬲�֪�������ĸ�key��value
    //map��ÿһ��Ԫ��ʵ������һ����ֵ��
    //Ԫ��������pair
    multimap<string,string> mm;
    mm.insert(std::make_pair("ƻ��", "1"));
    mm.insert(std::make_pair("ƻ��", "2"));
    mm.insert(std::make_pair("ƻ��", "3"));
    mm.insert(std::make_pair("ƻ��", "1"));
}

int main()
{
    // test_set1();
    // test_map1();
    // test_map2();
    // test_map3();
    test_multi();
}

// ������й������˵���ݴ���set�У�����һ�����ڲ������31��
// set �� ��

// ��ֵ ��ȡ��ַ�Ķ��� ����һ���־ö�����ڴ�λ��
// ��ֵ ��ʱֵ