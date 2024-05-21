
#include<iostream>
Using namespace std ;
Class student
{ 
	Public:
           Int id;
           Char name;
            Void getdetails()
            {
     	      Cout<<"enter student id:";
     	      Cin>>id;
     	      Cout<<"enter student name:":
     	      Cin>>name;
             }
 };
 
  Class exam
{
	Public:
	        Int s1,s2,s3,min_marks,max_marks;
	        Void marks()
      	{
		     Cout<<"enter the marks of subjects:";
                   Cin>>s1>>s2>>s3;
                   Max_marks=300;
                   Cout<<" maximum marks of five subjects:"<<max_marks;
                   Min_marks=s1+s2+s3;
                   Cout<<"minimum marks of 5 subjects scored by student:"<<min_marks;
               }
};
              
  
Class result : public student, public exam
{
	Public:
	          Float percentage;
	          Void calculate()
	          {
	          	Cout<<" total marks="<<min_marks;
	          	Percentage=min_marks/max_marks*100
	                 Cout<<"percentage of marks :"<<percentage;
	             }
};
Int main()
{
	Result S;
	S.getdetails()
	S.marks()
	S calculate ()
	Return 0;

