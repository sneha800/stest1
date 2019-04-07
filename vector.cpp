#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> v,v2;
    // 1.
    v.assign(5,10);
    v2.assign(v.begin(),v.end());
    //2.
    for(int i=0;i<v.size();i++)
    {
        cout<<"v is "<< v.at(i)<<" "<<"\n";
    }
    //3.
    cout<<"v back is "<<v.back()<<"\n";
    //4.

    cout<<"v begin is "<<*(v.begin())<<"\n";
    //5.
    cout<<"v capacity is "<<v.capacity()<<"\n";
    //6  
    v.clear();
    cout<<"v capacity is "<<v.capacity()<<"\n";
    v.assign(5,1);
    //7.
    while(!v2.empty())
    {
        cout<<"1"<<"\n";
        //infinite loop
        break;
    }
    //8.
    for (auto x:v){
        cout<<x<<" ";
    }
    cout<<"\n";
    //19.
    cout<<"v end is"<<*(v.end()-1)<<"\n";
    //9.
    v.erase(v.begin(),v.end()-1);
    v.assign(5,1);
    //10. 
    cout<<"front is "<<v.front()<<"\n";
    //11.
    v.insert(v.begin(),4,0); //at begin add 4 times 0
    v.insert(v.begin(),v2.begin(),v2.end());// at the begin copy v2 
    //12. 
    v.pop_back();
    //13.
    v.push_back(1);
    //14.
    cout<<"r begin is "<<*(v.rbegin())<<"\n";
    cout<<"r end is "<<*(v.rend())<<"\n";
     //15. 
    v.reserve(100);
    cout<<v.capacity()<<"\n";
    //16. 
    v.resize(10);// not change reserved space 
    cout<<v.capacity()<<"\n";
    //17. 
    cout<<"v size is "<<v.size()<<"\n";
    //18.
    v.swap(v2);
    //20.
    cout<<"v maxsize is "<<v.max_size()<<"\n";
    cout<<"v2 maxsize is "<<v2.max_size()<<"\n";

    for (auto x:v){
        cout<<x<<" ";
    }
    cout<<"\n";
    for (auto x:v2){
        cout<<x<<" ";
    }
return 0;
}