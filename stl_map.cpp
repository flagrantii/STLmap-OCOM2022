#include <bits/stdc++.h>
using namespace std;

void show(map<int,int> ma){
    map<int,int> :: iterator t;
    for (t=ma.begin();t!=ma.end();t++){
        cout<<t->first<<" "<<t->second<<" ";
    }
}

int main() {
    int n,m,x,y;
    char cmd;
    map<int,int> ma;
    cin>>n;
    while(n--) {
        ma.clear();
        cin>>m;
        while(m--) {
            cin>>cmd;
            if(cmd=='a'){
                cin>>x>>y;
                ma.insert(pair<int,int>(x,y));
            }
            if(cmd=='b'){
                cin >> x;
                if (ma.count(x)!=0){
                	cout<<ma.at(x)<<" ";
				}
                else cout<< -1<<" ";
            }
            if(cmd=='c'){
                show(ma);
            }
        }
        cout<<"\n";
    }
}
