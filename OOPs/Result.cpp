#include<iostream>
#include<string>
using namespace std;

class Student_info
{
    protected:
    string Name;
    int roll_no;

    public:
    int enter_student_id()
    {
       
            cout<<"Enter 10 student details :\n";
            cout<<"\n"<<"Enter student Roll no.(natural number) :";
            cin>>roll_no;
            cin.ignore();
            cout<<"Enter student name :";
            getline(cin,Name);
           
    }
    inline void display_student_id()
    {
        cout<<"Student Name :"<<Name<<"\n";
        cout<<"Roll No. :"<<roll_no<<"\n";
    }

};

class marks : public Student_info 
{
    protected:
    
    int mark[5];
    float average,total,percentage;

    public:
    marks()
    {
        total=0;
        average=0;
        percentage=0;   
    }
    int enter_marks()
    {
        start:
        total=0;
        try
        {
           cout<<"Enter marks of 5 subjects :\n";
           for(int i=0;i<5;i++)
           {
               cout<<"Subject "<<i+1<<" :";
               cin>>mark[i];
           }
           bool all_zero = true;
           for(int i=0;i<5;i++)           
           {
               if(mark[i]!=0)
               {
                   all_zero=false;
                   break;
               }
           }
              if(all_zero)
              {
                throw "All marks cannot be zero! Please re-enter the marks.\n";
              }

              for(int i=0;i<5;i++)
              {
                  total+=mark[i];
              }
                average=total/5;
                percentage = (float(total)/500)*100;        
        }
       
        catch(const char* msg)
        {
            cout<<msg;
            goto start; // Prompt user to re-enter marks
        }
    cout<<"\n"<<"Marks entered successfully!\n";
    }
    inline void display_marks()
    {
        cout<<"Total Marks :"<<total<<"\n";
        cout<<"Average Marks :"<<average<<"\n";
        cout<<"Percentage :"<<percentage<<"%\n";
    }
        
};

int main()
{
    marks s[10];    
    cout<<"Enter details of 10 students :\n";
    for(int i=0;i<10;i++)
    {
        s[i].enter_student_id();
        s[i].enter_marks();
    }
    cout<<"\n"<<"Details of top 5 students are :\n";
    for(int i=0;i<5;i++)
    {
        s[i].display_student_id();
        s[i].display_marks();
    }
    
    return 0;
}

