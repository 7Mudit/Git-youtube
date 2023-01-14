#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x1 , y1 , x2 , y2;
	    cin >> x1 >> y1 >> x2 >> y2;
	    
	    
	    int alex = pow(abs(x1) , 2) + pow(abs(y1) , 2);
	    int bob = pow(abs(x2) , 2) + pow(abs(y2) , 2);
	    cout << alex << bob << endl; 
	    double  dist1=sqrt(alex);
	    double dist2=sqrt(bob);
        cout<<dist1<<" "<<dist2<<endl;
	    if(dist1 == dist2){
	        cout<<"Equal"<<endl;
	    }
	    else if(dist1 > dist2){
	        cout << "Alex" <<endl;
	    }
	    else
	        cout<< "Bob"<<endl;
	        

	}
	return 0;
}
