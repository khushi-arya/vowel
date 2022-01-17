#include<iostream>
using namespace std;
int main(){
	char c;
	cout<<"char: \n";
	cin>>c;
	

	
    if(c=='a'||c=='i'||c=='o'||c=='u'||c=='e'){
    	cout<<" "<<c<<"is vowel";
    }
    else
    if(c=='A'||c=='I'||c=='O'||c=='U'||c=='E')
    {
    	cout<<" "<<c<<"is VOWEL";
    }
    else
    {
    	cout<<" "<<c<<"is constant";
    }

return 0;
}
