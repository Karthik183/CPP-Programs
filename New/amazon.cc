#include <bits/stdc++.h>
using namespace std;

int main() {
	string a;
	vector<string> sv;
	map<string,int> m;
	while(1){
	    cin>>a;
	    if(a[a.size()-1]=='$'){
	        a.pop_back();
	        sv.push_back(a);
	        break;
	    }
	    sv.push_back(a);
	}
	for(int i=0;i<sv.size();i++){
    	m[sv[i]] = i;
	}
	for(int i=0;i<sv.size();i++){
    	reverse(sv[i].begin(),sv[i].end());
    	if(m.find(sv[i])!=m.end() && m[sv[i]]!=i){
    	    reverse(sv[i].begin(),sv[i].end());
    	    cout<<sv[i]<<endl;
    	    return 0;
    	}
	}
	cout<<"$"<<endl;
	return 0;
}
