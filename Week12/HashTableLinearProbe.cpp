//
// Created by Bradley Grose on 11/10/2020.
// Copyright (c) 2020 Bradley Grose. All rights reserved under MIT License.
//

#include <cstdlib>
#include <iostream>

using namespace std;

class HashEntry{
    public:
        HashEntry()
        {
            key = -1;
            value = 0.0;
        }
        HashEntry(int _key, float _value)
        {
            key = _key;
            value = _value;
        }
        int getKey()
        {
            return key;
        }
        float getValue()
        {
            return value;
        }
        void setHashEntry(int _key, float _value)
        {
            key = _key;
            value = _value;
        }

    private:
        int key;
        float value;
};

class HashTable{
    public:
        HashTable(int _buckets)
        {
            buckets = _buckets;
            t = new HashEntry[buckets];
        }
        ~HashTable() {
            delete [] t;
        }
        int hash(int _key)
        {
            return _key % buckets;
        }
        void remove(int _key)
        {
            int ind = hash(_key);
            if(t[ind].getKey() == _key) {
                t[ind].setHashEntry(-1, 0.0);
            }
            else
            {
                int prev_ind = ind;
                ind = (ind + 1) % buckets;
                while(t[ind].getKey() != _key)
                {
                    ind = (ind + 1) % buckets;
                    if(ind == prev_ind) break;
                }
                if(ind != prev_ind)
                {
                    t[ind].setHashEntry(-1, 0.0);
                }
                else {
                    cout << "Key did not exist" << endl;
                }

            }
        }
        void insert(int _key, float _value)
        {
            int ind = hash(_key);
            if(t[ind].getKey() == -1)
            {
                t[ind].setHashEntry(_key, _value);
            }
            else if(t[ind].getKey() == _key)
            {
                t[ind].setHashEntry(_key, _value);
            }
            else
            {
                int prev_ind = ind;
                ind = (ind + 1) % buckets;
                bool loopedAround = false;
                while (t[ind].getKey() != _key)
                {
                    if(t[ind].getKey() == _key) break;
                    ind = (ind + 1) % buckets;
                    if(loopedAround)
                    {
                        if(t[ind].getKey() == -1) break;
                        if(ind == prev_ind) break;
                    }
                    if(ind == prev_ind)
                    {
                        loopedAround = true;
                    }
                }
                if(ind != prev_ind) {
                    t[ind].setHashEntry(_key, _value);
                }
                else
                {
                    cout << "Hash Table is full" << endl;
                }

            }
        }
        void print()
        {
            for(int i=0; i < buckets; i++)
            {
                if(t[i].getKey() == -1) cout << "Null" << " ";
                else cout << t[i].getValue() << " ";
            }
            cout << endl;
        }
    private:
        HashEntry *t;
        int buckets;
};

int main(int argc, char** argv)
{
    HashTable ht(10);
    ht.insert(1, 2.5);
    ht.insert(1, 2.7);
    ht.print();
    ht.insert(11, 3.5);
    ht.insert(11, 4.2);
    ht.print();
    ht.remove(1);
    ht.print();
    ht.remove(11);
    ht.print();


    return 0;
}