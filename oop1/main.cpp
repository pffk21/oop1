#include <iostream>
using namespace std;
int main() {

	    int a,b,c;
	    char znak;
	    do{
	        cout<<"1 - calculator\n2 - exit\n";
	        cin>>a;
	
	        switch(a)
	        {
	            case 1:
	                cout<<"¬ведите ваш пример: ";
	                cin>>b>>znak>>c;
	                switch(znak)
	                {
	                    case'+':
	                        cout<<b+c<<endl;
	                        break;
	                    case'-':
	                        cout<<b-c<<endl;
	                        break;
	                    case'/':
	                        cout<<b/c<<endl;
	                        break;
	                    case'*':
	                        cout<<b*c<<endl;
	                }
	
	
	
	        }
	    }while(a!=2);
}