#include <bits/stdc++.h>

using namespace std;

#define SIZE 250

class Shiam
{
private:
    char *p;
    int len;

public:
    Shiam();  //constructore
    ~Shiam(); //destructor
    void sett(char *ptr);
    void show();
};

Shiam::Shiam()
{
    p=(char *) malloc(SIZE);
    if(!p)
    {
        cout<<"Allocation error\n";
        exit(1);
    }
    *p = '\n';
    len = 0;

}

Shiam::~Shiam()
{
    cout<<"Freeing P\n";
    free(p);
}

void Shiam::sett(char *ptr)
{
    if(strlen(ptr) >= SIZE)
    {
        cout<<"string too big.\n";
        return ;
    }
    p = ptr;
    len = strlen(ptr);   
}

void Shiam::show()
{
    cout<< p << " - length: " << len;
    cout<< "\n";
}

int main()
{
    Shiam s1, s2;
    char s1_text[] = "This is a text";
    char s2_text[] = "I like C++";
    s1.sett(s1_text);
    s2.sett(s2_text);

    s1.show();
    s2.show();

    return 0;

}