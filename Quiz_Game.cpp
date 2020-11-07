#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int Q_NO=1;
int CORRECT=0;
int WRONG=0;
bool ask[10]={true,true,true,true,true,true,true,true,true,true};

void display_random_question();
void display();
void question(string question,string a,string b,string c,string d,char correct_answer);
void result();
int main()
{
	display();
	return 0;
}
void display()
{
	system("cls");
	cout<<"Question NO: "<<Q_NO<<"\t\tCorrect Answer: "<<CORRECT<<"\t\tWrong Answer: "<<WRONG<<endl<<endl;
	
	display_random_question();
}
void display_random_question()
{
	srand(time(0));
	bool is_question_remaining =false;
	for(int i=0;i<10;i++)
	{
		if(ask[i])
		{
			is_question_remaining = true;
			break;
		}
	}
	while(is_question_remaining)
	{
		int no = rand()%10;
		if(ask[no])
		{
			ask[no]=false;
			switch(no)
			{
				case 0:
					question("1. Which language the object oriented programming techinque?","C","C++","Cobal","Fortran",'b');
					break;
				case 1:
					question("2. Why c++?","OOPs","OOPS+Function","Function","Powerfull",'b');
					break;
				case 2:
					question("3. What is Variable?","A empty container in which we store data","box","Datatype","Language",'a');
					break;
				case 3:
					question("4. How much byte did int take?","1","3","4","2",'c');
					break;
				case 4:
					question("5. 1 byte?","8 bit","9 bit","7 bit","4 bit",'a');
					break;
				case 5:
					question("6. Pointer ?","Store address of other variable","Store address of same variable","box","All the above",'a');
					break;
				case 6:
					question("7. Time complexity of Quicksort","n^2","n","nlogn","2n",'c');
					break;
				case 7:
					question("8. C++ advantage over C","OOP","Powerful","easy","Same",'a');
					break;
				case 8:
					question("9. Stack queue is a ","Abstract datatype","linear datatype","Same","None of the above",'a');
					break;
				case 9:
					question("10. (1+2)*3/3*(1+2)","1","9","1/9","6",'a');
					break;					
			}
		}
	}
	result();
}
void result()
{
	system("cls");
	cout<<"Total Question = "<<Q_NO-1<<endl;
	cout<<"Correct Answers = "<<CORRECT<<endl;
	cout<<"Wrong Answer = "<<WRONG<<endl;
	
	if(CORRECT>WRONG)
	cout<<"Result = PASS"<<endl;
	
	else if(WRONG>CORRECT)
	cout<<"RESULT  = FAIL"<<endl;
	
	else
	cout<<"Result = TIE"<<endl;
}
void question(string question,string a,string b,string c,string d,char correct_answer)
{
	cout<<question<<endl;
	cout<<"A.\t"<<a<<endl;
	cout<<"B.\t"<<b<<endl;
	cout<<"C.\t"<<c<<endl;
	cout<<"D.\t"<<d<<endl;
	char answer;
	cin>>answer;
	if(answer==correct_answer)
	{
		CORRECT++;
	}
	else
	{
		WRONG++;
	}
	Q_NO++;
	display();
}
