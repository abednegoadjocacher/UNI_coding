#include<iostream>
using namespace std;

class YoutubeChannel{
    public:
    string name;
    string ownerName;

};

int main()
{
    YoutubeChannel y_t_channel;
    y_t_channel.name = "Abed";
    y_t_channel.ownerName = "Adjo";

    cout<<y_t_channel.name<<endl;
    system("pause>0");
    cin.get();
}