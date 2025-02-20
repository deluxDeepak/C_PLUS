#include<iostream>
#include<vector>

using namespace std;

// vector is a sequence container. a vector store alement in a linear arrangement and allows fast random acess to any alement 

class Chai
{
    public:
        // data members or  (atributes)
        string teaname;
        int serving;

        // jaise array hai waise hi vector ayega 
        // vector<string> ye pura data type hai 

        vector<string> ingrident;          //list of data 


        // member function 
        void display()
        {
            cout<<"Tea name "<<teaname <<endl;
            cout<<"servings "<<serving <<endl;
            cout<<"ingrident:";

            // using loop to get the element in vector 
            for(string ing : ingrident)
            {
                cout<<ing<<endl;
            }
        }

};

int main()
{
    Chai onechai;
    onechai.teaname="lemon tea";
    onechai.serving=2;
    onechai.ingrident={"water","suger","milk"};

    onechai.display();
    return 0;
}