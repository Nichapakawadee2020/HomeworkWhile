#include <iostream>
using namespace std;
int main()
{
	 char grade ;
     float Gpa = 0;
	 int num = 0;
	 int count = 0;
	 int total = 0;
	
	while(grade!= 'x' && grade !='X'){
     cout<<"Enter the letter gade (Enter 'X' to exit) : " ;
     cin>>grade;
	 cout<<"\n";
   if(grade!= 'x' && grade != 'X'){
	
	 if(grade == 'a' || grade == 'A')
	 {
		 num = 4;
		 total += num;	
	 }
	 else if(grade =='b' || grade == 'B') 
	 {
         num = 3;
		 total += num; 
	 }
	 else if(grade =='c' || grade == 'C') 
	 {
         num = 2;
		 total += num;  
	 }
	 else if(grade =='d' || grade == 'D') 
	 {
         num = 1;
		 total += num;  
	 }
	 else if(grade =='f' || grade == 'F') 
	 {
		 num = 0;
		 total += num;
	 }
	
     else
	 {
		 cout<<"Invalid"<<endl;
		
     }
	 	
     }
   
        count ++;	

     }
    cout<<"Total Grade Points : " << total <<endl;
	Gpa = (float) total/(count-1);
	cout<<"GPA : " << Gpa <<endl;

        return 0;
	}
	