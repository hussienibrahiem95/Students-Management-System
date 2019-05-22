
//Hussien Ibrahiem abu elhassn
//sec 3



#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <cstdlib> 
#include<fstream> // for file
using namespace std;
struct student {string name; int degree;	char grade;}; // data for student 
bool sortdegree(const student a, const student b) {return a.degree > b.degree;} // sort based on degree
bool sortname(const student a, const student b) {return a.name > b.name;} //sort based on name
vector<student>v; // global  variable to used in any function
int n1;// for input choice menu
int line1=0; //count lines of file  
void first_show();
void after_display();
void start();
void first_input();
void Menu();
void Displayname();
int mistakename(string x);
void Displaygrade();
void Displaydegree();
void Searchstudent();
void addstudent();
void savedata();
void menu_input();
void about();
void advatages();
void Displayall();
void lines();
void second_show();
void second_input();
void after_display1();
void takeallthefiles();	
void textcolor( int color ); // this for design with colors
int main()
{
	first_show();
	first_input();
}
void first_show()
{   
	system("CLS");
    textcolor(12);
    cout<<setw(60)<<"**********************************************"<<endl;
	cout<<setw(60)<<"*Wellcome to Program Made By Hussien Ibrahiem*"<<endl;
    cout<<setw(60)<<"**********************************************"<<endl<<endl<<endl;  textcolor(14);
    cout<<setw(60)<<"         1->Start Program                     "<<endl;
    cout<<setw(60)<<"         2->Advantages and how to use program "<<endl;
    cout<<setw(60)<<"         3->About Hussien Ibrahiem            "<<endl;
    cout<<setw(60)<<"         4->Exit                              "<<endl<<endl;
    cout<<setw(60)<<"**********************************************"<<endl<<endl;
    cout<<setw(40)<<"Enter  Your Choice :";
}
void after_display()
{    textcolor(15);
	cout << setw(62)<<" _____________________________________________ " << endl;
    cout << setw(62)<<"|             1- Reurn to Menu                |" <<endl;
	cout << setw(62)<<"|             2- Exit Program                 |" << endl;
	cout << setw(62)<<"|_____________________________________________|"<< "\n";
	cout << setw(51)<< "Enter an option from <1-2> : ";
int n2; // for choice
cin>>n2;
switch(n2)
{
	case 1:Menu(); break;
	case 2:exit(0); break;
	default :	system("CLS");
	cout<<"                         wrong choice please enter 1 or 2"<<endl;
 after_display();
	
}
}

void start()
{
	int num;
	textcolor(12); 
	cout<<setw(51)<<"Enter Number of The Student "<<endl;
		cout<<"                       ";
		textcolor(14); int m=0; 
		cin>>num;
		lines();
		v.resize(num+line1/3);
        int i=line1/3;
for (i ; i < num+line1/3;m++,i++)
      {
	    textcolor(12); 
		cout<<setw(50)<<"Enter Student  "<<m+1<<endl;
	    textcolor(14); 
		cout<<setw(33)<<"Name   : ";
		cin.ignore();
	   	textcolor(9); 
	    getline(cin, v[i].name);
	int m=mistakename(v[i].name);
     while(m==-1)
    {	    
	    textcolor(12); 
        cout<<"                        Enter Name correct :";
		cin.ignore();
	    getline(cin, v[i].name);
	    m=mistakename(v[i].name);
    }
	    textcolor(10); 
		cout<<setw(33)<<"Degree : ";
		textcolor(9); 
		cin >> v[i].degree;
		while(v[i].degree>100||v[i].degree<0)
		{
	    textcolor(12); 
        cout<<"                        Enter degree correct :";
        textcolor(14); 
		cin>>v[i].degree;
		}
		if (v[i].degree <= 100 && v[i].degree >= 81)
		v[i].grade = 'A';
		else if (v[i].degree <= 80 && v[i].degree >= 71)
		v[i].grade = 'B';
		else if (v[i].degree <= 70 && v[i].degree >= 61)
		v[i].grade = 'C';
		else if (v[i].degree <= 60 && v[i].degree >= 50)
		v[i].grade = 'D';
		else
		v[i].grade = 'E';
	  }
	  m=0;
	  savedata();
	after_display();	
}
void first_input()
{
	int n;
	cin>>n;
	system("CLS");
	switch(n)
	{
		case 1:second_show();
		case 2:advatages();
	    case 3:about();
	    case 4:exit(0);
	    default:first_show(); first_input();
	}
}

void Menu()
{
	    system("CLS");
	    textcolor(12);
	    cout<<setw(58)<<"**********************************************"<<endl;
	    cout<<setw(58)<<"*    Wellcome to the  Menu of the program    *"<<endl;
        cout<<setw(58)<<"**********************************************"<<endl; textcolor(14);

	    cout << setw(60)<<" ______________________________________________ " << endl;
		cout << setw(60)<<"|                                              |" <<endl;
		cout << setw(60)<<"|       1- Display all students' names         |" <<endl;
		cout << setw(60)<<"|       2- Display all students' grades        |" << endl;
		cout << setw(60)<<"|       3- Display all students' degrees       |" << "\n";
		cout << setw(60)<<"|       4- Search for a student                |" << "\n";
		cout << setw(60)<<"|       5- Sort students                       |" << "\n";
		cout << setw(60)<<"|       6- add students                        |" << "\n";
		cout << setw(60)<<"|       7- Display students name degree grade  |"<< "\n";
		cout << setw(60)<<"|       8- first Menu                          |"<< "\n";
		cout << setw(60)<<"|       9- exit program                        |"<< "\n";
		cout << setw(60)<<"|______________________________________________|"<< "\n";
		cout << setw(49)<< "Enter an option from <1-9> : ";
		cin>>n1;
		menu_input();
}
void Displayname()
{
	
	system("CLS");
	textcolor(14);
	cout<<setw(60)<<"**********************************************"<<endl;
	cout<<setw(60)<<"*              Students____Names             *"<<endl;
    cout<<setw(60)<<"**********************************************"<<endl;
    cout<<endl;
	for(int i=0;i<v.size();i++)
    {    textcolor(12);
	cout<<"\t\t\t     "<<i+1<<"-";
	    textcolor(14);
	cout<<v[i].name<<endl;
}
	
	after_display();
	
}
void Displaygrade()
{
	
	textcolor(14);
	cout<<setw(60)<<"**********************************************"<<endl;
	cout<<setw(60)<<"*              Students____grades            *"<<endl;
    cout<<setw(60)<<"**********************************************"<<endl;
    cout<<endl;
    
	for(int i=0;i<v.size();i++)
   {textcolor(12); 
   cout<<"\t\t\t     "<<i+1<<"-";
   textcolor(14);
   cout<<v[i].grade<<endl;
   }
after_display();
	
}
void Displaydegree()
{
	
	system("CLS");
	textcolor(14);
	cout<<setw(60)<<"**********************************************"<<endl;
	cout<<setw(60)<<"*              Students____degrees           *"<<endl;
    cout<<setw(60)<<"**********************************************"<<endl;
    cout<<endl;
	for(int i=0;i<v.size();i++)
    {textcolor(12);
	cout<<"\t\t\t     "<<i+1<<"-";
	textcolor(14);
	cout<<v[i].degree<<endl;
    }
	after_display();
	
}
void Searchstudent()
{   system("CLS");
	string x; int c=0; // this to count if any name found or not
	textcolor(12);
	cout<<setw(51)<<"Enter Name of The Student "<<endl;
	cout<<"                         ";
	cin.ignore();
	textcolor(14);
	
	getline(cin,x);
	int m2=mistakename(x);
     while(m2==-1)
    {	    
	    textcolor(12); 
        cout<<"                          Enter Name correct :";
		cin.ignore();
	    textcolor(14); 
		getline(cin, x);
	    m2=mistakename(x);
    }
	for(int i=0;i<v.size();i++)
	{
		if(x==v[i].name)
	{	
	    textcolor(14);
		cout<<setw(33)<<v[i].name<<"     ";textcolor(12);
	    cout<<v[i].degree<<"         ";textcolor(10);
 	    cout<<v[i].grade<<endl;
	c++;
	}
    }
	if(c==0) 
	{ textcolor(12); cout<<setw(49)<<"opps the Name not found!"<<endl;}
    cout<<endl;
    c=0;
after_display();
}

void sortstudent()
{
	system("CLS");
	textcolor(14);
	cout << setw(60)<<" ______________________________________________ " << endl;
	cout << setw(60)<<"|                                              |" <<endl;
	cout << setw(60)<<"|       1- Sort based on names                 |" <<endl;
	cout << setw(60)<<"|       2- Sort based on degrees               |" << endl;
	cout << setw(60)<<"|       3- Exit program                        |" << endl;
	cout << setw(60)<<"|______________________________________________|"<< "\n";
	cout << setw(49)<< "Enter an option from <1-3> : ";
	textcolor(12);
	cin>>n1;
	switch(n1)
{
		
	case 1: sort(v.begin(),v.end(),sortname) ;  
	cout << setw(60)<<"                DoNe Sort                       " << endl;   break;
    case 2: sort(v.begin(),v.end(),sortdegree) ;	  
	cout << setw(60)<<"                DoNe Sort                       " << endl;    break ;
    case 3:exit(0); break;
    default : sortstudent();
}
after_display();
}
void addstudent()
{   system("CLS");
	int num1; // for number of studenet to add to the vector
	textcolor(12);
	cout<<setw(51)<<"Enter Number of The Student "<<endl;
		cout<<"                       ";
		textcolor(14);
		cin>>num1;
		int i=v.size();
	    v.resize(num1+i);
		int y=0; // for cout number of student
		for ( i ; i <v.size();i++,y++)
      {
		
		textcolor(12);
		cout<<setw(50)<<"Enter Student  "<<y+1<<endl;
		textcolor(14);
		cout<<setw(33)<<"Name   : ";
		textcolor(9);
		cin.ignore();
		getline(cin, v[i].name);
	    int m1=mistakename(v[i].name);
        while(m1==-1)
        {	    
	    textcolor(12); 
        cout<<"                        Enter Name correct :";
		cin.ignore();
	    getline(cin, v[i].name);
	    m1=mistakename(v[i].name);
        }
		textcolor(10);
		cout<<setw(33)<<"Degree : ";
		textcolor(9);
		cin >> v[i].degree;
		while(v[i].degree>100||v[i].degree<0)
		{
	    textcolor(12); 
        cout<<"                        Enter degree correct :";
        textcolor(14); 
		cin>>v[i].degree;
		}
		if (v[i].degree <= 100 && v[i].degree >= 81)
		v[i].grade = 'A';
		else if (v[i].degree <= 80 && v[i].degree >= 71)
		v[i].grade = 'B';
		else if (v[i].degree <= 70 && v[i].degree >= 61)
		v[i].grade = 'C';
		else if (v[i].degree <= 60 && v[i].degree >= 50)
		v[i].grade = 'D';
		else
		v[i].grade = 'E';
	  }
	  savedata();
	after_display();
}
void savedata()
{
   system("CLS");
   ofstream myfile;
   myfile.open("text.txt", std::ios_base::app);
   lines();
   for(int i=line1/3;i<v.size();i++)
   {
   	 myfile <<v[i].name<<endl;
   	 myfile <<v[i].degree<<endl;
   	 myfile <<v[i].grade<<endl;
   }
   myfile.close();
   
}
void lines()
{
string line;
ifstream myfile; // to read from file 
myfile.open("text.txt", std::ios_base::app);
line1=0;
 while(!myfile.eof()){
            getline(myfile,line);
            if(line.size()!=0)
           line1++;
                    }
        myfile.close();
}

void menu_input()
{
	system("CLS");
	switch(n1)
	{
		case 1:Displayname(); break;
		case 2:Displaygrade(); break;
		case 3:Displaydegree(); break;
		case 4:Searchstudent(); break;
		case 5:sortstudent(); break;
		case 6:addstudent(); break;
		case 7:Displayall(); break;
		case 8:first_show() ; first_input();
		case 9:exit(0);
	    default:Menu();
	
	
	}
	 
}
void textcolor( int color )
{
	HANDLE handle= GetStdHandle( STD_OUTPUT_HANDLE );
	SetConsoleTextAttribute( handle, color );
	return ;
}
void about()
{
	system("CLS");
	textcolor(12);
	cout<<"               My Name : ";	textcolor(14);
	cout<<"Hussien Ibrahiem abu elhassan"<<endl<<endl;	textcolor(12);
	cout<<"               Date Of Birth : ";	textcolor(14);
	cout<<"7/11/1995"<<endl<<endl;	textcolor(12);

	cout<<"               From : ";	textcolor(14);
	cout<<"Cairo"<<endl<<endl;	textcolor(12);

	cout<<"               Live in : ";	textcolor(14);
	cout<<"Assuit"<<endl<<endl;	textcolor(12);
	cout<<"               Study in : ";	textcolor(14);
	cout<<"Faculty of computer and information Assuit Universty"<<endl<<endl; 	textcolor(12);
	cout<<"               Email : ";	textcolor(14);
	cout<<"hussienibrahiem1995@hotmail.com"<<endl<<endl;
    after_display1();	
}
void after_display1()
{    textcolor(15);
	cout << setw(62)<<" _____________________________________________ " << endl;
    cout << setw(62)<<"|             1- Reurn to Menu                |" <<endl;
	cout << setw(62)<<"|             2- Exit Program                 |" << endl;
	cout << setw(62)<<"|_____________________________________________|"<< "\n";
	cout << setw(51)<< "Enter an option from <1-2> : ";
int n2; // for choice
cin>>n2;
switch(n2)
{
	case 1:first_show(); first_input(); break;
	case 2:exit(0); break;
	default :system("CLS");
	cout<<"                         wrong choice please enter 1 or 2"<<endl;
 after_display1();
	
}
}
void advatages()
{
	textcolor(12);
	cout<<"                          Advantages Of Program"<<endl<<endl;
	cout<<"                  1- ";	textcolor(14);
	cout<<"You can save your data in afile"<<endl<<endl;	textcolor(12);
	cout<<"                  2- ";	textcolor(14);
	cout<<"You can add student any time while running"<<endl<<endl;	textcolor(12);
	cout<<"                  3- ";	textcolor(14);
	cout<<"The program not end until you say ***"<<endl<<endl;	textcolor(12);
	cout<<"                  4- ";	textcolor(14);
	cout<<"Display All Data of all studenet at any time....."<<endl<<endl;	textcolor(12);
	textcolor(12);
	cout<<"                          How   to use program??"<<endl<<endl;
	cout<<"1-";	textcolor(14);
	cout<<"You enter start program and shoud enter the number students you need to store"<<endl<<endl;	textcolor(12);
	cout<<"2-";	textcolor(14);
	cout<<"After That you shoud enter name and degree to all student"<<endl<<endl;	textcolor(12);
	cout<<"3-";	textcolor(14);
	cout<<"Be Careful Dont enter degree than 100 and dont enter name with numbers ***"<<endl<<endl;	textcolor(12);
	cout<<"4-";	textcolor(14);
	cout<<"Enjoy............................"<<endl<<endl;
	after_display1();
}
void Displayall()
{
	
	system("CLS");
	cout<<setw(60)<<"**********************************************"<<endl;
	cout<<setw(60)<<"*       Students____Names__degrees__grades   *"<<endl;
    cout<<setw(60)<<"**********************************************"<<endl<<endl;
    for(int i=0;i<v.size();i++)
	{textcolor(14);
	cout<<setw(33)<<v[i].name<<"     ";textcolor(12);
	cout<<v[i].degree<<"         ";textcolor(10);
 	cout<<v[i].grade<<endl;
    }
    after_display();
}
void second_show()
{
	system("CLS");
	textcolor(14);
	cout << setw(62)<<" _____________________________________________ " << endl;
    cout << setw(62)<<"|             1- Need to Enter Students       |" <<endl;
	cout << setw(62)<<"|             2- Menu of Students             |" << endl;
	cout << setw(62)<<"|             3- First Menu                   |" << endl;
    cout << setw(62)<<"|             4- Exit                         |" << endl;
	cout << setw(62)<<"|_____________________________________________|"<< "\n";
	cout << setw(51)<< "Enter an option from <1-4> : ";
	cin>>n1;
	second_input();
}
void second_input()
{
	switch(n1)
	{
	case 1: takeallthefiles();  start();  	 break;
	case 2:Menu(); break;
	case 3:first_show(); first_input(); break;
	case 4:exit(0);
	default :second_show();
    }
}
void takeallthefiles()
{
   system("CLS");
   ifstream myfile1;
   lines();
   v.resize(line1/3);
   myfile1.open("text.txt", std::ios_base::app);
   for(int i=0;i<v.size();i++)
   {
   	 myfile1 >>v[i].name;
   	 myfile1 >>v[i].degree;
   	 myfile1 >>v[i].grade;
   }
   myfile1.close();
}
int mistakename(string x)
{
	int n=0;
	for(int i=0;i<x.size();i++)
	{
		if(!(isalpha(x[i])))
		if(x[i]!=' ')
		return -1;
	}
	return 1;
}

