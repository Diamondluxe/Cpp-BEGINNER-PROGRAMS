// This program illustrates the nested classes

#include<iostream>
using namespace std;

class Surround{
    public:
        class firstwithin{
            int var;
            public:
                firstwithin()
                {
                    cout<<"Firstwithin--Constructor called.."<<endl;
                }
                ~firstwithin()
                {
                    cout<<"Firstwithin--Destructor called.."<<endl;
                }
                int getvar()
                {
                    return var;
                }
        };

        friend void fun();

        firstwithin myfirstwithin;

        private:
            class secondwithin{
                int var;
                public:
                    secondwithin()
                    {
                        cout<<"Secondwithin--Constructor called.."<<endl;
                    }
                    ~secondwithin()
                    {
                        cout<<"Secondwithin--Destructor called.."<<endl;
                    }
                    int getvar()
                    {
                        return var;
                    }
            };
};

void fun()
{
    Surround::secondwithin a;
    Surround::firstwithin b;
    Surround c;
    c.myfirstwithin.getvar();
}

int main()
{
    fun();

    return 0;
}