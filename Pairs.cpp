#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int val;
    Student(string s, int v)
    {
        name = s;
        val = v;
    }
};

bool cmp(Student a, Student b)
    {
        if (a.name == b.name)
        {
            return a.val > b.val;
        }else{
            return a.name < b.name;
        }
    }

int main()
{
   vector<Student> vec;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        int v;
        cin >> s >> v;
        vec.push_back((Student(s, v)));
    }
    sort(vec.begin(), vec.end(),cmp);
    for (int i = 0; i < n; i++)
    {
       cout << vec[i].name << " " << vec[i].val << endl;
    }
    
    return 0;
}